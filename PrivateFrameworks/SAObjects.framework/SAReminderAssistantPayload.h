/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAReminderAssistantPayload : AceObject <SAReminderPayload> {
}

@property(copy) NSString * utterance;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)assistantPayloadWithDictionary:(id)arg1 context:(id)arg2;
+ (id)assistantPayload;

- (void)setUtterance:(id)arg1;
- (id)utterance;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
