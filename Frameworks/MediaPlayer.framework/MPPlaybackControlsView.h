/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class CABasicAnimation, UILabel, MPAVController, <MPPlaybackControlsDelegate>, MPTimeMarker, UIView, MPDetailSlider, NSString, MPAVItem, MPButton, UIActivityIndicatorView, UIImage;

@interface MPPlaybackControlsView : UIView <MPDetailSliderDelegate> {
    UIActivityIndicatorView *_activityIndicator;
    <MPPlaybackControlsDelegate> *_delegate;
    MPButton *_fastFowardButton;
    UIView *_fastFowardButtonBezel;
    MPButton *_geniusButton;
    MPAVItem *_item;
    MPTimeMarker *_markerForProgressControlDuration;
    MPButton *_mailButton;
    MPButton *_playbackSpeedButton;
    MPDetailSlider *_progressControl;
    MPButton *_repeatButton;
    MPButton *_rewindButton;
    UIView *_rewindButtonBezel;
    CABasicAnimation *_rewindOpacityAnimation;
    MPAVController *_player;
    double _progressOffset;
    float _seekedToValue;
    MPButton *_shuffleButton;
    double _tickInterval;
    UILabel *_trackInfoLabel;
    unsigned long long _visibleParts;
    unsigned int _wantsTick : 1;
    unsigned int _geniusButtonDisabled : 1;
    unsigned int _fastForwardAndRewindButtonDisabled : 1;
    unsigned int _playbackSpeedButtonDisabled : 1;
    unsigned int _mailButtonDisabled : 1;
    unsigned int _mailButtonHidden : 1;
    unsigned int _useMediaDetailSlider : 1;
    unsigned int _detailScrubbing : 1;
    unsigned int _needsUpdateButtonVisibility : 1;
    unsigned long long _disabledParts;
}

@property <MPPlaybackControlsDelegate> * delegate;
@property unsigned long long disabledParts;
@property(retain) MPAVItem * item;
@property(retain) MPAVController * player;
@property unsigned long long visibleParts;
@property(readonly) bool shuffleIsOn;
@property(readonly) bool hideGeniusButton;
@property(readonly) bool isScrubbing;
@property(readonly) NSString * localizedScrubSpeedText;
@property(readonly) UIImage * mailButtonImage;
@property(readonly) bool shouldOverrideProgressTimeLabelStyle;
@property(readonly) UIImage * repeatButtonImage;
@property(readonly) unsigned long long repeatType;
@property(readonly) UIImage * shuffleButtonImage;
@property(readonly) unsigned long long shuffleType;
@property(readonly) bool detailScrubbingHidesControls;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (unsigned long long)defaultVisibleParts;

- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_changeGeniusImageToNormalImage:(id)arg1;
- (void)_changeGeniusImageToPressedImage:(id)arg1;
- (void)reloadButtonVisibility;
- (id)playbackSpeedTitleForPlaybackSpeed:(unsigned long long)arg1;
- (id)playbackSpeedButtonImageForPlaybackSpeed:(unsigned long long)arg1;
- (bool)hideGeniusButton;
- (id)newProgressIndicator;
- (id)newTrackInfoLabel;
- (id)newButtonBezelViewForPart:(unsigned long long)arg1;
- (void)reloadView;
- (void)resetDetailSlider:(id)arg1;
- (void)handleChangeToShuffleType:(unsigned long long)arg1;
- (void)_addOpacityAnimationToBezelView:(id)arg1 reversed:(bool)arg2;
- (void)handleChangeToRepeatType:(unsigned long long)arg1;
- (void)_updateForPlaybackSpeed;
- (void)_handleGeniusButtonClick;
- (void)_registerForAVItemNotifications;
- (bool)shouldOverrideProgressTimeLabelStyle;
- (void)_playbackModeDidChangeNotification:(id)arg1;
- (void)_contentsChangedNotification:(id)arg1;
- (void)_setCurrentTime:(double)arg1 duration:(double)arg2;
- (bool)shuffleIsOn;
- (void)updateForEndOfDetailScrubbing;
- (bool)detailScrubbingHidesControls;
- (void)_resetGeniusButtonImages;
- (double)_updatedDisplayDurationForTime:(double)arg1 preciseChapterMarkers:(bool)arg2;
- (double)_currentDisplayTime;
- (bool)progressBarClipsToChapterDuration;
- (id)shuffleButtonImage;
- (void)_shuffleButton:(id)arg1;
- (id)repeatButtonImage;
- (void)_repeatButton:(id)arg1;
- (void)_playbackSpeedButton:(id)arg1;
- (id)mailButtonImage;
- (void)_mailButton:(id)arg1;
- (id)geniusButtonImageForControlState:(unsigned long long)arg1;
- (void)_geniusButton:(id)arg1;
- (void)_rewindButton:(id)arg1;
- (void)_fastForwardButton:(id)arg1;
- (void)_updateButtonVisibility;
- (void)_unregisterForAVItemNotifications;
- (void)_isGeniusEnabledDidChangeNotification:(id)arg1;
- (void)_setVisiblePartsNeedReload;
- (void)reloadControls;
- (unsigned long long)displayablePartsInPartMask:(unsigned long long)arg1;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(long long)arg2;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (id)localizedScrubSpeedText;
- (id)newButtonForPart:(unsigned long long)arg1;
- (Class)buttonClass;
- (void)_itemDurationDidChangeNotification:(id)arg1;
- (void)startTicking;
- (void)stopTicking;
- (unsigned long long)disabledParts;
- (void)unregisterForPlayerNotifications;
- (void)registerForPlayerNotifications;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)crossedTimeMakerWithEvent:(id)arg1;
- (unsigned long long)shuffleType;
- (unsigned long long)repeatType;
- (void)_tickNotification:(id)arg1;
- (void)_validityChangedNotification:(id)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setVisibleParts:(unsigned long long)arg1;
- (unsigned long long)visibleParts;
- (void)_timeDidJumpNotification:(id)arg1;
- (bool)isScrubbing;
- (void)setCurrentTime:(double)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)item;
- (void)setItem:(id)arg1;
- (long long)buttonType;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
