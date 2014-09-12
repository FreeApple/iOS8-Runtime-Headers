/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class UIView;

@interface CAMBlurredSnapshotView : UIView  {
    bool_blurred;
    bool_dimmed;
    bool__supportsBlur;
    long long _style;
    UIView *_snapshotView;
    UIView *__lowQualityBlurView;
    UIView *__dimmingView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _targetFrame;
}

@property long long style;
@property(readonly) UIView * snapshotView;
@property bool blurred;
@property bool dimmed;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetFrame;
@property(readonly) bool _supportsBlur;
@property(readonly) UIView * _lowQualityBlurView;
@property(readonly) UIView * _dimmingView;


- (bool)_supportsBlur;
- (bool)dimmed;
- (bool)blurred;
- (void)setDimmed:(bool)arg1;
- (void)setBlurred:(bool)arg1;
- (void)_setupDimOnSnapshot;
- (void)_prepareForApplyingLowQualityBlurAnimation:(bool)arg1 opacityAmount:(double*)arg2 opacityDuration:(double*)arg3 opacityDelay:(double*)arg4 opacityTimingFunction:(id*)arg5 targetView:(id*)arg6;
- (void)_setupLowQualityBlurOnSnapshot;
- (id)_lowQualityBlurView;
- (void)_prepareForApplyingBlurAnimation:(bool)arg1 inputRadiusAmount:(double*)arg2 inputRadiusDuration:(double*)arg3 inputRadiusDelay:(double*)arg4 inputRadiusTimingFunction:(id*)arg5 opacityAmount:(double*)arg6 opacityDuration:(double*)arg7 opacityDelay:(double*)arg8 opacityTimingFunction:(id*)arg9;
- (void)_setupBlurOnSnapshot;
- (void)_removeSnapshotDimAnimated:(bool)arg1 withCompletionBlock:(id)arg2;
- (void)_applySnapshotDimAnimated:(bool)arg1 withCompletionBlock:(id)arg2;
- (void)_removeLowQualityBlurAnimated:(bool)arg1 withCompletionBlock:(id)arg2;
- (void)_applyLowQualityBlurAnimated:(bool)arg1 withCompletionBlock:(id)arg2;
- (void)_removeSnapshotBlurAnimated:(bool)arg1 withCompletionBlock:(id)arg2;
- (void)_applySnapshotBlurAnimated:(bool)arg1 withCompletionBlock:(id)arg2;
- (void)setDimmed:(bool)arg1 animated:(bool)arg2 withCompletionBlock:(id)arg3;
- (void)setBlurred:(bool)arg1 animated:(bool)arg2 withCompletionBlock:(id)arg3;
- (void)setStyle:(long long)arg1;
- (long long)style;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetFrame;
- (void)setTargetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithView:(id)arg1;
- (id)_dimmingView;
- (id)snapshotView;

@end
