/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIRowComponent, SKUIProductPageOverlayController, NSString, SKUIMissingItemLoader, SKUIClientContext, SKUILockupComponent, NSMapTable, NSMutableIndexSet;

@interface SKUIRowSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIEmbeddedMediaViewDelegate, SKUIItemStateCenterObserver, SKUIMissingItemDelegate, SKUIProductPageOverlayDelegate> {
    SKUIClientContext *_clientContext;
    NSMapTable *_columnViews;
    NSMapTable *_componentArtworkRequestIDs;
    NSMapTable *_editorialLayouts;
    NSMutableIndexSet *_expandedEditorialIndexes;
    NSMapTable *_galleryViewControllers;
    NSMapTable *_countdownViewControllers;
    bool_isPad;
    double _landscapeCellContentHeight;
    SKUIMissingItemLoader *_missingItemLoader;
    SKUIProductPageOverlayController *_overlayController;
    SKUILockupComponent *_overlaySourceComponent;
    double _portraitCellContentHeight;
}

@property(readonly) SKUIRowComponent * pageComponent;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)cellForIndexPath:(id)arg1;
- (id)_newSizeToFitArtworkRequestWithArtwork:(id)arg1 columnIndex:(long long)arg2;
- (id)_lockupImageForComponent:(id)arg1;
- (id)_imageConsumerWithItem:(id)arg1 lockupSize:(long long)arg2;
- (double)_heightForArtwork:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3;
- (double)_heightForMediaComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3;
- (double)_heightForLockupComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3;
- (double)_heightForGalleryComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3;
- (double)_heightForEditorialComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3;
- (double)_heightForCountdownComponent:(id)arg1 columnIndex:(long long)arg2 rowWidth:(double)arg3;
- (struct SKUILockupStyle { long long x1; long long x2; unsigned long long x3; })_lockupStyleForComponent:(id)arg1 columnIndex:(long long)arg2;
- (id)_newViewWithMediaComponent:(id)arg1;
- (id)_viewControllerForGalleryComponent:(id)arg1;
- (id)_viewControllerForCountdownComponent:(id)arg1;
- (id)_overlaySourceCell;
- (id)_popSourceViewForOverlayController:(id)arg1;
- (void)_enumerateLockupsWithBlock:(id)arg1;
- (id)_editorialLayoutForLockup:(id)arg1 columnIndex:(long long)arg2;
- (id)_editorialLayoutForEditorial:(id)arg1 columnIndex:(long long)arg2;
- (void)_selectMediaComponent:(id)arg1 columnIndex:(long long)arg2;
- (void)_selectLockupComponent:(id)arg1 columnIndex:(long long)arg2;
- (void)_selectGalleryComponent:(id)arg1 columnIndex:(long long)arg2;
- (void)_expandEditorialComponent:(id)arg1 columnIndex:(long long)arg2;
- (void)_setPositionForClickEvent:(id)arg1 elementIndex:(long long)arg2;
- (double)_columnWidthForColumnIndex:(long long)arg1 rowWidth:(double)arg2;
- (double)_cellContentHeightForRowWidth:(double)arg1;
- (double)_heightForComponent:(id)arg1 columnIndex:(double)arg2 rowWidth:(double)arg3;
- (void)_reloadView:(id)arg1 forMediaComponent:(id)arg2 columnIndex:(long long)arg3;
- (void)_loadImagesForGalleryComponent:(id)arg1 columnIndex:(long long)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForColumnIndex:(long long)arg1;
- (id)_columnViews;
- (void)_reloadEditorialCell:(id)arg1 forComponent:(id)arg2 columnIndex:(long long)arg3;
- (void)_reloadLockupCell:(id)arg1 forComponent:(id)arg2 columnIndex:(long long)arg3;
- (void)_reloadEditorialLockupCell:(id)arg1 forComponent:(id)arg2 columnIndex:(long long)arg3;
- (void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (id)_missingItemLoader;
- (id)itemOfferClickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (id)clickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (double)_interColumnSpacing;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2;
- (id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)collectionViewDidConfirmItemOfferAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (long long)numberOfCells;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)invalidateCachedLayoutInformation;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (void)willHideInContext:(id)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)dealloc;
- (void).cxx_destruct;

@end
