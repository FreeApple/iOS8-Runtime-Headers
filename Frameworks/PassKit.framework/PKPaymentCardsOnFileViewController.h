/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSArray, PKPaymentWebService, <PKPaymentSetupViewControllerDelegate>;

@interface PKPaymentCardsOnFileViewController : PKPaymentSetupTableViewController  {
    PKPaymentWebService *_paymentWebService;
    <PKPaymentSetupViewControllerDelegate> *_setupDelegate;
    NSArray *_cardsOnFile;
}


- (void)_presentManualAddController;
- (void)_presentCardDetailsControllerForCredential:(id)arg1;
- (id)initWithPaymentWebService:(id)arg1 eligibleCards:(id)arg2 context:(long long)arg3 delegate:(id)arg4;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
