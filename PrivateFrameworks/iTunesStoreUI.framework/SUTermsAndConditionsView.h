/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SULinkControl, UIAlertView, SUSubtitledButton, SUClientInterface;

@interface SUTermsAndConditionsView : UIView  {
    UIAlertView *_accountButtonAlert;
    SUSubtitledButton *_button;
    SUClientInterface *_clientInterface;
    bool_hideAccountButton;
    double _rightMargin;
    long long _style;
    SULinkControl *_termsAndConditionsControl;
    SUClientInterface *clientInterface;
}

@property(retain) SUClientInterface * clientInterface;
@property bool hideAccountButton;
@property double rightMargin;
@property long long style;


- (bool)hideAccountButton;
- (void)_termsAndConditionsAction:(id)arg1;
- (void)_updateButton;
- (void)_clearButtonSelection:(id)arg1;
- (id)_termsAndConditionsControl;
- (double)_buttonHeightForStyle:(long long)arg1;
- (long long)_linkStyleForStyle:(long long)arg1;
- (void)_destroyButton;
- (void)_accountsChangedNotification:(id)arg1;
- (void)setHideAccountButton:(bool)arg1;
- (void)_buttonAction:(id)arg1;
- (void)setClientInterface:(id)arg1;
- (id)clientInterface;
- (double)rightMargin;
- (void)setStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)style;
- (void)setRightMargin:(double)arg1;
- (void)dealloc;
- (id)_button;
- (void)sizeToFit;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)layoutSubviews;

@end
