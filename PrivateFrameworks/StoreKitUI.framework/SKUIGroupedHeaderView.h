/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UILabel, NSString, UIView;

@interface SKUIGroupedHeaderView : UIView  {
    UILabel *_titleLabel;
    UIView *_topBorder;
    UIView *_botBorder;
}

@property bool hasTopBorder;
@property bool hasBottomBorder;
@property(copy) NSString * title;


- (void)setHasBottomBorder:(bool)arg1;
- (bool)hasBottomBorder;
- (void)setHasTopBorder:(bool)arg1;
- (bool)hasTopBorder;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
