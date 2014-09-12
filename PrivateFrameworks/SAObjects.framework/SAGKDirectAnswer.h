/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SAGKSpeakableAnswer;

@interface SAGKDirectAnswer : AceObject <SAAceSerializable> {
}

@property(copy) NSString * answer;
@property(retain) SAGKSpeakableAnswer * speakableAnswer;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)directAnswerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)directAnswer;

- (void)setSpeakableAnswer:(id)arg1;
- (id)speakableAnswer;
- (void)setAnswer:(id)arg1;
- (id)encodedClassName;
- (id)answer;
- (id)groupIdentifier;

@end
