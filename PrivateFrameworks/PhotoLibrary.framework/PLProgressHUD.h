/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class _UIBackdropView, UIActivityIndicatorView, UIImageView, UILabel;

@interface PLProgressHUD : UIView  {
    _UIBackdropView *_backdropView;
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_label;
    UIImageView *_checkmarkView;
    bool_isShowing;
}


- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)done;
- (void)dealloc;
- (void)showInView:(id)arg1;
- (void)setText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (void)hide;

@end
