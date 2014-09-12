/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OCCancel, OITSUTemporaryDirectory;

@interface OCMapper : NSObject  {
    OCCancel *mCancel;
    OITSUTemporaryDirectory *mTemporaryDirectoryObject;
}

+ (id)mapperForCurrentThread;

- (id)temporaryDirectoryPath;
- (void)quit;
- (void)setup;
- (bool)isCancelled;
- (id)init;
- (void)cancel;
- (void)teardown;
- (void)dealloc;

@end
