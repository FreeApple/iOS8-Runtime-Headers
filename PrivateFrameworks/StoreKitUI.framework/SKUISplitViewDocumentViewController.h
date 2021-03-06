/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UISplitViewController, SKUINavigationDocumentController, SKUISplitViewTemplateElement, NSString, UIViewController;

@interface SKUISplitViewDocumentViewController : SKUIViewController <SKUINavigationDocumentDelegate, SKUIDocumentViewController> {
    UIViewController *_delayingPresentationViewController;
    SKUINavigationDocumentController *_leftNavigationDocumentController;
    SKUINavigationDocumentController *_rightNavigationDocumentController;
    UISplitViewController *_splitViewController;
    SKUISplitViewTemplateElement *_templateElement;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (id)_defaultBackgroundColor;
- (void)documentDidUpdate:(id)arg1;
- (void)navigationDocumentStackDidChange:(id)arg1;
- (void)_skui_endDelayingPresentation;
- (bool)_isFullyPopulated;
- (void)_reloadSplitViewControllers;
- (id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2;
- (void)skui_viewWillAppear:(bool)arg1;
- (void)delayPresentationIfNeededForParentViewController:(id)arg1;
- (id)leftBarButtonItemsForDocument:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;

@end
