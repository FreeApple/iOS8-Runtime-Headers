/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIWindow, MPAVRoutingViewController, NSString, UIView, UIButton;

@interface MPAVRoutingSheet : UIView <MPAVRoutingViewControllerDelegate> {
    UIWindow *_presentationWindow;
    UIView *_backgroundView;
    UIView *_controlsView;
    UIButton *_cancelButton;
    MPAVRoutingViewController *_routingViewController;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

}

@property(setter=setAVItemType:) unsigned long long avItemType;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (struct CGSize { double x1; double x2; })_maxRoutingViewSize;
- (void)_animateControls:(bool)arg1 withCompletionHandler:(id)arg2;
- (void)_updateRoutingSheetFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_controlsViewFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_cancelButtonFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_routingViewFrame;
- (unsigned long long)avItemType;
- (void)setAVItemType:(unsigned long long)arg1;
- (void)routingViewControllerDidShowAirPlayDebugScreen:(id)arg1;
- (void)routingViewControllerDidUpdateContents:(id)arg1;
- (void)routingViewController:(id)arg1 didPickRoute:(id)arg2;
- (void)showInView:(id)arg1 withCompletionHandler:(id)arg2;
- (id)initWithAVItemType:(unsigned long long)arg1;
- (void)_cancelButtonAction:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)dismiss;
- (void)layoutSubviews;

@end
