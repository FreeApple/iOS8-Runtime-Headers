/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUViewController;

@interface SURotationController : NSObject  {
    SUViewController *_viewController;
}

@property SUViewController * viewController;


- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewFrameForInterfaceOrientation:(long long)arg1;
- (bool)orientationAffectsViewFrame;
- (void)prepareToRotateToInterfaceOrientation:(long long)arg1;
- (void)animateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)initWithViewController:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)finishRotationFromInterfaceOrientation:(long long)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;

@end
