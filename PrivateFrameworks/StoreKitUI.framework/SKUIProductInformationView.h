/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIColorScheme, NSArray, NSString, UIView, NSMutableArray, UILabel;

@interface SKUIProductInformationView : UIView  {
    SKUIColorScheme *_colorScheme;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentInset;
    NSArray *_informationLines;
    NSMutableArray *_imageValues;
    NSMutableArray *_keyLabels;
    UIView *_separatorView;
    UILabel *_titleLabel;
    NSMutableArray *_valueLabels;
}

@property(retain) SKUIColorScheme * colorScheme;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property(retain) NSArray * informationLines;
@property bool hidesSeparatorView;
@property(retain) NSString * title;


- (id)informationLines;
- (bool)hidesSeparatorView;
- (double)_keyWidth;
- (void)setInformationLines:(id)arg1;
- (void)setHidesSeparatorView:(bool)arg1;
- (void)setColorScheme:(id)arg1;
- (id)colorScheme;
- (void)setBackgroundColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
