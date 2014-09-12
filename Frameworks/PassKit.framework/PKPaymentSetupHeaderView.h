/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class UIImageView, UIActivityIndicatorView, UILabel, UIButton;

@interface PKPaymentSetupHeaderView : UIView  {
    bool_hideImage;
    long long _context;
    UIImageView *_image;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_button;
    UIActivityIndicatorView *_activityIndicator;
    UIImageView *_checkmark;
}

@property long long context;
@property bool hideImage;
@property(retain) UIImageView * image;
@property(retain) UILabel * titleLabel;
@property(retain) UILabel * subTitleLabel;
@property(retain) UIButton * button;
@property(retain) UIActivityIndicatorView * activityIndicator;
@property(retain) UIImageView * checkmark;


- (void)setCheckmark:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (bool)hideImage;
- (bool)isBuddyiPad;
- (id)checkmark;
- (id)subTitleLabel;
- (void)setHideImage:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(long long)arg2;
- (id)_subtitleFont;
- (long long)context;
- (void)setContext:(long long)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (void)dealloc;
- (id)activityIndicator;
- (void)setActivityIndicator:(id)arg1;
- (void)setButton:(id)arg1;
- (id)_titleFont;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (id)button;

@end
