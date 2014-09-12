/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class CAMExposureBiasSliderThumb, UIView;

@interface CAMExposureBiasSlider : UIView  {
    bool_suspendTrackFadeOut;
    float _exposureBiasMin;
    float _exposureBiasMax;
    float _exposureBiasValue;
    CAMExposureBiasSliderThumb *__thumbView;
    UIView *__minTrackView;
    UIView *__maxTrackView;
    UIView *__minTrackMaskView;
    UIView *__maxTrackMaskView;
    double __lastInteractionTime;
}

@property float exposureBiasMin;
@property float exposureBiasMax;
@property float exposureBiasValue;
@property bool suspendTrackFadeOut;
@property(readonly) double thumbMaxExtension;
@property(retain,readonly) CAMExposureBiasSliderThumb * _thumbView;
@property(retain,readonly) UIView * _minTrackView;
@property(retain,readonly) UIView * _maxTrackView;
@property(retain,readonly) UIView * _minTrackMaskView;
@property(retain,readonly) UIView * _maxTrackMaskView;
@property(readonly) double _lastInteractionTime;


- (id)_maxTrackMaskView;
- (id)_minTrackMaskView;
- (id)_thumbView;
- (void)forceTrackDimmed;
- (void)setSuspendTrackFadeOut:(bool)arg1;
- (double)thumbMaxExtension;
- (void)_dimTrackForInactivity;
- (bool)suspendTrackFadeOut;
- (double)_trackAlpha;
- (void)_animateTrackAlpha:(double)arg1 withDuration:(double)arg2;
- (float)exposureBiasValue;
- (float)exposureBiasMax;
- (float)exposureBiasMin;
- (struct CGPoint { double x1; double x2; })_sunCenterForNormalizedValue:(float)arg1;
- (void)_updateForChangedNormalizedExposureValue;
- (void)setExposureBiasValue:(float)arg1;
- (void)setExposureBiasMax:(float)arg1;
- (void)setExposureBiasMin:(float)arg1;
- (double)_lastInteractionTime;
- (void)_scheduleDelayedDim;
- (void)_cancelDelayedDim;
- (void)updateLastInteractionTime;
- (float)_normalizedExposureValue;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (id)_maxTrackView;
- (id)_minTrackView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end
