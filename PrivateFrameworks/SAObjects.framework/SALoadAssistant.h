/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSData, NSString;

@interface SALoadAssistant : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSData * activationToken;
@property(copy) NSString * assistantId;
@property(copy) NSString * connectionMode;
@property(copy) NSString * connectionType;
@property(copy) NSString * language;
@property(copy) NSData * sessionValidationData;
@property(copy) NSString * speechId;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)loadAssistantWithDictionary:(id)arg1 context:(id)arg2;
+ (id)loadAssistant;

- (void)setConnectionType:(id)arg1;
- (void)setSessionValidationData:(id)arg1;
- (id)sessionValidationData;
- (void)setConnectionMode:(id)arg1;
- (id)connectionMode;
- (void)setSpeechId:(id)arg1;
- (id)speechId;
- (void)setAssistantId:(id)arg1;
- (id)assistantId;
- (void)setActivationToken:(id)arg1;
- (id)activationToken;
- (id)encodedClassName;
- (id)connectionType;
- (void)setLanguage:(id)arg1;
- (id)language;
- (id)groupIdentifier;

@end
