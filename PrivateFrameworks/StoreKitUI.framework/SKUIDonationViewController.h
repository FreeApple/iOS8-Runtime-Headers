/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIDonationConfiguration, NSString, SKUIClientContext, NSOperationQueue, UIViewController;

@interface SKUIDonationViewController : UINavigationController  {
    NSString *_charityID;
    SKUIClientContext *_clientContext;
    SKUIDonationConfiguration *_donationConfiguration;
    NSOperationQueue *_operationQueue;
    UIViewController *_placeholderViewController;
}

@property(readonly) NSString * charityIdentifier;
@property(retain) SKUIClientContext * clientContext;
@property(retain) NSOperationQueue * operationQueue;


- (id)initWithCharityIdentifier:(id)arg1;
- (id)charityIdentifier;
- (void)_loadDonationConfiguration;
- (id)_initSKUIDonationViewController;
- (void)_configurationDidLoadWithResult:(bool)arg1 error:(id)arg2;
- (void)_finishAuthenticateWithResponse:(id)arg1 error:(id)arg2;
- (void)setClientContext:(id)arg1;
- (id)clientContext;
- (void)_cancelButtonAction:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void).cxx_destruct;
- (id)operationQueue;
- (void)viewWillAppear:(bool)arg1;
- (void)setOperationQueue:(id)arg1;

@end
