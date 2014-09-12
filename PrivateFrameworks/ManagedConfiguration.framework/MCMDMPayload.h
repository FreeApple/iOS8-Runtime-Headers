/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString, NSData, NSArray;

@interface MCMDMPayload : MCPayload  {
    NSString *_identityUUID;
    NSData *_identityPersistentID;
    bool_useDevelopmentAPNS;
    NSString *_topic;
    NSString *_serverURLString;
    NSString *_checkInURLString;
    int _accessRights;
    bool_signMessage;
    bool_checkOutWhenRemoved;
}

@property(retain,readonly) NSString * identityUUID;
@property(retain) NSData * identityPersistentID;
@property(retain,readonly) NSString * topic;
@property(retain,readonly) NSString * serverURLString;
@property(readonly) bool useDevelopmentAPNS;
@property(retain,readonly) NSString * checkInURLString;
@property(readonly) int accessRights;
@property(retain,readonly) NSArray * localizedAccessRightDescriptions;
@property(readonly) bool signMessage;
@property(readonly) bool checkOutWhenRemoved;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (id)topic;
- (bool)checkOutWhenRemoved;
- (bool)signMessage;
- (int)accessRights;
- (id)checkInURLString;
- (bool)useDevelopmentAPNS;
- (id)serverURLString;
- (void)setIdentityPersistentID:(id)arg1;
- (id)identityPersistentID;
- (id)identityUUID;
- (id)localizedAccessRightDescriptions;
- (id)_nonHTTPSURLErrorForField:(id)arg1;
- (id)_invalidTopicError;
- (id)_invalidRightsError;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)title;
- (void).cxx_destruct;
- (id)description;

@end
