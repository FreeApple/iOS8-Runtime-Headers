/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, _UIBackdropView, NSArray, UIView;

@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView  {
    UIView *_arrowView;
    UIView *_leftCapView;
    UIView *_rightCapView;
    _UIBackdropView *_blurView;
    NSArray *_dimmingViews;
    UIColor *_popoverBackgroundColor;
    double _arrowOffset;
    unsigned long long _arrowDirection;
    long long _backgroundStyle;
    bool_arrowVisible;
    booluseShortMode;
    bool_debugMode;
    double _dimmingViewTopEdgeInset;
}

@property long long backgroundStyle;
@property(getter=isArrowVisible) bool arrowVisible;
@property double dimmingViewTopEdgeInset;
@property bool useShortMode;
@property(getter=isDebugModeEnabled) bool debugModeEnabled;
@property(copy) UIColor * popoverBackgroundColor;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentViewInsets;
+ (double)arrowBase;
+ (double)arrowHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (double)dimmingViewTopEdgeInset;
- (void)setDebugModeEnabled:(bool)arg1;
- (bool)isDebugModeEnabled;
- (void)setUseShortMode:(bool)arg1;
- (void)setArrowVisible:(bool)arg1 animated:(bool)arg2;
- (void)setArrowVisible:(bool)arg1;
- (bool)isArrowVisible;
- (void)setPopoverBackgroundColor:(id)arg1;
- (id)popoverBackgroundColor;
- (void)setBackgroundStyle:(long long)arg1 animated:(bool)arg2;
- (long long)backgroundStyle;
- (void)setDimmingViewTopEdgeInset:(double)arg1;
- (double)arrowOffset;
- (void)setArrowOffset:(double)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (bool)wouldPinForOffset:(double)arg1;
- (bool)hasComponentViews;
- (id)_shadowPath;
- (double)_shadowOpacity;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_shadowInsets;
- (void)_layoutArrowViewsNone;
- (void)_layoutArrowViewsLeftOrRight;
- (void)_layoutArrowViewsUpOrDown;
- (bool)useShortMode;
- (bool)isRightArrowPinnedToBottom;
- (bool)isRightArrowPinnedToTop;
- (double)maxNonPinnedOffset;
- (double)minNonPinnedOffset;
- (void)_loadNecessaryViews;
- (double)_shadowRadius;
- (void)setArrowDirection:(unsigned long long)arg1;
- (unsigned long long)arrowDirection;
- (struct CGSize { double x1; double x2; })_shadowOffset;
- (void)motionCancelled:(long long)arg1 withEvent:(id)arg2;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (bool)isPinned;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)didMoveToWindow;

@end
