/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SSAccount, NSString, NSNumber;

@interface SUScriptAccount : SUScriptObject  {
    SSAccount *_account;
}

@property(retain) SSAccount * account;
@property(copy) NSString * credits;
@property(retain) NSNumber * dsID;
@property(copy) NSString * identifier;
@property(readonly) NSString * ITunesPassSerialNumber;
@property(copy) NSString * kind;
@property(getter=isPrimaryLockerAccount,readonly) id primaryLockerAccount;
@property(retain) id lockerEnabled;
@property(retain) id purchaseHistoryEnabled;
@property(retain) id socialEnabled;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (id)socialEnabled;
- (void)setPurchaseHistoryEnabled:(id)arg1;
- (void)setLockerEnabled:(id)arg1;
- (void)setDsID:(id)arg1;
- (void)setCredits:(id)arg1;
- (id)purchaseHistoryEnabled;
- (id)lockerEnabled;
- (id)isPrimaryLockerAccount;
- (id)credits;
- (bool)isSecureTokenValid;
- (bool)isPrimaryAccount;
- (void)_setServiceType:(long long)arg1 enabled:(id)arg2;
- (void)_commitChanges;
- (id)dsID;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)setSocialEnabled:(id)arg1;
- (id)ITunesPassSerialNumber;
- (void)setSecureToken:(id)arg1;
- (id)kind;
- (void)setKind:(id)arg1;
- (id)account;
- (void)setAccount:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)attributeKeys;
- (id)init;
- (void)dealloc;

@end
