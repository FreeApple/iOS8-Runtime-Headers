/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class SKUIItem, ABPeoplePickerNavigationController, SKUIClientContext, NSString, UIViewController;

@interface SKUITonePurchaseController : NSObject <ABPeoplePickerNavigationControllerDelegate> {
    SKUIClientContext *_clientContext;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    SKUIItem *_item;
    UIViewController *_parentViewController;
    ABPeoplePickerNavigationController *_peoplePicker;
}

@property(retain) SKUIClientContext * clientContext;
@property UIViewController * parentViewController;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)_finishPeoplePicker:(id)arg1 withPerson:(void*)arg2;
- (void)_dismissPeoplePicker;
- (void)_presentViewController:(id)arg1;
- (void)_showPeoplePicker;
- (void)_finishWithTonePurchase:(id)arg1;
- (void)showPurchaseFlowWithCompletionBlock:(id)arg1;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (id)initWithItem:(id)arg1;
- (id)parentViewController;

@end
