/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SAHAAttributeValue;

@interface SAHAAction : SADomainObject  {
}

@property(copy) NSString * actionType;
@property(copy) NSString * attribute;
@property(retain) SAHAAttributeValue * value;

+ (id)actionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)action;

- (void)setAttribute:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (void)setActionType:(id)arg1;
- (id)actionType;
- (id)value;
- (void)setValue:(id)arg1;
- (id)attribute;
- (id)groupIdentifier;

@end
