/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString, PHFetchResult, NSMutableDictionary;

@interface PLAssetContainerDataSource : NSObject <PHAssetCollectionDataSource> {
    PHFetchResult *_assetCollectionsFetchResult;
    NSMutableDictionary *_assetsFetchResultByAssetCollection;
    unsigned long long _allAssetsCount;
    unsigned long long *_containerCounts;
    bool_cachedValuesNeedUpdate;
    unsigned long long _lastAssetCollectionIndex;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) PHFetchResult * assetCollectionsFetchResult;


- (unsigned long long)assetCountForContainer:(id)arg1;
- (void)_updateCachedCount:(unsigned long long)arg1 forContainerAtContainerIndex:(unsigned long long)arg2;
- (void)_updateCachedValues;
- (unsigned long long)_indexOfPreviousNonEmptyAssetContainerBeforeContainerIndex:(unsigned long long)arg1 wrap:(bool)arg2;
- (unsigned long long)_indexOfNextNonEmptyAssetContainerAfterContainerIndex:(unsigned long long)arg1 wrap:(bool)arg2;
- (id)firstAssetIndexPath;
- (id)lastAssetIndexPath;
- (id)assetInAssetContainer:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)indexOffsetForAssetContainerAtAssetIndex:(unsigned long long)arg1;
- (id)assetContainerForAssetGlobalIndex:(unsigned long long)arg1;
- (id)assetContainerForAsset:(id)arg1;
- (unsigned long long)globalIndexOfAsset:(id)arg1;
- (id)pl_fetchAllAssets;
- (unsigned long long)assetCountForContainerAtIndex:(unsigned long long)arg1;
- (id)indexPathForGlobalIndex:(unsigned long long)arg1;
- (id)assetAtGlobalIndex:(unsigned long long)arg1;
- (id)assetContainerAtIndex:(unsigned long long)arg1;
- (unsigned long long)decrementGlobalIndex:(unsigned long long)arg1 insideCurrentAssetContainer:(bool)arg2 andWrap:(bool)arg3;
- (unsigned long long)incrementGlobalIndex:(unsigned long long)arg1 insideCurrentAssetContainer:(bool)arg2 andWrap:(bool)arg3;
- (id)findNearestIndexPath:(id)arg1 preferNext:(bool)arg2;
- (id)assetsInAssetCollectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)globalIndexForIndexPath:(id)arg1;
- (id)assetWithObjectID:(id)arg1;
- (unsigned long long)indexOfContainer:(id)arg1;
- (unsigned long long)allAssetsCount;
- (bool)hasAssetAtIndexPath:(id)arg1;
- (void)viewControllerPhotoLibraryDidChange:(id)arg1;
- (id)assetsInAssetCollection:(id)arg1;
- (id)assetAtIndexPath:(id)arg1;
- (id)incrementAssetIndexPath:(id)arg1 insideCurrentAssetContainer:(bool)arg2 andWrap:(bool)arg3;
- (id)decrementAssetIndexPath:(id)arg1 insideCurrentAssetContainer:(bool)arg2 andWrap:(bool)arg3;
- (id)indexPathOfAsset:(id)arg1;
- (id)initWithAssetCollectionsFetchResult:(id)arg1 collectionsAssetsFetchResults:(id)arg2;
- (id)assetCollectionsFetchResult;
- (void)dealloc;
- (id)description;

@end
