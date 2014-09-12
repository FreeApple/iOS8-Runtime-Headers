/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIColor, <SKUIEditorialLinkViewDelegate>, SKUIEditorialLinkLayout, NSMutableArray;

@interface SKUIEditorialLinkView : UIView  {
    NSMutableArray *_buttons;
    <SKUIEditorialLinkViewDelegate> *_delegate;
    UIColor *_highlightedTextColor;
    long long _horizontalAlignment;
    SKUIEditorialLinkLayout *_layout;
    UIColor *_textColor;
}

@property <SKUIEditorialLinkViewDelegate> * delegate;
@property long long horizontalAlignment;
@property(retain) SKUIEditorialLinkLayout * linkLayout;


- (id)linkLayout;
- (void)setLinkLayout:(id)arg1;
- (void)_linkButtonAction:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setHorizontalAlignment:(long long)arg1;
- (long long)horizontalAlignment;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_newButton;
- (void)tintColorDidChange;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
