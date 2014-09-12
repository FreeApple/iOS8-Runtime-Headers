/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSString, ACAccount, ACAccountStore;

@interface AAGrandSlamSigner : NSObject  {
    ACAccount *_appleAccount;
    ACAccount *_grandSlamAccount;
    ACAccountStore *_store;
    NSString *_appTokenID;
}

@property(readonly) ACAccount * appleAccount;
@property(readonly) ACAccount * grandSlamAccount;
@property(readonly) ACAccountStore * accountStore;


- (id)grandSlamAccount;
- (bool)signURLRequest:(id)arg1;
- (id)appleAccount;
- (id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 appTokenID:(id)arg4;
- (id)accountStore;
- (void).cxx_destruct;

@end
