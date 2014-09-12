/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, NSMapTable, SKUINavigationBarViewElement;

@interface SKUINavigationBarButtonsController : SKUINavigationBarSectionController <SKUIItemOfferButtonDelegate> {
    NSMapTable *_buttonItemElements;
    SKUINavigationBarViewElement *_navigationBarElement;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)_buttonAction:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_imageInsetsForImageViewElement:(id)arg1;
- (id)_imageForImageViewElement:(id)arg1;
- (void)_reloadButtonItem:(id)arg1 withButtonViewElement:(id)arg2;
- (void)_updateItemOfferButton:(id)arg1 withButtonViewElement:(id)arg2;
- (void)_itemOfferAction:(id)arg1;
- (void)_updateButtonItem:(id)arg1 withButtonViewElement:(id)arg2;
- (id)addButtonItemWithButtonViewElement:(id)arg1;
- (id)initWithNavigationBarViewElement:(id)arg1;
- (id)barButtonItemForElementIdentifier:(id)arg1;
- (void)disconnectAllButtons;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)_showConfirmationAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)reloadAfterDocumentUpdateWithNavigationItem:(id)arg1;
- (void).cxx_destruct;

@end
