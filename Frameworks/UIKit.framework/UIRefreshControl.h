/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UIScrollView, _UIRefreshControlContentView, NSAttributedString;

@interface UIRefreshControl : UIControl  {
    long long _style;
    _UIRefreshControlContentView *_contentView;
    UIScrollView *_scrollView;
    double _refreshControlHeight;
    double _visibleHeight;
    double _snappingHeight;
    double _additionalTopInset;
    bool_insetsApplied;
    bool_adjustingInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _appliedInsets;
    int _refreshControlState;
}

@property(getter=isRefreshing,readonly) bool refreshing;
@property(retain) UIColor * tintColor;
@property(retain) NSAttributedString * attributedTitle;
@property(readonly) int refreshControlState;
@property(readonly) long long style;
@property(readonly) double _refreshControlHeight;
@property(readonly) double _snappingHeight;
@property(readonly) double _visibleHeight;
@property(getter=_isApplyingInsets,readonly) bool _applyingInsets;
@property(getter=_appliedInsets,readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } appliedInsets;

+ (id)_defaultColor;
+ (Class)_contentViewClassForStyle:(long long)arg1;

- (void)setBackgroundColor:(id)arg1;
- (id)_contentView;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)style;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)_update;
- (double)_scrollViewHeight;
- (double)_snappingHeight;
- (bool)isRefreshing;
- (bool)_canTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)_setRefreshControlState:(int)arg1 notify:(bool)arg2;
- (double)_stiffnessForVelocity:(double)arg1;
- (void)_setVisibleHeight:(double)arg1;
- (double)_visibleHeightForContentOffset:(struct CGPoint { double x1; double x2; })arg1 origin:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })_originForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateConcealingMask;
- (void)_updateHiddenStateIfNeeded;
- (int)_recomputeNewState;
- (double)revealedFraction;
- (void)_addInsetHeight:(double)arg1;
- (void)_removeInsetHeight:(double)arg1;
- (void)_resizeToFitContents;
- (void)setRefreshControlState:(int)arg1;
- (void)_updateSnappingHeight;
- (double)_visibleHeight;
- (id)attributedTitle;
- (void)_setAttributedTitle:(id)arg1;
- (id)_attributedTitle;
- (id)initWithStyle:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_appliedInsets;
- (void)endRefreshing;
- (void)beginRefreshing;
- (void)_addInsets;
- (void)_removeInsets;
- (int)refreshControlState;
- (bool)_isApplyingInsets;
- (double)_refreshControlHeight;
- (id)_tintColor;
- (void)_setTintColor:(id)arg1;
- (void)_didScroll;
- (void)willMoveToSuperview:(id)arg1;
- (void)didMoveToSuperview;
- (void)sizeToFit;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;

@end
