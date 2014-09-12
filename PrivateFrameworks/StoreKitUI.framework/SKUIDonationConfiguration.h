/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSMutableDictionary, SKUIClientContext, NSURL, NSHashTable, NSOperationQueue;

@interface SKUIDonationConfiguration : NSObject  {
    NSArray *_charities;
    NSMutableDictionary *_charityImages;
    SKUIClientContext *_clientContext;
    NSURL *_donationPurchaseURL;
    NSURL *_donationValidationURL;
    NSHashTable *_observers;
    NSOperationQueue *_operationQueue;
}

@property(readonly) SKUIClientContext * clientContext;
@property(readonly) NSArray * allCharities;
@property(readonly) NSURL * donationPurchaseURL;
@property(readonly) NSURL * donationValidationURL;


- (id)donationPurchaseURL;
- (id)donationValidationURL;
- (id)allCharities;
- (id)logoImageForCharity:(id)arg1;
- (void)loadLogoForCharity:(id)arg1;
- (id)charityForIdentifier:(id)arg1;
- (void)_setLogoImage:(id)arg1 forCharity:(id)arg2;
- (void)_finishLoadWithResponse:(id)arg1 error:(id)arg2 block:(id)arg3;
- (void)loadConfigurationWithCompletionBlock:(id)arg1;
- (id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2;
- (id)clientContext;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void).cxx_destruct;

@end
