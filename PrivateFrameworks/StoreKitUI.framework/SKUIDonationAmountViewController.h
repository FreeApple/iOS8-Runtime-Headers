/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIGiftValidationResponse, SKUIDonationAmountView, SKUIGiftPurchaseRequest, SKUIGiftValidator;

@interface SKUIDonationAmountViewController : SKUIDonationStepViewController <SKUIDonationConfigurationObserver> {
    SKUIDonationAmountView *_amountView;
    SKUIGiftValidationResponse *_lastValidationResponse;
    SKUIGiftPurchaseRequest *_purchaseRequest;
    bool_tappedNextWhileValidating;
    SKUIGiftValidator *_validator;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)donationConfigurationController:(id)arg1 didLoadLogoForCharity:(id)arg2;
- (void)_reenableAfterFailure;
- (void)_setDonationButtonEnabled:(bool)arg1;
- (void)_performActionAfterValidation;
- (void)_validateDonation:(id)arg1;
- (void)_amountChangedNotification:(id)arg1;
- (void)_donateButtonAction:(id)arg1;
- (id)initWithCharity:(id)arg1 configuration:(id)arg2;
- (void)_finishPurchaseWithResult:(bool)arg1 errorMessage:(id)arg2;
- (void)_finishValidationWithResponse:(id)arg1 error:(id)arg2;
- (void)_cancelButtonAction:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;

@end
