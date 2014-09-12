/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UILabel, UIButton, UIView;

@interface SKUIStackedBarCell : UIButton  {
    bool_expanded;
    UILabel *_expandedLabel;
    UIButton *_backButton;
    UIView *_separator;
}

@property bool expanded;
@property(readonly) UIButton * backButton;


- (id)backButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (bool)expanded;
- (void)setExpanded:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;

@end
