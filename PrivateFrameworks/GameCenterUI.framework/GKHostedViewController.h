/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKRemoteViewController, GKGame;

@interface GKHostedViewController : UIViewController  {
    bool_presentingRemoteViewController;
    bool_shouldPresentRemoteViewController;
    bool_isRequestingRemoteViewController;
    bool_gkIsDisappearing;
    GKGame *_game;
    GKRemoteViewController *_remoteViewController;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _remoteViewReadyHandler;

}

@property(retain) GKGame * game;
@property bool shouldPresentRemoteViewController;
@property bool presentingRemoteViewController;
@property(copy) id remoteViewReadyHandler;
@property(retain) GKRemoteViewController * remoteViewController;
@property bool isRequestingRemoteViewController;
@property bool gkIsDisappearing;


- (void)donePressed:(id)arg1;
- (void)setIsRequestingRemoteViewController:(bool)arg1;
- (bool)isRequestingRemoteViewController;
- (id)remoteViewReadyHandler;
- (void)setShouldPresentRemoteViewController:(bool)arg1;
- (void)resetRemoteViewController;
- (bool)presentingRemoteViewController;
- (bool)shouldPresentRemoteViewController;
- (bool)gkIsDisappearing;
- (void)setGkIsDisappearing:(bool)arg1;
- (void)setPresentingRemoteViewController:(bool)arg1;
- (void)requestRemoteViewControllerIfNeeded;
- (void)didGetRemoteViewController;
- (id)_presentingViewController;
- (id)hostSideViewControllerClassName;
- (id)serviceSideViewControllerClassName;
- (void)presentRemoteViewControllerIfNeeded;
- (void)setRemoteViewReadyHandler:(id)arg1;
- (void)setGame:(id)arg1;
- (id)game;
- (id)init;
- (void)dealloc;
- (id)remoteViewController;
- (void)setRemoteViewController:(id)arg1;
- (void)dismissModalViewControllerAnimated:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (bool)shouldAutomaticallyForwardRotationMethods;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)didReceiveMemoryWarning;

@end
