/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class ACAccount, ACAccountStore;

@interface AAAppleIDSettingsRequest : AARequest  {
    ACAccount *_appleAccount;
    ACAccount *_grandSlamAccount;
    ACAccountStore *_store;
}

+ (Class)responseClass;

- (id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3;
- (id)urlRequest;
- (void).cxx_destruct;

@end
