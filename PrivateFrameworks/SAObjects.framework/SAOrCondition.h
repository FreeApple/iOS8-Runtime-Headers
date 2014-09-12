/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SAOrCondition : AceObject <SASupportCondition> {
}

@property(copy) NSArray * conditions;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)orConditionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)orCondition;

- (void)setConditions:(id)arg1;
- (id)conditions;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
