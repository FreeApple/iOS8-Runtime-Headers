/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class PKPaymentAuthorizationNavigationBarBackgroundView, NSString, UILabel, UIView, UIButton;

@interface PKPaymentAuthorizationNavigationBar : UINavigationBar  {
    PKPaymentAuthorizationNavigationBarBackgroundView *_bgView;
    UILabel *_customTitleView;
    UIButton *_customButton;
    id _customButtonTarget;
    SEL _customButtonAction;
    UIView *_separatorView;
    NSString *_customTitle;
}

@property(retain) NSString * customTitle;


- (id)customTitle;
- (id)_buttonAttributedStringWithString:(id)arg1;
- (id)_titleAttributedStringWithString:(id)arg1 color:(id)arg2;
- (void)_createSubviewsWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCustomButtonHidden:(bool)arg1 animated:(bool)arg2;
- (void)setCustomTitleHidden:(bool)arg1 animated:(bool)arg2;
- (void)setCustomButtonTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setCustomTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_prepareConstraints;

@end
