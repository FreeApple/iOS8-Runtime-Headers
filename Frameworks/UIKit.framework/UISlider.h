/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, NSArray, UIImageView, CAShapeLayer, UIView, UIImage;

@interface UISlider : UIControl <NSCoding> {
    float _value;
    float _minValue;
    float _maxValue;
    double _alpha;
    struct __CFDictionary { } *_contentLookup;
    UIImageView *_minValueImageView;
    UIImageView *_maxValueImageView;
    UIImageView *_thumbView;
    UIImageView *_minTrackView;
    UIImageView *_maxTrackView;
    UIView *_maxTrackClipView;
    struct { 
        unsigned int continuous : 1; 
        unsigned int animating : 1; 
        unsigned int preparingToAnimate : 1; 
        unsigned int showValue : 1; 
        unsigned int trackEnabled : 1; 
        unsigned int creatingSnapshot : 1; 
        unsigned int thumbDisabled : 1; 
        unsigned int minTrackHidden : 1; 
    } _sliderFlags;
    double _hitOffset;
    UIColor *_minTintColor;
    UIColor *_maxTintColor;
    UIColor *_thumbTintColor;
    UIView *_thumbViewNeue;
    CAShapeLayer *_thumbViewNeueShape;
    bool_useLookNeue;
    NSArray *_trackColors;
    bool_trackIsArtworkBased;
    bool_thumbIsArtworkBased;
    bool_maxColorIsValid;
    bool_animatingWithDynamics;
    UIImageView *_innerThumbView;
}

@property float value;
@property float minimumValue;
@property float maximumValue;
@property(retain) UIImage * minimumValueImage;
@property(retain) UIImage * maximumValueImage;
@property(getter=isContinuous) bool continuous;
@property(retain) UIColor * minimumTrackTintColor;
@property(retain) UIColor * maximumTrackTintColor;
@property(retain) UIColor * thumbTintColor;
@property(readonly) UIImage * currentThumbImage;
@property(readonly) UIImage * currentMinimumTrackImage;
@property(readonly) UIImage * currentMaximumTrackImage;


- (float)value;
- (void)setValue:(float)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isAccessibilityElementByDefault;
- (void)_setThumbTintColor:(id)arg1 forStates:(unsigned long long)arg2;
- (id)_maxValueView;
- (id)_minValueView;
- (void)_setUseLookNeue:(bool)arg1;
- (bool)_isThumbEnabled;
- (void)_setMinimumTrackVisible:(bool)arg1 withDuration:(double)arg2;
- (void)_setThumbEnabled:(bool)arg1;
- (bool)_trackEnabled;
- (void)_setTrackEnabled:(bool)arg1;
- (void)setShowValue:(bool)arg1;
- (bool)isAnimatingValueChange;
- (void)_setMaximumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setMinimumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setThumbImage:(id)arg1 forStates:(unsigned long long)arg2;
- (id)_maxTrackView;
- (id)_minTrackView;
- (id)thumbTintColor;
- (id)maximumTrackTintColor;
- (id)minimumTrackTintColor;
- (void)setMaximumValue:(float)arg1;
- (void)setMinimumValue:(float)arg1;
- (void)setContinuous:(bool)arg1;
- (void)setMaximumValueImage:(id)arg1;
- (void)setMinimumValueImage:(id)arg1;
- (void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2;
- (double)_cornerRadiusForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)createThumbViewNeue;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_thumbHitEdgeInsets;
- (bool)isContinuous;
- (void)_setValue:(float)arg1 minValue:(float)arg2 maxValue:(float)arg3 andSendAction:(bool)arg4;
- (void)_setValue:(float)arg1 andSendAction:(bool)arg2;
- (void)_sliderAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_sliderAnimationWillStart:(id)arg1 context:(id)arg2;
- (void)setValue:(float)arg1 animated:(bool)arg2;
- (void)_updateAppearanceForEnabled:(bool)arg1;
- (id)currentMaximumTrackImage;
- (id)currentMinimumTrackImage;
- (void)setMaximumTrackImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)_initSubviews;
- (void)_initImages;
- (id)currentThumbImage;
- (float)maximumValue;
- (float)minimumValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })valueTextRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maximumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })minimumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_layoutSubviewsForBoundsChange:(bool)arg1;
- (id)_maximumTrackImageForState:(unsigned long long)arg1;
- (id)_minimumTrackImageForState:(unsigned long long)arg1;
- (id)_thumbImageForState:(unsigned long long)arg1;
- (void)setMinimumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setContent:(id)arg1 forState:(unsigned long long)arg2;
- (id)_contentForState:(unsigned long long)arg1;
- (void)_rebuildControlThumb:(bool)arg1 track:(bool)arg2;
- (id)createThumbView;
- (void)_buildTrackArtwork;
- (void)setThumbImage:(id)arg1 forStates:(unsigned long long)arg2;
- (id)thumbImageForState:(unsigned long long)arg1;
- (void)setMaximumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_updateMaxTrackColor;
- (id)maximumTrackImageForState:(unsigned long long)arg1;
- (void)setMinimumTrackImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)minimumTrackImageForState:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 value:(float)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)maximumValueImage;
- (id)minimumValueImage;
- (void)setThumbTintColor:(id)arg1;
- (void)setMaximumTrackTintColor:(id)arg1;
- (void)setMinimumTrackTintColor:(id)arg1;
- (void)_sendDelayedActions;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setSelected:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (id)_scriptingInfo;
- (bool)_alwaysHandleScrollerMouseEvent;
- (void)tintColorDidChange;
- (bool)cancelMouseTracking;
- (bool)cancelTouchTracking;
- (id)scriptingInfoWithChildren;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setAlpha:(double)arg1;
- (void)_populateArchivedSubviews:(id)arg1;

@end
