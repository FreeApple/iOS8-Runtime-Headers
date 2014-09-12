/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSOperationQueue, <CKDCancelling>, NSMutableArray;

@interface CKDSaveAssetPackagesOperation : CKDDatabaseOperation  {
    NSArray *_packages;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _assetPackageSavedProgressBlock;

    NSMutableArray *_packagesToSave;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_manifestsToRemove;
    <CKDCancelling> *_cancelToken;
}

@property(copy) NSArray * packages;
@property(copy) id assetPackageSavedProgressBlock;
@property(retain) NSMutableArray * packagesToSave;
@property(retain) NSOperationQueue * operationQueue;
@property(retain) NSMutableArray * manifestsToRemove;
@property(retain) <CKDCancelling> * cancelToken;


- (void)setManifestsToRemove:(id)arg1;
- (void)setPackagesToSave:(id)arg1;
- (id)packages;
- (id)cancelToken;
- (void)_removeManifests;
- (void)_planSectionsForPackage:(id)arg1;
- (id)packagesToSave;
- (void)_fetchAuthTokensForPackage:(id)arg1;
- (id)_MMCSItemsFromPackageItems:(id)arg1 package:(id)arg2;
- (bool)_handleSectionItemSaved:(id)arg1 package:(id)arg2 error:(id*)arg3;
- (void)_saveMMCSManifestItem:(id)arg1 andMMCSSectionItems:(id)arg2 forPackage:(id)arg3;
- (id)manifestsToRemove;
- (void)setCancelToken:(id)arg1;
- (void)_finishPackage:(id)arg1 assets:(id)arg2 error:(id)arg3;
- (void)_saveNextAssetPackage;
- (id)assetPackageSavedProgressBlock;
- (void)setAssetPackageSavedProgressBlock:(id)arg1;
- (void)setPackages:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)cancel;
- (void).cxx_destruct;
- (id)operationQueue;
- (void)setOperationQueue:(id)arg1;

@end
