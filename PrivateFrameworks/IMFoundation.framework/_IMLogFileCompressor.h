/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSMutableArray;

@interface _IMLogFileCompressor : NSObject <IMFileCopierDelegate> {
    NSMutableArray *_archivers;
}

+ (id)sharedInstance;

- (void)compressPath:(id)arg1 toPath:(id)arg2;
- (void)fileCopierDidFinish:(id)arg1;
- (void)fileCopierDidStart:(id)arg1;
- (id)init;
- (void)dealloc;

@end
