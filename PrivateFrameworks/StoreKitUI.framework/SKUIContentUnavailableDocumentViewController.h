/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIContentUnavailableView, NSString, SKUIViewElementLayoutContext, SKUILayoutCache, SKUIContentUnavailableTemplateElement;

@interface SKUIContentUnavailableDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUIDocumentViewController> {
    SKUIContentUnavailableView *_contentUnavailableView;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIContentUnavailableTemplateElement *_templateElement;
    SKUILayoutCache *_textLayoutCache;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)documentDidUpdate:(id)arg1;
- (void)_reloadContentUnavailableView:(id)arg1 width:(double)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)initWithTemplateElement:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (id)_layoutContext;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsets;
- (void)dealloc;
- (void).cxx_destruct;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;

@end
