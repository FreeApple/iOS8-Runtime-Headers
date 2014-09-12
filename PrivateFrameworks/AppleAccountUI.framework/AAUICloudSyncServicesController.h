/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, MFAccountValidator, AAAutoAccountVerifier, NSMutableDictionary, DAAccount, ACAccount, NSMutableArray, ACAccountStore;

@interface AAUICloudSyncServicesController : NSObject <DAValidityCheckConsumer> {
    ACAccountStore *_accountStore;
    ACAccount *_account;
    NSMutableDictionary *_queuedDataclassActions;
    NSMutableArray *_dataclassesRequiringMergeDecision;
    bool_didUserConsentToMerge;
    bool_isVerifyingExistingEmailAccount;
    MFAccountValidator *_validator;
    AAAutoAccountVerifier *_verifier;
    DAAccount *_accountBeingValidated;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (bool)needSetupForMailAccount:(id)arg1;
+ (bool)canAutoSetupMailAccount:(id)arg1;
+ (id)_domainFromAddress:(id)arg1;
+ (id)_usernameFromAddress:(id)arg1;
+ (Class)_accountClassForAddress:(id)arg1;

- (void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(bool)arg3;
- (void)account:(id)arg1 isValid:(bool)arg2 validationError:(id)arg3;
- (void)setupMailAccount:(id)arg1 password:(id)arg2 completion:(id)arg3;
- (void)verifyAccountWithAppleID:(id)arg1 completion:(id)arg2;
- (void)completeEnablingCloudServicesWithCompletion:(id)arg1;
- (void)setBackupEnabled:(bool)arg1 completion:(id)arg2;
- (void)setDeviceLocatorEnabled:(bool)arg1;
- (void)setCloudServicesEnabled:(bool)arg1 completion:(id)arg2;
- (void)_addMailAccount:(id)arg1;
- (void)_addDAEmailAccount:(id)arg1;
- (void)_validateMailAccount:(id)arg1;
- (void)_validateDAAccount:(id)arg1;
- (void)_createAndValidateMailAccountWithProperties:(id)arg1;
- (void)_createAndValidateDAMailAccountWithProperties:(id)arg1;
- (void)_validateExistingEmailAccount:(id)arg1 withPassword:(id)arg2;
- (bool)_dataclassBoundToSingleAccountAndOnAlready:(id)arg1 withAccount:(id)arg2;
- (void)_presentMergeConfirmationForDataclasses:(id)arg1 account:(id)arg2;
- (bool)_shouldInitiallyEnableDataclass:(id)arg1 forAccount:(id)arg2;
- (id)_account;
- (id)init;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

@end
