/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMapTable, _UIModalItemHostingWindow, _UIModalItemSBViewController, _UIModalItemAppViewController;

@interface _UIModalItemsCoordinator : NSObject  {
    NSMapTable *_presentingSessionsMapTable;
    NSMapTable *_sessionForItemMapTable;
    _UIModalItemSBViewController *__viewControllerForSBAlerts;
    _UIModalItemHostingWindow *__hostingWindowForSBAlerts;
    _UIModalItemAppViewController *__viewControllerForAlerts;
    _UIModalItemHostingWindow *__hostingWindowForAlerts;
}

@property(retain) NSMapTable * presentingSessionsMapTable;
@property(retain) NSMapTable * sessionForItemMapTable;
@property(retain) _UIModalItemSBViewController * _viewControllerForSBAlerts;
@property(retain) _UIModalItemHostingWindow * _hostingWindowForSBAlerts;
@property(retain) _UIModalItemAppViewController * _viewControllerForAlerts;
@property(retain) _UIModalItemHostingWindow * _hostingWindowForAlerts;

+ (void)_getRidOfViewControllerForAlerts;
+ (void)_getRidOfViewControllerForSBAlerts;
+ (void)_desaturateUIForSB;
+ (void)_resaturateUIForSB;
+ (id)sharedModalItemsCoordinator;
+ (void)noteOrientationChangingTo:(long long)arg1 animated:(bool)arg2;

- (id)init;
- (void)dealloc;
- (void)showAfterSpringBoardAlert:(bool)arg1;
- (void)hideForSpringBoardAlert:(bool)arg1;
- (void)_hidePresentingSessionForModalItem:(id)arg1 keepDimmingView:(bool)arg2 animated:(bool)arg3;
- (id)hostingViewControllerForViewController:(id)arg1 andModalItem:(id)arg2 create:(bool)arg3;
- (id)_rootViewControllerForModalItem:(id)arg1;
- (id)_presentingViewControllerForAlertCompatibility;
- (void)_showModalItemsForType:(long long)arg1 presentingViewController:(id)arg2 undimSpotlightView:(bool)arg3 animated:(bool)arg4;
- (id)_presentingSessionForViewController:(id)arg1 ofItemsType:(long long)arg2;
- (void)setSessionForItemMapTable:(id)arg1;
- (void)setPresentingSessionsMapTable:(id)arg1;
- (void)_notifyDissmissedItem:(id)arg1;
- (void)_showNextModalItemIfNecessaryAfterHidingItem:(id)arg1 showingItem:(id)arg2 animate:(bool)arg3;
- (id)presentingSessionsMapTable;
- (id)sessionForItemMapTable;
- (void)_getRidOfViewControllerForAlerts;
- (void)_getRidOfViewControllerForSBAlerts;
- (id)_hostingWindowForAlerts;
- (void)set_hostingWindowForAlerts:(id)arg1;
- (void)set_viewControllerForAlerts:(id)arg1;
- (id)_viewControllerForAlerts;
- (id)_hostingWindowForSBAlerts;
- (void)set_hostingWindowForSBAlerts:(id)arg1;
- (void)set_viewControllerForSBAlerts:(id)arg1;
- (id)_viewControllerForSBAlerts;
- (void)_hideModalItemsForType:(long long)arg1 presentingViewController:(id)arg2 dimSpotlightView:(bool)arg3 animated:(bool)arg4;
- (id)_presentingViewControllerForAlertCompatibilityCreateIfNeeded:(bool)arg1;
- (id)_presentingViewControllerForSBCompatibility;
- (void)_presentItem:(id)arg1 replacingItem:(id)arg2 inViewController:(id)arg3 animated:(bool)arg4;
- (void)_addItemToStack:(id)arg1 replacingItem:(id)arg2 forPresentingViewController:(id)arg3;
- (id)presentingViewControllerForItem:(id)arg1 create:(bool)arg2;
- (void)_updateItem:(id)arg1 animated:(bool)arg2;
- (void)_notifyDelegateDidPresentItem:(id)arg1;
- (void)_notifyDelegateWillPresentItem:(id)arg1;
- (void)_notifyDelegateDidDismissItem:(id)arg1 withIndex:(long long)arg2;
- (void)_notifyDelegateWillDismissItem:(id)arg1 withIndex:(long long)arg2;
- (void)_dismissItem:(id)arg1 withTappedButtonIndex:(long long)arg2 animated:(bool)arg3 notifyDelegate:(bool)arg4;
- (bool)_notifyDelegateModalItem:(id)arg1 tappedButtonAtIndex:(long long)arg2;
- (void)noteOrientationChangingTo:(long long)arg1 animated:(bool)arg2;

@end
