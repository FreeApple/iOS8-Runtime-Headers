/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, UIImageView, UIImage, UILabel, UIButton;

@interface SKUIEmptyContentPlaceholderView : UIView  {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _imageInsets;
    UIImageView *_imageView;
    UILabel *_label;
    UIButton *_signInButton;
}

@property(retain) UIImage * placeholderImage;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } placeholderImageInsets;
@property(copy) NSString * placeholderMessage;
@property(readonly) UILabel * placeholderMessageLabel;
@property bool showsSignInButton;
@property(readonly) UIButton * signInButton;


- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })placeholderImageInsets;
- (bool)showsSignInButton;
- (void)setShowsSignInButton:(bool)arg1;
- (void)setPlaceholderMessage:(id)arg1;
- (void)setPlaceholderImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)placeholderMessage;
- (void)maskPlaceholdersInBackdropView:(id)arg1;
- (id)signInButton;
- (id)placeholderMessageLabel;
- (void)setBackgroundColor:(id)arg1;
- (void).cxx_destruct;
- (id)placeholderImage;
- (void)setPlaceholderImage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
