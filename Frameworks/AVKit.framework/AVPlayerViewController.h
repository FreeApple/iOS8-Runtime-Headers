/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVKit.framework/AVKit
 */

@class AVNowPlayingInfoController, AVAudioOnlyIndicatorView, AVTouchIgnoringView, AVPlayerController, <AVPlayerViewControllerDelegate>, AVPlayer, UIView, AVPlaybackControlsViewController, NSString, UIPopoverController, AVVideoLayerView, NSTimer, AVFullScreenViewController, CALayer<AVVideoLayer>, AVLoadingIndicatorView, AVExternalPlaybackIndicatorView, AVUnsupportedContentIndicatorView, AVRemoteCommandController, UIWindow;

@interface AVPlayerViewController : UIViewController <UIPopoverControllerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {
    unsigned int _playerShouldAutoplay : 1;
    unsigned int _showsPlaybackControls : 1;
    long long _videoLayerGravity;
    AVNowPlayingInfoController *_nowPlayingInfoController;
    AVRemoteCommandController *_remoteCommandController;
    UIView *_containerView;
    AVUnsupportedContentIndicatorView *_unsupportedContentIndicatorView;
    AVAudioOnlyIndicatorView *_audioOnlyIndicatorView;
    AVExternalPlaybackIndicatorView *_externalPlaybackIndicatorView;
    AVLoadingIndicatorView *_loadingIndicatorView;
    UIView *_contentView;
    AVVideoLayerView *_videoLayerView;
    UIView *_contentOverlayView;
    UIView *_controlsView;
    AVTouchIgnoringView *_iAdPrerollView;
    AVPlaybackControlsViewController *_playbackControlsViewController;
    UIWindow *_secondScreenWindow;
    id _screenDidConnectObserver;
    id _screenDidDisconnectObserver;
    id _screenModeDidChangeObserver;
    id _activeAudioRouteDidChangeObserver;
    id _remoteCommandControllerDidReceiveStopCommandEventObserver;
    NSTimer *_loadingIndicatorTimer;
    unsigned int _playbackControlsViewControllerShouldShowLoadingIndicator : 1;
    unsigned int _playbackControlsViewControllerShowsScaleButton : 1;
    long long _playbackControlsViewControllerScaleButtonType;
    unsigned int _playbackControlsViewVisibilityNeedsUpdate : 1;
    long long _playbackControlsViewVisibilityCounter;
    NSTimer *_playbackControlsViewVisibilityTimer;
    unsigned int _isShowingPlaybackControlsViewForUserInteraction : 1;
    unsigned int _isShowingPlaybackControlsViewAfterUserInteraction : 1;
    unsigned int _isShowingPlaybackControlsViewForUnsupportedContent : 1;
    unsigned int _isShowingPlaybackControlsViewForAudioOnlyContent : 1;
    unsigned int _isShowingPlaybackControlsViewForPlayingOnExternalScreen : 1;
    unsigned int _showsPlaybackControlsView : 1;
    unsigned int _isAnimatingPlaybackControlsViewVisibility : 1;
    UIPopoverController *_mediaSelectionPopoverController;
    AVFullScreenViewController *_fullScreenViewController;
    unsigned int _animateFullScreenTransitionForPresenting : 1;
    unsigned int _isTransitioningToOrFromFullScreen : 1;
    unsigned int _animateFullScreenTransition : 1;
    AVPlayerController *_playerController;
    CALayer<AVVideoLayer> *_videoLayer;
    unsigned int _showsExitFullScreenButton : 1;
    <AVPlayerViewControllerDelegate> *_delegate;
    struct { 
        unsigned int playerViewController_shouldExitFullScreenWithReason : 1; 
    } _delegateRespondsTo;
}

@property(retain) AVPlayerController * playerController;
@property(readonly) UIView * iAdPrerollView;
@property bool showsExitFullScreenButton;
@property <AVPlayerViewControllerDelegate> * delegate;
@property(retain) AVPlayer * player;
@property bool showsPlaybackControls;
@property(copy) NSString * videoGravity;
@property(getter=isReadyForDisplay,readonly) bool readyForDisplay;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } videoBounds;
@property(readonly) UIView * contentOverlayView;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)keyPathsForValuesAffectingVideoBounds;
+ (id)keyPathsForValuesAffectingPlayer;
+ (id)keyPathsForValuesAffectingReadyForDisplay;
+ (id)keyPathsForValuesAffectingVideoGravity;
+ (void)initialize;

- (void)showPlaybackControlsViewForVolumeChange;
- (void)enterFullScreenAnimated:(bool)arg1 completionHandler:(id)arg2;
- (id)iAdPrerollView;
- (void)_showPlaybackControlsViewIfNeeded;
- (id)contentOverlayView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoBounds;
- (void)_hidePlaybackControlsViewIfPossibleAfterDelayIfPlaying;
- (void)_transitionFromFullScreenViewControllerAnimated:(bool)arg1 completionHandler:(id)arg2;
- (void)_showOrHidePlaybackControlsView;
- (void)_firePlaybackControlsViewVisibilityTimer:(id)arg1;
- (void)_showPlaybackControlsViewIfNeededAndHideIfPossibleAfterDelayIfPlayingWithDelay:(double)arg1;
- (void)_hidePlaybackControlsViewIfPossible;
- (void)_transitionToFullScreenViewControllerAnimated:(bool)arg1 completionHandler:(id)arg2;
- (void)_hidePlaybackControlsViewIfPossibleUntilFurtherUserInteraction;
- (bool)_showsPlaybackControlsView;
- (void)_setPlaybackControlsViewVisibilityNeedsUpdate;
- (bool)_isAudioOnlyContent;
- (bool)_isUnsupportedContent;
- (bool)showsPlaybackControls;
- (void)_updatePlaybackControlsViewVisibilityForAudioOnlyContent;
- (void)_updateAudioOnlyIndicatorView;
- (void)_updateScaleButtonType;
- (void)_updateShowsScaleButton;
- (void)_updatePlaybackControlsViewVisibilityForUnsupportedContent;
- (void)_updateUnsupportedContentIndicatorView;
- (void)_fireLoadingIndicatorTimer:(id)arg1;
- (void)_showPlaybackControlsViewIfNeededAndHideIfPossibleAfterDelayIfPlaying;
- (void)_handlePinchGesture:(id)arg1;
- (void)_handleSingleTapGesture:(id)arg1;
- (void)_handleDoubleTapGesture:(id)arg1;
- (void)_transitionFromFullScreenViewControllerWithReason:(long long)arg1;
- (void)_updatePlaybackControlsViewVisibilityForPlayingOnExternalScreen;
- (void)_updateVideoLayerView;
- (void)_updateExternalPlaybackIndicatorView;
- (void)_updatePlaybackControlsViewController;
- (void)_updatePlaybackControlsViewVisibilityIfNeeded;
- (void)fullScreenButtonTapped:(id)arg1;
- (void)mediaSelectionButtonTapped:(id)arg1;
- (void)scaleButtonTapped:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)hidePlaybackControlsViewForTouchUp;
- (void)showPlaybackControlsViewForTouchDown;
- (void)setShowsExitFullScreenButton:(bool)arg1;
- (bool)showsExitFullScreenButton;
- (id)playerController;
- (id)videoGravity;
- (void)exitFullScreenAnimated:(bool)arg1 completionHandler:(id)arg2;
- (void)exitFullScreenWithCompletionHandler:(id)arg1;
- (void)enterFullScreenWithCompletionHandler:(id)arg1;
- (void)setShowsPlaybackControls:(bool)arg1;
- (id)initWithVideoLayer:(id)arg1;
- (bool)isReadyForDisplay;
- (void)setPlayerController:(id)arg1;
- (void)togglePlayback:(id)arg1;
- (id)player;
- (void)setVideoGravity:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)childViewControllerForStatusBarHidden;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)canBecomeFirstResponder;
- (void)animationEnded:(bool)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end
