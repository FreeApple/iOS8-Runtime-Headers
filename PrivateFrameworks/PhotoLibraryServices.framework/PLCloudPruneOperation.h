/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudPruneOperation : PLCloudOperation  {
    bool_cancelled;
}


- (void)runOperationWithCompletionHandler:(id)arg1;
- (unsigned long long)cost;
- (void)requestCancel;
- (void)markAsLocallyAvailable:(bool)arg1;
- (bool)canPruneResource;
- (void)_resetCloudPlaceholderKindForAsset:(id)arg1;
- (id)_cloudResourceForCPLResource:(id)arg1 inPhotoLibrary:(id)arg2 outAssetsAffected:(id)arg3;
- (bool)keepOriginalsEnabled;

@end
