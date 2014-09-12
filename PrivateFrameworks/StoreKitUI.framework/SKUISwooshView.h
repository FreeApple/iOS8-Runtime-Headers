/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIView, SKUILinkButton, NSString, UIControl, UIButton, UICollectionView, UILabel, UIColor;

@interface SKUISwooshView : UIView  {
    UIView *_borderView;
    UICollectionView *_collectionView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _collectionViewInsets;
    UIButton *_seeAllButton;
    bool_showsChevronForTitle;
    SKUILinkButton *_titleButton;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentInsets;
}

@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property(retain) UICollectionView * collectionView;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } collectionViewInsets;
@property(readonly) UIControl * seeAllControl;
@property(copy) NSString * seeAllTitle;
@property(readonly) UIControl * chevronTitleControl;
@property bool showsChevronForTitle;
@property(copy) NSString * title;
@property(copy) UIColor * titleColor;


- (id)seeAllColorForControlState:(unsigned long long)arg1;
- (bool)showsChevronForTitle;
- (void)setSeeAllColor:(id)arg1 forControlState:(unsigned long long)arg2;
- (id)_seeAllArrowImage;
- (void)setSeeAllTitle:(id)arg1;
- (void)setShowsChevronForTitle:(bool)arg1;
- (id)seeAllControl;
- (id)chevronTitleControl;
- (id)seeAllTitle;
- (void)setCollectionViewInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionViewInsets;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (void)setCollectionView:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTitleColor:(id)arg1;
- (id)titleColor;
- (id)collectionView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
