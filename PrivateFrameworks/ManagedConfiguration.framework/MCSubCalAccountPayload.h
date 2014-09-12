/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString;

@interface MCSubCalAccountPayload : MCPayload  {
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    bool_useSSL;
    NSString *_accountPersistentUUID;
}

@property(retain,readonly) NSString * accountDescription;
@property(retain,readonly) NSString * hostname;
@property(retain,readonly) NSString * username;
@property(retain,readonly) NSString * password;
@property(readonly) bool useSSL;
@property(copy) NSString * accountPersistentUUID;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void)setAccountPersistentUUID:(id)arg1;
- (id)accountPersistentUUID;
- (bool)useSSL;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)username;
- (id)accountDescription;
- (id)title;
- (id)hostname;
- (id)password;
- (void).cxx_destruct;
- (id)description;

@end
