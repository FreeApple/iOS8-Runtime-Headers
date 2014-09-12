/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIPageComponent, SKUIProductPageOverlayController, NSArray, NSString, NSIndexPath, SKUIStorePageSectionContext;

@interface SKUIStorePageSection : NSObject <SKUIProductPageOverlayDelegate> {
    bool_bottomSection;
    SKUIPageComponent *_component;
    SKUIStorePageSectionContext *_context;
    SKUIProductPageOverlayController *_overlayController;
    long long _sectionIndex;
    bool_topSection;
}

@property(readonly) SKUIPageComponent * pageComponent;
@property(readonly) SKUIStorePageSectionContext * context;
@property long long sectionIndex;
@property(getter=isBottomSection) bool bottomSection;
@property(getter=isTopSection) bool topSection;
@property(readonly) long long defaultItemPinningStyle;
@property(readonly) bool fitsToHeight;
@property(readonly) NSArray * indexPathsForPinningItems;
@property(readonly) long long numberOfCells;
@property(readonly) struct CGSize { double x1; double x2; } preferredContentSize;
@property(readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionContentInset;
@property(readonly) NSIndexPath * firstAppearanceIndexPath;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)cellForIndexPath:(id)arg1;
- (bool)isBottomSection;
- (void)playVideoWithURL:(id)arg1;
- (id)performItemOfferActionForItem:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })itemRangeForIndexPathRange:(struct SKUIIndexPathRange { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)itemOfferClickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (id)clickEventWithMedia:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (id)clickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (long long)defaultItemPinningStyle;
- (void)sendXEventWithLink:(id)arg1 completionBlock:(id)arg2;
- (void)sendXEventWithItem:(id)arg1 completionBlock:(id)arg2;
- (void)showProductViewControllerWithItem:(id)arg1;
- (void)playVideoForElement:(id)arg1;
- (long long)_itemPinningStyle;
- (id)clickEventWithLink:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (id)_clickEventWithElementName:(id)arg1 index:(long long)arg2 fieldData:(id)arg3;
- (bool)isTopSection;
- (id)backgroundColorForIndexPath:(id)arg1;
- (long long)applyUpdateType:(long long)arg1;
- (id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(long long)arg2;
- (bool)containsElementWithIndexBarEntryID:(id)arg1;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(id)arg2;
- (void)_sendXEventWithDictionary:(id)arg1 completionBlock:(id)arg2;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (id)firstAppearanceIndexPath;
- (void)didAppearInContext:(id)arg1;
- (double)contentInsetAdjustmentForCollectionView:(id)arg1;
- (bool)fitsToHeight;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)deselectItemsAnimated:(bool)arg1;
- (void)collectionViewWillScrollToOffset:(struct CGPoint { double x1; double x2; })arg1 visibleRange:(struct SKUIIndexPathRange { long long x1; long long x2; long long x3; long long x4; })arg2;
- (void)collectionViewDidTapVideoAtIndexPath:(id)arg1;
- (void)collectionViewDidConfirmItemOfferAtIndexPath:(id)arg1;
- (bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (bool)performDefaultActionForViewElement:(id)arg1;
- (void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidConfirmButtonElement:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)numberOfCells;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionContentInset;
- (id)indexPathsForPinningItems;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (long long)pinningTransitionStyleForItemAtIndexPath:(id)arg1;
- (long long)pinningStyleForItemAtIndexPath:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })pinningContentInsetForItemAtIndexPath:(id)arg1;
- (void)invalidateCachedLayoutInformation;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (void)reloadVisibleCellsWithReason:(long long)arg1;
- (bool)requestLayoutWithReloadReason:(long long)arg1;
- (bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(bool)arg3;
- (void)showPageWithLink:(id)arg1;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (void)willHideInContext:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (long long)updateWithContext:(id)arg1 pageComponent:(id)arg2;
- (void)setTopSection:(bool)arg1;
- (void)setBottomSection:(bool)arg1;
- (id)pageComponent;
- (id)initWithPageComponent:(id)arg1;
- (void)setSectionIndex:(long long)arg1;
- (long long)sectionIndex;
- (id)context;
- (void)_setContext:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })preferredContentSize;

@end
