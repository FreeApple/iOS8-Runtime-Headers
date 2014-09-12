/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class KeychainSyncAdvancedSecurityCodeController, KeychainSyncDevicePINController, UIAlertView, KeychainSyncPhoneNumberController, UIViewController, UIView, KeychainSyncSecurityCodeController, NSString, PSRootController, NSTimer, PSSetupController, KeychainSyncSMSVerificationController;

@interface PSKeychainSyncManager : NSObject <KeychainSyncViewControllerDelegate> {
    bool_joiningCircle;
    bool_joiningCircleAfterRecovery;
    int _circleNotificationToken;
    int _flow;
    UIAlertView *_genericErrorAlert;
    UIAlertView *_incorrectRecoveryCodesAlert;
    UIAlertView *_iCSCSoftLimitAlert;
    UIAlertView *_iCSCHardLimitAlert;
    UIAlertView *_iCSCHardLimitWithApprovalAlert;
    UIAlertView *_devicePINChoiceAlert;
    UIAlertView *_devicePasscodeTooWeakAlert;
    UIAlertView *_devicePasscodeChangeAlert;
    UIAlertView *_enableWithExistingBackupAlert;
    UIAlertView *_resetConfirmationAlert;
    UIAlertView *_deleteSafariPasswordsAlert;
    UIAlertView *_verificationCodeLimitAlert;
    KeychainSyncDevicePINController *_devicePinController;
    KeychainSyncSecurityCodeController *_simpleSecurityCodeController;
    KeychainSyncSecurityCodeController *_complexSecurityCodeController;
    KeychainSyncAdvancedSecurityCodeController *_advancedSecurityCodeChoiceController;
    KeychainSyncSecurityCodeController *_securityCodeRecoveryController;
    KeychainSyncPhoneNumberController *_phoneNumberController;
    KeychainSyncSMSVerificationController *_smsValidationController;
    UIView *_spinningView;
    unsigned int _spinnerCount;
    NSTimer *_credentialExpirationTimer;
    bool_circleWasReset;
    int _stagedSecurityCodeType;
    NSString *_appleIDUsername;
    NSString *_appleIDPassword;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completion;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _passwordPromptCompletion;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _changeSecurityCodeCompletion;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _resetCompletion;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _circleJoinCompletion;

    UIViewController *_resetPromptControllerHost;
    PSSetupController *_settingsSetupController;
    PSRootController *_buddyNavigationController;
    NSString *_securityCodeRecoveryAttempt;
    NSString *_stagedSecurityCode;
}

@property(getter=isRunningInBuddy,readonly) bool runningInBuddy;
@property(retain) NSString * appleIDUsername;
@property(retain) NSString * appleIDPassword;
@property(copy) id completion;
@property(copy) id passwordPromptCompletion;
@property(copy) id changeSecurityCodeCompletion;
@property(copy) id resetCompletion;
@property(copy) id circleJoinCompletion;
@property(retain) UIViewController * resetPromptControllerHost;
@property(retain) PSSetupController * settingsSetupController;
@property(retain) PSRootController * buddyNavigationController;
@property(retain) NSString * securityCodeRecoveryAttempt;
@property(retain,readonly) NSString * stagedSecurityCode;
@property(readonly) int stagedSecurityCodeType;
@property bool circleWasReset;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (void)getStatusWithCompletion:(id)arg1;
+ (id)sharedManager;

- (id)buddyNavigationController;
- (id)settingsSetupController;
- (id)resetPromptControllerHost;
- (id)circleJoinCompletion;
- (id)resetCompletion;
- (id)changeSecurityCodeCompletion;
- (void)setPasswordPromptCompletion:(id)arg1;
- (id)passwordPromptCompletion;
- (void)promptForDevicePasscodeChangeToPasscode:(id)arg1;
- (void)promptForPasswordIfNeededWithCompletion:(id)arg1;
- (void)disableKeychainSyncWithCompletion:(id)arg1;
- (void)showResetAndJoinFlowOverController:(id)arg1 withCompletion:(id)arg2;
- (void)showEnableFlowWithNavigationController:(id)arg1 completion:(id)arg2;
- (void)showChangeSecurityCodeFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(id)arg3;
- (void)showRecoveryFlowWithNavigationController:(id)arg1 completion:(id)arg2;
- (void)showEnableEscrowFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(id)arg3;
- (void)showContactAppleSupportPane;
- (void)pinChoiceAlertDidChooseToUseDevicePasscode:(bool)arg1;
- (int)stagedSecurityCodeType;
- (void)_enableSecureBackupWithPhoneNumber:(id)arg1 countryInfo:(id)arg2;
- (id)securityCodeRecoveryAttempt;
- (void)keychainSyncPhoneNumberController:(id)arg1 didCompleteWithPhoneNumber:(id)arg2 countryInfo:(id)arg3;
- (id)stagedSecurityCode;
- (void)joinCircleAndEnableSecureBackupWithPhoneNumber:(id)arg1 countryInfo:(id)arg2;
- (void)promptForPasswordIfCredentialsNotCachedOverController:(id)arg1 withCompletion:(id)arg2;
- (void)_changeToNewSecurityCode:(id)arg1 type:(int)arg2 smsTarget:(id)arg3 smsTargetCountryInfo:(id)arg4;
- (void)_recoverWithSecurityCode:(id)arg1 verificationCode:(id)arg2;
- (void)_autoVetSMSValidationWithToken:(id)arg1;
- (void)setSecurityCodeRecoveryAttempt:(id)arg1;
- (void)_resetFromRecoveryFlow;
- (void)_peerApprovalFromRecoveryFlow;
- (void)_callCompletionWithStatus:(int)arg1 error:(id)arg2;
- (void)joinCircleAfterRecovery:(bool)arg1 withCompletion:(id)arg2;
- (void)_registerForCircleChangeNotificationsWithCompletion:(id)arg1;
- (void)dismissAppleSupportPane:(id)arg1;
- (void)_finishedWithStatus:(int)arg1 error:(id)arg2;
- (bool)_resetCircleAndDisableBackupWithError:(id*)arg1;
- (bool)circleWasReset;
- (void)setStagedSecurityCode:(id)arg1 type:(int)arg2;
- (void)_showInvalidPhoneNumberAlertWithDigits:(id)arg1 countryInfo:(id)arg2;
- (bool)_changeSecurityCode:(id)arg1 type:(int)arg2 smsTarget:(id)arg3 smsTargetCountryInfo:(id)arg4 username:(id)arg5 password:(id)arg6 error:(id*)arg7;
- (id)preferencesApp;
- (void)setCircleJoinCompletion:(id)arg1;
- (void)handleCircleChangedNotification;
- (void)setSettingsSetupController:(id)arg1;
- (id)appleIDUsername;
- (void)promptForPasswordIfNeededOverController:(id)arg1 withCompletion:(id)arg2;
- (void)_showGenericFlowErrorAlert;
- (void)setAppleIDPassword:(id)arg1;
- (void)setAppleIDUsername:(id)arg1;
- (bool)registerUserCredentialsName:(id)arg1 password:(id)arg2 error:(id*)arg3;
- (id)appleIDPassword;
- (void)promptForPasswordOverController:(id)arg1 withCompletion:(id)arg2;
- (bool)_errorRequiresPasswordPrompt:(id)arg1;
- (void)_showResetFlowOverController:(id)arg1 withEnableBackupText:(bool)arg2 withCompletion:(id)arg3;
- (void)setCircleWasReset:(bool)arg1;
- (void)showResetAcknowledgementIfNeeded;
- (void)stopNavigationSpinner;
- (void)startNavigationSpinnerInViewController:(id)arg1;
- (void)setResetCompletion:(id)arg1;
- (void)setResetPromptControllerHost:(id)arg1;
- (void)setChangeSecurityCodeCompletion:(id)arg1;
- (void)setBuddyNavigationController:(id)arg1;
- (void)_registerForCircleChangeNotifications;
- (void)promptForPasswordIfNeededForWritingOverController:(id)arg1 withCompletion:(id)arg2;
- (void)_preSetupCancelledWithCurrentStatus;
- (void)showPinChoiceAlert;
- (void)makeSettingsSetupController;
- (void)joinCircleWithCompletion:(id)arg1;
- (void)showNetworkReachabilityError;
- (void)_cleanupAppleIDCredentials;
- (void)showRecoveryFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(id)arg3;
- (void)showEnableSyncFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(id)arg3;
- (void)keychainSyncController:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3;
- (bool)isRunningInBuddy;
- (void)keychainSyncControllerCancel:(id)arg1;
- (void)showController:(id)arg1;
- (id)init;
- (void)_cleanup;
- (void)dealloc;
- (void)setCompletion:(id)arg1;
- (id)completion;
- (id)navigationController;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

@end
