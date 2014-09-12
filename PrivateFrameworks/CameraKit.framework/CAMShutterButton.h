/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class UIImageView, UIActivityIndicatorView, CAMTimelapseShutterRingView, UIView;

@interface CAMShutterButton : UIButton  {
    bool_pulsing;
    bool_spinning;
    long long _mode;
    UIView *__outerView;
    UIImageView *__outerImageView;
    CAMTimelapseShutterRingView *__timelapseOuterView;
    UIView *__innerView;
    UIActivityIndicatorView *__progressActivityIndicatorView;
    struct CAMShutterButtonSpec { 
        double outerRingDiameter; 
        double outerRingStrokeWidth; 
        double stopSquareSideLength; 
        double stopSquareCornerRadius; 
    } _spec;
}

@property long long mode;
@property struct CAMShutterButtonSpec { double x1; double x2; double x3; double x4; } spec;
@property(getter=isPulsing) bool pulsing;
@property(getter=isSpinning) bool spinning;
@property(readonly) UIView * _outerView;
@property(readonly) UIImageView * _outerImageView;
@property(readonly) CAMTimelapseShutterRingView * _timelapseOuterView;
@property(readonly) UIView * _innerView;
@property(readonly) UIActivityIndicatorView * _progressActivityIndicatorView;

+ (id)shutterButtonWithSpec:(struct CAMShutterButtonSpec { double x1; double x2; double x3; double x4; })arg1;
+ (id)tinyShutterButton;
+ (id)smallShutterButton;
+ (id)shutterButton;

- (id)_progressActivityIndicatorView;
- (bool)isSpinning;
- (bool)isPulsing;
- (void)setPulsing:(bool)arg1;
- (bool)_isStopMode:(long long)arg1;
- (id)_timelapseOuterView;
- (id)_outerImageView;
- (id)_colorForMode:(long long)arg1;
- (id)_innerView;
- (double)_borderWidthForMode:(long long)arg1;
- (id)_outerView;
- (bool)_shouldUseTimelapseOuterViewForMode:(long long)arg1;
- (id)_outerImageForMode:(long long)arg1;
- (bool)_shouldUseImageViewForMode:(long long)arg1;
- (double)_innerCircleDiameter;
- (void)_updateSpinningAnimations;
- (void)_performModeSwitchAnimationFromMode:(long long)arg1 toMode:(long long)arg2 animated:(bool)arg3;
- (void)setMode:(long long)arg1 animated:(bool)arg2;
- (void)_performHighlightAnimation;
- (double)_cornerRadiusForMode:(long long)arg1;
- (struct CGSize { double x1; double x2; })_sizeForMode:(long long)arg1;
- (void)_commonCAMShutterButtonInitialization;
- (void)_updateOuterAndInnerLayers;
- (void)_setSpec:(struct CAMShutterButtonSpec { double x1; double x2; double x3; double x4; })arg1;
- (struct CAMShutterButtonSpec { double x1; double x2; double x3; double x4; })spec;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMode:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void).cxx_destruct;
- (void)setSpinning:(bool)arg1;
- (long long)mode;
- (void)setHighlighted:(bool)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
