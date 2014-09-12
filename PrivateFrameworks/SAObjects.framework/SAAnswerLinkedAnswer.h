/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSURL;

@interface SAAnswerLinkedAnswer : AceObject <SAAceSerializable> {
}

@property(copy) NSString * descriptionText;
@property(copy) NSURL * image;
@property(copy) NSURL * link;
@property(copy) NSString * name;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)linkedAnswerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)linkedAnswer;

- (void)setDescriptionText:(id)arg1;
- (id)descriptionText;
- (id)encodedClassName;
- (void)setName:(id)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (id)name;
- (id)groupIdentifier;
- (id)link;
- (void)setLink:(id)arg1;

@end
