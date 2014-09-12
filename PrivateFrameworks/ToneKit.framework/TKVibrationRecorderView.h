/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@class NSString, <TKVibrationRecorderStyleProvider>, TKVibrationRecorderTouchSurface, UIToolbar, <TKVibrationRecorderViewDelegate>, NSLayoutConstraint, TKVibrationRecorderProgressView, UILabel;

@interface TKVibrationRecorderView : UIView <TKVibrationRecorderTouchSurfaceDelegate> {
    bool_replayModeEnabled;
    bool_waitingForEndOfCurrentVibrationComponent;
    bool_animatingProgress;
    int _leftButtonIdentifier;
    int _rightButtonIdentifier;
    <TKVibrationRecorderViewDelegate> *_delegate;
    <TKVibrationRecorderStyleProvider> *_styleProvider;
    UILabel *_instructionsLabel;
    UIToolbar *_controlsToolbar;
    TKVibrationRecorderProgressView *_progressView;
    TKVibrationRecorderTouchSurface *_touchSurface;
    NSLayoutConstraint *_controlsToolbarTopConstraint;
    NSLayoutConstraint *_progressToolbarBottomConstraint;
    NSLayoutConstraint *_touchSurfaceTopConstraint;
    double _vibrationPatternMaximumDuration;
    double _currentVibrationProgressDidStartTimestamp;
    double _currentVibrationComponentDidStartTimestamp;
}

@property <TKVibrationRecorderViewDelegate> * delegate;
@property(setter=_setStyleProvider:,retain) <TKVibrationRecorderStyleProvider> * _styleProvider;
@property(setter=_setInstructionsLabel:,retain) UILabel * _instructionsLabel;
@property(setter=_setControlsToolbar:,retain) UIToolbar * _controlsToolbar;
@property(setter=_setProgressView:,retain) TKVibrationRecorderProgressView * _progressView;
@property(setter=_setTouchSurface:,retain) TKVibrationRecorderTouchSurface * _touchSurface;
@property(setter=_setControlsToolbarTopConstraint:,retain) NSLayoutConstraint * _controlsToolbarTopConstraint;
@property(setter=_setProgressToolbarBottomConstraint:,retain) NSLayoutConstraint * _progressToolbarBottomConstraint;
@property(setter=_setTouchSurfaceTopConstraint:,retain) NSLayoutConstraint * _touchSurfaceTopConstraint;
@property(getter=_isReplayModeEnabled,setter=_setReplayModeEnabled:) bool _replayModeEnabled;
@property(setter=_setLeftButtonIdentifier:) int _leftButtonIdentifier;
@property(setter=_setRightButtonIdentifier:) int _rightButtonIdentifier;
@property(setter=_setVibrationPatternMaximumDuration:) double _vibrationPatternMaximumDuration;
@property(setter=_setCurrentVibrationProgressDidStartTimestamp:) double _currentVibrationProgressDidStartTimestamp;
@property(setter=_setCurrentVibrationComponentDidStartTimestamp:) double _currentVibrationComponentDidStartTimestamp;
@property(getter=_isWaitingForEndOfCurrentVibrationComponent,setter=_setWaitingForEndOfCurrentVibrationComponent:) bool _waitingForEndOfCurrentVibrationComponent;
@property(getter=_isAnimatingProgress,setter=_setAnimatingProgress:) bool _animatingProgress;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)vibrationRecorderTouchSurfaceDidFinishReplayingVibration:(id)arg1;
- (void)vibrationRecorderTouchSurface:(id)arg1 didExitRecordingModeWithContextObject:(id)arg2;
- (void)vibrationComponentDidEndForVibrationRecorderTouchSurface:(id)arg1;
- (void)vibrationComponentDidStartForVibrationRecorderTouchSurface:(id)arg1;
- (bool)vibrationRecorderTouchSurfaceDidEnterRecordingMode:(id)arg1;
- (void)_setCurrentVibrationComponentDidStartTimestamp:(double)arg1;
- (id)_touchSurfaceTopConstraint;
- (id)_progressToolbarBottomConstraint;
- (id)_controlsToolbarTopConstraint;
- (double)_currentVibrationComponentDidStartTimestamp;
- (double)_vibrationPatternMaximumDuration;
- (bool)_isAnimatingProgress;
- (void)_setAnimatingProgress:(bool)arg1;
- (void)_setReplayModeEnabled:(bool)arg1;
- (bool)_isReplayModeEnabled;
- (id)_progressView;
- (void)_exitWaitingModeWithAnimation:(bool)arg1;
- (id)_instructionsLabel;
- (void)_setLeftButtonIdentifier:(int)arg1 enabled:(bool)arg2 rightButtonIdentifier:(int)arg3 enabled:(bool)arg4 animated:(bool)arg5;
- (int)_rightButtonIdentifier;
- (int)_leftButtonIdentifier;
- (id)_controlsToolbar;
- (void)_handleRightButtonTapped:(id)arg1;
- (void)_handleLeftButtonTapped:(id)arg1;
- (id)_titleForControlsToolbarButtonWithIdentifier:(int)arg1;
- (void)_setRightButtonIdentifier:(int)arg1;
- (void)_setLeftButtonIdentifier:(int)arg1;
- (id)_touchSurface;
- (void)_enterWaitingModeWithAnimation:(bool)arg1 enablePlayButton:(bool)arg2;
- (void)_setInstructionsLabel:(id)arg1;
- (void)_setTouchSurface:(id)arg1;
- (void)_setTouchSurfaceTopConstraint:(id)arg1;
- (void)_setProgressView:(id)arg1;
- (void)_setProgressToolbarBottomConstraint:(id)arg1;
- (void)_setControlsToolbar:(id)arg1;
- (void)_setControlsToolbarTopConstraint:(id)arg1;
- (void)_setVibrationPatternMaximumDuration:(double)arg1;
- (void)stopAnimatingProgress;
- (void)exitReplayMode;
- (void)exitRecordingModeWithPlayButtonEnabled:(bool)arg1;
- (void)_setCurrentVibrationProgressDidStartTimestamp:(double)arg1;
- (double)_currentVibrationProgressDidStartTimestamp;
- (bool)_isWaitingForEndOfCurrentVibrationComponent;
- (void)enterRecordingMode;
- (void)enterReplayModeWithVibrationPattern:(id)arg1;
- (void)startAnimatingProgress;
- (void)_setWaitingForEndOfCurrentVibrationComponent:(bool)arg1;
- (void)navigationController:(id)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)wasAddedToNavigationController:(id)arg1;
- (id)initWithVibrationPatternMaximumDuration:(double)arg1;
- (void)_updateProgress:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)_setStyleProvider:(id)arg1;
- (id)_styleProvider;
- (void)didMoveToWindow;

@end
