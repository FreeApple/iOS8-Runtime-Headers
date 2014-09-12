/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, NSMapTable, NSArray, NSMutableArray;

@interface SKUIStorePageSplitCollectionViewLayout : _UICollectionViewCompositionLayout <SKUIStorePageCollectionViewLayout> {
    NSString *_backdropGroupName;
    NSMutableArray *_orderedSublayouts;
    bool_rendersWithPerspective;
    NSMapTable *_sublayoutToSectionsToIndexRanges;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * backdropGroupName;
@property(readonly) NSArray * indexPathsForPinningItems;
@property bool rendersWithPerspective;


- (void)_createSectionsToIndexRangesMapTableIfNeededForSublayout:(id)arg1;
- (id)backdropGroupName;
- (id)pinnedLayoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForUnpinnedItemAtIndexPath:(id)arg1;
- (void)addSublayoutsUsingSplitsDescription:(id)arg1;
- (void)setRendersWithPerspective:(bool)arg1;
- (id)indexPathsForPinningItems;
- (id)_newStorePageCollectionViewLayout;
- (bool)rendersWithPerspective;
- (void)setBackdropGroupName:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)removeSublayout:(id)arg1;
- (void)addSublayout:(id)arg1 forElementKinds:(id)arg2;
- (void)addSublayout:(id)arg1 forItems:(id)arg2 inSection:(long long)arg3 offset:(struct CGPoint { double x1; double x2; })arg4 relativeToEdges:(unsigned long long)arg5 fromSiblingLayout:(id)arg6;
- (void)addSublayout:(id)arg1 forSections:(id)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 relativeToEdges:(unsigned long long)arg4 fromSiblingLayout:(id)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForLayout:(id)arg1 offset:(struct CGPoint { double x1; double x2; })arg2 relativeToEdges:(unsigned long long)arg3 fromSiblingLayout:(id)arg4;
- (id)sublayouts;

@end
