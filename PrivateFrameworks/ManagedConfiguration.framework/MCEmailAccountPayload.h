/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString, NSNumber;

@interface MCEmailAccountPayload : MCEmailAccountPayloadBase  {
    NSString *_emailAccountDescription;
    NSString *_emailAccountName;
    NSString *_emailAccountType;
    NSString *_emailAddress;
    NSString *_incomingMailServerAuthentication;
    NSString *_incomingMailServerHostname;
    NSNumber *_incomingMailServerPortNumber;
    bool_incomingMailServerUseSSL;
    NSString *_incomingMailServerUsername;
    NSString *_incomingMailServerIMAPPathPrefix;
    NSString *_incomingPassword;
    NSString *_outgoingPassword;
    bool_outgoingPasswordSameAsIncomingPassword;
    NSString *_outgoingMailServerAuthentication;
    NSString *_outgoingMailServerHostname;
    NSNumber *_outgoingMailServerPortNumber;
    bool_outgoingMailServerUseSSL;
    NSString *_outgoingMailServerUsername;
}

@property(retain,readonly) NSString * emailAccountDescription;
@property(retain,readonly) NSString * emailAccountName;
@property(retain,readonly) NSString * emailAccountType;
@property(retain,readonly) NSString * emailAddress;
@property(retain,readonly) NSString * incomingMailServerAuthentication;
@property(retain,readonly) NSString * incomingMailServerHostname;
@property(retain,readonly) NSNumber * incomingMailServerPortNumber;
@property(readonly) bool incomingMailServerUseSSL;
@property(retain,readonly) NSString * incomingMailServerUsername;
@property(retain,readonly) NSString * incomingMailServerIMAPPathPrefix;
@property(retain,readonly) NSString * incomingPassword;
@property(retain,readonly) NSString * outgoingPassword;
@property(readonly) bool outgoingPasswordSameAsIncomingPassword;
@property(retain,readonly) NSString * outgoingMailServerAuthentication;
@property(retain,readonly) NSString * outgoingMailServerHostname;
@property(retain,readonly) NSNumber * outgoingMailServerPortNumber;
@property(readonly) bool outgoingMailServerUseSSL;
@property(retain,readonly) NSString * outgoingMailServerUsername;

+ (id)profileNameFromAccountTag:(id)arg1;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (id)outgoingMailServerUsername;
- (bool)outgoingMailServerUseSSL;
- (id)outgoingMailServerPortNumber;
- (id)outgoingMailServerHostname;
- (id)outgoingMailServerAuthentication;
- (bool)outgoingPasswordSameAsIncomingPassword;
- (id)outgoingPassword;
- (id)incomingPassword;
- (id)incomingMailServerIMAPPathPrefix;
- (id)incomingMailServerUsername;
- (bool)incomingMailServerUseSSL;
- (id)incomingMailServerPortNumber;
- (id)incomingMailServerAuthentication;
- (id)emailAccountName;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)_authenticationTypeLocalizedString:(id)arg1;
- (id)emailAccountType;
- (id)incomingMailServerHostname;
- (id)_emailAccountTypeLocalizedString;
- (id)emailAccountDescription;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)emailAddress;
- (id)title;
- (void).cxx_destruct;
- (id)description;

@end
