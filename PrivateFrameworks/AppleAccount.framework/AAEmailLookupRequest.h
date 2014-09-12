/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSArray, ACAccount;

@interface AAEmailLookupRequest : AARequest  {
    ACAccount *_account;
    NSArray *_emailAddresses;
}

@property(retain) ACAccount * account;
@property(retain) NSArray * emailAddresses;

+ (Class)responseClass;

- (id)initWithURLString:(id)arg1 account:(id)arg2 emailAddresses:(id)arg3;
- (id)initWithAccount:(id)arg1 emailAddresses:(id)arg2;
- (id)urlCredential;
- (id)urlString;
- (id)urlRequest;
- (void)setEmailAddresses:(id)arg1;
- (id)emailAddresses;
- (id)account;
- (void)setAccount:(id)arg1;
- (void).cxx_destruct;

@end
