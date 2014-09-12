/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, NSTimer, CALayer, NSMutableArray, CADisplayLink;

@interface UIDictationMeterView : UIButton  {
    UIImageView *_background;
    UIImageView *_overlay;
    NSMutableArray *_micListeningImages;
    CALayer *_micImageLayer;
    CALayer *_animatingLayer;
    NSTimer *_fillTimer;
    int _phase;
    int _state;
    float _runningPowerLevels[5];
    unsigned int _powerPointer;
    CADisplayLink *_displayLink;
    double _releaseStart;
    float _releaseLevel;
    int _cachedViewMode;
}


- (void)_startListening;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setState:(int)arg1;
- (void)dealloc;
- (void)_startRelease;
- (void)_startSustain;
- (void)_startDecay;
- (void)_updateListeningAnimation:(id)arg1;
- (void)_updateReleaseAnimation:(id)arg1;
- (void)_resetRunningPowerLevels;
- (float)_currentMicPowerLevel;
- (id)_sustainKeyFrameAnimation;
- (id)_decayKeyFrameAnimation;
- (id)_attackKeyFrameAnimation;
- (id)_keyframeAnimationForCGImages:(id)arg1 duration:(double)arg2;
- (float)_adjustedDuration:(float)arg1;
- (id)imageForMicLevel:(double)arg1;
- (double)_animationInterval;
- (float)_powerLevelForMicPower:(float)arg1;
- (float)_updateMedianWithNewValue:(float)arg1;
- (void)_removeAnimationsAndClearLayers;
- (void)_clearDisplayLink;
- (void)_startAttack;
- (id)_emptyMicImage;
- (void)_reset;
- (void)layoutSubviews;

@end
