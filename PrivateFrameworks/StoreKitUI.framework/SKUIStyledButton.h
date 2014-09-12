/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, UIImageView, SKUIItemOfferButton, SKUIAttributedStringView, <SKUIItemOfferButtonDelegate>, SKUIAttributedStringLayout;

@interface SKUIStyledButton : UIControl <SKUIViewElementOfferButton> {
    SKUIAttributedStringView *_attributedStringView;
    long long _buttonType;
    bool_didInitialHighlightForTouch;
    UIImageView *_disclosureImageView;
    SKUIItemOfferButton *_itemOfferButton;
    <SKUIItemOfferButtonDelegate> *_itemOfferDelegate;
    bool_usesTintColor;
}

@property(readonly) double baselineOffset;
@property(readonly) double firstBaselineOffset;
@property long long buttonType;
@property(retain) SKUIAttributedStringLayout * titleLayout;
@property bool usesTintColor;
@property(getter=isUsingItemOfferAppearance,readonly) bool usingItemOfferAppearance;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property <SKUIItemOfferButtonDelegate> * itemOfferDelegate;

+ (struct CGSize { double x1; double x2; })sizeForTextSize:(struct CGSize { double x1; double x2; })arg1 buttonType:(long long)arg2;
+ (bool)usesItemOfferAppearanceForButtonType:(long long)arg1 itemState:(id)arg2;

- (bool)usesTintColor;
- (void)setUsesTintColor:(bool)arg1;
- (void)setTitleLayout:(id)arg1;
- (void)setButtonType:(long long)arg1;
- (id)itemOfferDelegate;
- (bool)_usesTintColor;
- (void)_itemOfferButtonAction:(id)arg1;
- (bool)isUsingItemOfferAppearance;
- (void)_reloadOverrideTextColor;
- (id)titleLayout;
- (void)_reloadDisclosureImage;
- (bool)setValuesUsingViewElement:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(bool)arg4;
- (void)setItemOfferDelegate:(id)arg1;
- (void)_showConfirmationAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (double)baselineOffset;
- (void)dealloc;
- (void).cxx_destruct;
- (long long)buttonType;
- (double)firstBaselineOffset;
- (void)setHighlighted:(bool)arg1;
- (void)tintColorDidChange;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)_textColor;
- (void)layoutSubviews;

@end
