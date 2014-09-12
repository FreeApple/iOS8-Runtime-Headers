/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UINavigationController, UIWindow, UIPrintingProgress, UIPrintingMessageView;

@interface UIPrintingProgressViewController : UITableViewController  {
    UIPrintingProgress *_printingProgress;
    UIPrintingMessageView *_messageView;
    UINavigationController *_navController;
    UIWindow *_window;
    double _rotationDelay;
}


- (void)setMessage:(id)arg1;
- (bool)visible;
- (void)dealloc;
- (double)rotationDelay;
- (id)initWithTitle:(id)arg1 message:(id)arg2 printingProgress:(id)arg3;
- (void)cleanupAfterDismiss;
- (void)cancelProgress;
- (void)doneProgress;
- (void)setDonePrinting:(bool)arg1;
- (void)dismissAnimated:(bool)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)show;

@end
