/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSTruePredicate : NSPredicate  {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)defaultInstance;
+ (bool)_allowsEvaluation;
+ (bool)supportsSecureCoding;

- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)_validateForMetadataQueryScopes:(id)arg1;
- (bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)predicateFormat;

@end
