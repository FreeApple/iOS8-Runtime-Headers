/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSAttributedString, NSString, <SKUIMessageBannerDelegate>, UILabel, UIView, UIButton;

@interface SKUIMessageBanner : UIView  {
    <SKUIMessageBannerDelegate> *_delegate;
    UILabel *_label;
    UIButton *_button;
    UIView *_borderView;
    UIButton *_clearButton;
    NSAttributedString *_attributedMessage;
}

@property <SKUIMessageBannerDelegate> * delegate;
@property(retain) NSString * message;
@property(retain) NSAttributedString * attributedMessage;
@property bool showsClearButton;


- (void)_buttonAction:(id)arg1;
- (id)attributedMessage;
- (void)setShowsClearButton:(bool)arg1;
- (void)_clearButtonAction:(id)arg1;
- (bool)showsClearButton;
- (void)setAttributedMessage:(id)arg1;
- (void)setMessage:(id)arg1;
- (id)message;
- (id)value;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
