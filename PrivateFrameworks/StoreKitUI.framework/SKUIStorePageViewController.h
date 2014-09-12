/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSDictionary, SSVLoadURLOperation, UIRefreshControl, NSString, SSMetricsPageEvent, NSURLRequest, <SKUIStorePageDelegate>, SKUIStorePage, NSOperationQueue, SKUIClientContext, SKUIColorScheme, SKUIStorePageSectionsViewController, SKUIMetricsController;

@interface SKUIStorePageViewController : UIViewController <SKUIStorePageSectionsDelegate, SKUIViewControllerTesting, SKUIMetricsViewController, UIViewControllerRestoration> {
    SKUIClientContext *_clientContext;
    <SKUIStorePageDelegate> *_delegate;
    NSString *_lastDataConsumerClassName;
    SSMetricsPageEvent *_lastPageEvent;
    NSURLRequest *_lastRequest;
    bool_loadOnAppear;
    SSVLoadURLOperation *_loadOperation;
    NSOperationQueue *_operationQueue;
    SKUIMetricsController *_metricsController;
    NSString *_performanceTestName;
    NSDictionary *_performanceTestOptions;
    SKUIColorScheme *_placeholderColorScheme;
    UIRefreshControl *_refreshControl;
    SKUIStorePageSectionsViewController *_sectionsViewController;
    SKUIStorePage *_storePage;
}

@property(getter=isLoading,readonly) bool loading;
@property(copy) SKUIStorePage * storePage;
@property(retain) SKUIClientContext * clientContext;
@property <SKUIStorePageDelegate> * delegate;
@property(retain) NSOperationQueue * operationQueue;
@property(retain) UIRefreshControl * refreshControl;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (bool)_shouldForwardViewWillTransitionToSize;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void)setStorePage:(id)arg1;
- (id)storePage;
- (void)_runPerformanceTestAfterIdle;
- (void)loadWithJSONData:(id)arg1 fromOperation:(id)arg2 completionBlock:(id)arg3;
- (void)loadURL:(id)arg1 withDataConsumer:(id)arg2 completionBlock:(id)arg3;
- (bool)sectionsViewController:(id)arg1 showStorePageForURL:(id)arg2;
- (bool)sectionsViewController:(id)arg1 showProductPageForItem:(id)arg2;
- (void)cancelPageLoad;
- (void)_runPerformanceTestAfterPageLoad;
- (void)_showProductPage:(id)arg1 withPageEvent:(id)arg2;
- (void)_runScrollTestWithName:(id)arg1 options:(id)arg2;
- (void)_recordMetricsPageEvent:(id)arg1 forStorePage:(id)arg2;
- (void)_setStorePage:(id)arg1 error:(id)arg2;
- (void)_reloadStorePage;
- (void)_loadWithOperation:(id)arg1 completionBlock:(id)arg2;
- (void)loadURLRequest:(id)arg1 withDataConsumer:(id)arg2 completionBlock:(id)arg3;
- (void)loadURLRequest:(id)arg1 withCompletionBlock:(id)arg2;
- (id)_sectionsViewController;
- (id)activeMetricsController;
- (void)loadURL:(id)arg1 withCompletionBlock:(id)arg2;
- (void)_metricsEnterEventNotification:(id)arg1;
- (void)setMetricsController:(id)arg1;
- (bool)performTestWithName:(id)arg1 options:(id)arg2;
- (void)sectionsViewControllerDidDismissOverlayController:(id)arg1;
- (void)_setMetricsController:(id)arg1;
- (id)_colorScheme;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (bool)isLoading;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)operationQueue;
- (id)refreshControl;
- (void)setRefreshControl:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;

@end
