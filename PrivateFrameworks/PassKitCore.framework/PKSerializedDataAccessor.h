/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSData;

@interface PKSerializedDataAccessor : PKFileDataAccessor  {
    NSData *_archiveData;
}


- (void)_removeDiskRepresentation;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(id)arg3;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)archiveData;
- (void)dealloc;

@end
