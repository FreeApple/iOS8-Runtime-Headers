/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITableViewController;

@interface UITableViewControllerKeyboardSupport : NSObject  {
    UITableViewController *_tableViewController;
    double _adjustmentForKeyboard;
    unsigned int _viewIsDisappearing : 1;
    unsigned int _registeredForNotifications : 1;
}

@property double adjustmentForKeyboard;
@property bool viewIsDisappearing;
@property bool registeredForNotifications;


- (void)setAdjustmentForKeyboard:(double)arg1;
- (double)adjustmentForKeyboard;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (id)initWithTableViewController:(id)arg1;
- (bool)registeredForNotifications;
- (void)setRegisteredForNotifications:(bool)arg1;
- (bool)viewIsDisappearing;
- (void)setViewIsDisappearing:(bool)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;

@end
