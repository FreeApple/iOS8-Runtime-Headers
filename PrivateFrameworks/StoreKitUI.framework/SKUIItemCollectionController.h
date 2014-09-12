/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIStyledImageDataConsumer, NSString, SKUIResourceLoader, NSArray, UIImage, NSMutableDictionary, SKUIItemArtworkContext, SKUIClientContext, <SKUIItemCollectionDelegate>, SKUIScreenshotDataConsumer;

@interface SKUIItemCollectionController : NSObject <SKUIArtworkRequestDelegate, SKUIItemStateCenterObserver, SKUIResourceLoaderDelegate> {
    SKUIItemArtworkContext *_artworkContext;
    SKUIResourceLoader *_artworkLoader;
    SKUIClientContext *_clientContext;
    <SKUIItemCollectionDelegate> *_delegate;
    bool_delegateProvidesScreenshots;
    NSMutableDictionary *_iconArtworkRequestIDs;
    SKUIStyledImageDataConsumer *_iconDataConsumer;
    NSArray *_items;
    SKUIScreenshotDataConsumer *_landscapeScreenshotDataConsumer;
    UIImage *_landscapeScreenshotPlaceholderImage;
    long long _numberOfItemsPerPage;
    double _numberOfPagesToCacheAhead;
    SKUIScreenshotDataConsumer *_portraitScreenshotDataConsumer;
    UIImage *_portraitScreenshotPlaceholderImage;
    UIImage *_placeholderImage;
    NSMutableDictionary *_screenshotArtworkRequestIDs;
}

@property <SKUIItemCollectionDelegate> * delegate;
@property(retain) SKUIResourceLoader * artworkLoader;
@property(retain) SKUIItemArtworkContext * artworkContext;
@property(retain) SKUIStyledImageDataConsumer * iconDataConsumer;
@property(retain) SKUIScreenshotDataConsumer * landscapeScreenshotDataConsumer;
@property(retain) SKUIScreenshotDataConsumer * portraitScreenshotDataConsumer;
@property(copy) NSArray * items;
@property long long numberOfItemsPerPage;
@property double numberOfPagesToCacheAhead;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)_memoryWarningNotification:(id)arg1;
- (long long)numberOfItemsPerPage;
- (id)_placeholderImageForScreenshot:(id)arg1;
- (id)_screenshotForItem:(id)arg1;
- (id)portraitScreenshotDataConsumer;
- (id)landscapeScreenshotDataConsumer;
- (id)_screenshotArtworkRequestWithItem:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_visibleItemRange;
- (void)_reloadForRestrictionsChange;
- (void)_reloadForItemStateChange:(id)arg1;
- (void)_enumerateVisibleCellLayoutsWithBlock:(id)arg1;
- (double)numberOfPagesToCacheAhead;
- (bool)_loadArtworkForItem:(id)arg1 reason:(long long)arg2;
- (void)_reloadScreenshotForCellLayout:(id)arg1 item:(id)arg2 isRestricted:(bool)arg3;
- (id)_placeholderImageForItem:(id)arg1;
- (id)_iconArtworkRequestWithItem:(id)arg1;
- (id)_initSKUIItemCollectionController;
- (void)setArtworkLoader:(id)arg1;
- (void)cancelArtworkLoadForItemIndex:(long long)arg1;
- (id)performActionForItemAtIndex:(long long)arg1;
- (void)precacheNextPageArtworkForOffset:(struct CGPoint { double x1; double x2; })arg1 direction:(double)arg2;
- (void)setIconDataConsumer:(id)arg1;
- (void)loadNextPageOfArtworkWithReason:(long long)arg1;
- (id)iconDataConsumer;
- (id)_artworkLoader;
- (void)setPortraitScreenshotDataConsumer:(id)arg1;
- (void)setLandscapeScreenshotDataConsumer:(id)arg1;
- (void)setNumberOfPagesToCacheAhead:(double)arg1;
- (void)setNumberOfItemsPerPage:(long long)arg1;
- (void)setArtworkContext:(id)arg1;
- (void)configureCellLayout:(id)arg1 forIndex:(long long)arg2;
- (void)removeAllCachedResources;
- (id)artworkLoader;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)artworkLoaderDidIdle:(id)arg1;
- (id)artworkContext;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (id)initWithClientContext:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;

@end
