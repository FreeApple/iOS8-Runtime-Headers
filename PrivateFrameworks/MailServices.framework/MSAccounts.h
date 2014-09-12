/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSAccounts : MSMailDefaultService  {
}

+ (id)customSignatureForSendingEmailAddress:(id)arg1;
+ (bool)setPushStateForMailboxWithPath:(id)arg1 account:(id)arg2 pushState:(bool)arg3 error:(id*)arg4;
+ (void)mailboxListingForAccountWithUniqueIdentifier:(id)arg1 keys:(id)arg2 completionBlock:(id)arg3;
+ (bool)deleteAccountsWithUniqueIdentifiers:(id)arg1 error:(id*)arg2;
+ (void)accountValuesForKeys:(id)arg1 launchMobileMail:(bool)arg2 completionBlock:(id)arg3;
+ (void)accountValuesForKeys:(id)arg1 completionBlock:(id)arg2;
+ (bool)hasActiveAccounts;
+ (void)accountValuesForKeys:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 launchMobileMail:(bool)arg4 completionBlock:(id)arg5;
+ (bool)canSendMailSourceAccountManagement:(int)arg1;
+ (bool)canSendMail;

- (void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(id)arg3;
- (void)_listAccountKeys:(id)arg1 originatingBundleID:(id)arg2 sourceAccountManagement:(int)arg3 handler:(id)arg4;

@end
