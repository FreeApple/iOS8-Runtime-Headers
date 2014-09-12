/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIAlertView, NSString, UIPopoverController, UIAlertController, UIViewController, <UIPopoverControllerDelegate>, _UIAlertControllerShimPresenterWindow;

@interface _UIAlertControllerShimPresenter : NSObject <UIPopoverControllerDelegate> {
    UIPopoverController *_popoverController;
    <UIPopoverControllerDelegate> *_popoverDelegate;
    UIViewController *_inPopoverViewController;
    _UIAlertControllerShimPresenterWindow *_window;
    UIAlertController *_alertController;
    UIAlertView *_legacyAlert;
}

@property UIAlertController * alertController;
@property UIAlertView * legacyAlert;
@property(readonly) _UIAlertControllerShimPresenterWindow * window;
@property <UIPopoverControllerDelegate> * popoverDelegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)_currentFullScreenAlertPresenters;
+ (void)_removePresenter:(id)arg1;
+ (bool)_shouldPresentActionSheetsFullscreen;
+ (void)_addPresenter:(id)arg1;
+ (void)_cancelPendingTouchesIfAppropriate;
+ (id)_topmostLegacyAlertIncludingPresentingAlerts:(bool)arg1;
+ (id)_topmostAlertWindow;

- (id)window;
- (void)dealloc;
- (id)popoverDelegate;
- (id)legacyAlert;
- (void)_tearDownInPopoverViewController;
- (void)_createWindowIfNecessary;
- (void)_presentAlertControllerFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 direction:(unsigned long long)arg3 animated:(bool)arg4 completion:(id)arg5;
- (void)_presentAlertControllerFromBarButtonItem:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (void)setPopoverDelegate:(id)arg1;
- (id)alertController;
- (void)_dismissAlertControllerAnimated:(bool)arg1 completion:(id)arg2;
- (void)_presentAlertControllerAnimated:(bool)arg1 completion:(id)arg2;
- (void)setLegacyAlert:(id)arg1;
- (void)setAlertController:(id)arg1;
- (id)_popoverController;

@end
