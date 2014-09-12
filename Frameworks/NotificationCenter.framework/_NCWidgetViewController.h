/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
 */

@class UIView, NSString, <UIViewControllerAnimatedTransitioning>, _UIViewControllerTransitionContext, NSObject<OS_dispatch_queue>, UIViewController<NCWidgetProviding>, NSMapTable;

@interface _NCWidgetViewController : UIViewController <_NCWidgetViewController_Service_IPC, SBUISizeObservingViewDelegate> {
    UIViewController<NCWidgetProviding> *_contentProvidingViewController;
    NSString *_widgetIdentifier;
    UIView *_contentView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _clientMarginInsets;
    double _clientPreferredViewHeight;
    NSMapTable *_activeTransitionContextsByRequestID;
    NSObject<OS_dispatch_queue> *_remoteViewControllerProxyQueue;
    <UIViewControllerAnimatedTransitioning> *_transitionController;
    _UIViewControllerTransitionContext *_activeTransitionContext;
    NSMapTable *_wrappedAppearStatesToOpenTransactionIDs;
    struct { 
        unsigned int implementsPerformUpdateWithCompletionHandler : 1; 
        unsigned int implementsMarginInsets : 1; 
        unsigned int implementsContentWidthDidChange : 1; 
    } _contentProvidingViewControllerFlags;
}

@property(getter=_contentProvidingViewController,retain) UIViewController<NCWidgetProviding> * contentProvidingViewController;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (void)_reduceTransparencyDidChange:(id)arg1;
+ (void)initialize;
+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;

- (void)sizeObservingView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setContentProvidingViewController:(id)arg1;
- (void)_performUpdateWithCompletionHandler:(id)arg1;
- (void)_encodeLayerTree:(id)arg1;
- (id)_customAnimator:(bool)arg1;
- (id)_transitionContextForRequestIdentifier:(id)arg1;
- (id)_contentProvidingViewController;
- (void)_requestPreferredViewHeight:(double)arg1 usingAutolayout:(bool)arg2;
- (id)_transitionContextForRequestIdentifier:(id)arg1 usingAutolayout:(bool)arg2 createIfNecessary:(bool)arg3;
- (void)_closeTransactionWithAppearState:(int)arg1;
- (void)_enqueueProxyRequest:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sanitizedClientFrameFromHostSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_requestMarginInsets;
- (void)_setContentProvidingViewController:(id)arg1;
- (double)_sanitizedClientContentWidthForProposedHostWidth:(double)arg1;
- (void)__openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2;
- (void)__performUpdateWithReplyHandler:(id)arg1;
- (void)__requestEncodedLayerTreeWithReplyHandler:(id)arg1;
- (void)__performOutstandingCompletionForRequestWithIdentifier:(id)arg1;
- (void)__performOutstandingAnimationsForRequestWithIdentifier:(id)arg1;
- (void)__viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 requestIdentifier:(id)arg2;
- (void)__setWidgetIdentifier:(id)arg1;
- (void)_openURL:(id)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)dealloc;
- (bool)_shouldRemoveViewFromHierarchyOnDisappear;
- (void)_willAppearInRemoteViewController;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (bool)_disableAutomaticKeyboardBehavior;

@end
