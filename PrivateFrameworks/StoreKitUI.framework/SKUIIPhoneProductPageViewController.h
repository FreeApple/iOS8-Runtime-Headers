/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIProductPagePlaceholderViewController, SKUILoadProductPageOperation, SKUIMessageBanner, SKUIMetricsController, SKUISwooshArrayViewController, SKUIProductPageReviewsViewController, NSURL, SKUINetworkErrorViewController, NSString, SKUIIncompatibleAppViewController, SSMetricsPageEvent, SKUIProductPage, NSURLRequest, SKUIProductPageDetailsViewController, NSOperationQueue, SKUIItem, UIViewController<SKUIProductPageChildViewController>, <SKUIIPhoneProductPageDelegate>, SKUIProductPageHeaderViewController;

@interface SKUIIPhoneProductPageViewController : SKUIViewController <SKUIMetricsViewController, SKUINetworkErrorDelegate, SKUIProductPageHeaderViewDelegate, SKUIProductPageChildViewControllerDelegate, UIScrollViewDelegate, SKStoreProductViewControllerDelegate, SKUIMessageBannerDelegate> {
    bool_askPermission;
    SKUIMessageBanner *_banner;
    NSString *_bannerText;
    UIViewController<SKUIProductPageChildViewController> *_childViewController;
    <SKUIIPhoneProductPageDelegate> *_delegate;
    SKUIProductPageDetailsViewController *_detailsViewController;
    SKUINetworkErrorViewController *_errorViewController;
    SKUIProductPageHeaderViewController *_headerViewController;
    SKUIIncompatibleAppViewController *_incompatibleViewController;
    SKUIItem *_item;
    SSMetricsPageEvent *_lastPageEvent;
    SKUIProductPagePlaceholderViewController *_loadingViewController;
    SKUILoadProductPageOperation *_loadOperation;
    long long _lookupItemIdentifier;
    SKUIMetricsController *_metricsController;
    NSOperationQueue *_operationQueue;
    SKUIProductPagePlaceholderViewController *_relatedPlaceholderViewController;
    SKUIProductPage *_productPage;
    SKUISwooshArrayViewController *_relatedViewController;
    SKUIProductPageReviewsViewController *_reviewsViewController;
    long long _sectionIndex;
    NSURLRequest *_urlRequest;
    bool_wantsActivityViewController;
}

@property(readonly) SKUIItem * item;
@property(readonly) SKUIProductPage * productPage;
@property(readonly) NSURL * URL;
@property <SKUIIPhoneProductPageDelegate> * delegate;
@property bool askPermission;
@property(copy) NSString * bannerText;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)initWithProductPage:(id)arg1;
- (void)_hideBanner;
- (id)_relatedPlaceholderViewController;
- (id)_loadingViewController;
- (void)_animateAddToWishlist;
- (void)_presentHTMLProductPage;
- (void)_invalidateChildViewControllers;
- (void)_showActivityViewController;
- (void)_setHeaderPositionForChildViewController:(id)arg1;
- (void)_setContentInsetsForChildViewController:(id)arg1;
- (void)_setSectionIndexWithFragment:(long long)arg1;
- (id)_initSKUIIPhoneProductPageViewController;
- (id)bannerText;
- (void)askPermissionBannerDidSelect:(id)arg1;
- (void)networkErrorViewControllerInvalidated:(id)arg1;
- (id)_relatedViewController;
- (id)_detailsViewController;
- (bool)_isIncompatibleItem;
- (void)_showError:(id)arg1;
- (id)_viewControllerForSectionIndex:(unsigned long long)arg1;
- (id)_reviewsViewController;
- (void)_showBanner;
- (void)_setProductPage:(id)arg1 error:(id)arg2;
- (struct CGPoint { double x1; double x2; })topContentOffset;
- (void)productPageHeaderViewDidWantAskPermissionBanner:(id)arg1;
- (void)productPageHeaderView:(id)arg1 didReloadItemOffer:(id)arg2;
- (void)productPageHeaderView:(id)arg1 didSelectSectionIndex:(long long)arg2;
- (id)metricsControllerForProductPageHeader:(id)arg1;
- (void)productPageHeaderView:(id)arg1 didSelectURL:(id)arg2;
- (void)_shareButtonAction:(id)arg1;
- (id)_headerViewController;
- (bool)askPermission;
- (void)productPageChildViewControllerDidLoad:(id)arg1;
- (void)productPageChildViewControllerDidScroll:(id)arg1;
- (void)productPageChildOpenURL:(id)arg1 viewControllerBlock:(id)arg2;
- (void)productPageChildOpenItem:(id)arg1;
- (void)productPageChildViewControllerDidLoadScrollView:(id)arg1;
- (void)_reloadChildViewControllers;
- (id)activeMetricsController;
- (void)_metricsEnterEventNotification:(id)arg1;
- (void)_setMetricsController:(id)arg1;
- (id)productPage;
- (void)configureMetricsWithPageEvent:(id)arg1;
- (void)setBannerText:(id)arg1;
- (void)setAskPermission:(bool)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (id)initWithItemIdentifier:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)delegate;
- (id)URL;
- (void)dealloc;
- (void).cxx_destruct;
- (id)item;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)contentScrollView;
- (void)viewWillAppear:(bool)arg1;
- (id)initWithItem:(id)arg1;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)reloadData;

@end
