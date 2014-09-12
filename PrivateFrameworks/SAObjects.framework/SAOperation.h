/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDictionary, NSString;

@interface SAOperation : AceObject <SAAceSerializable> {
}

@property(copy) NSDictionary * constraints;
@property(copy) NSString * domainId;
@property(copy) NSString * operationId;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)operationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)operation;

- (void)setOperationId:(id)arg1;
- (id)operationId;
- (void)setDomainId:(id)arg1;
- (id)domainId;
- (id)encodedClassName;
- (void)setConstraints:(id)arg1;
- (id)constraints;
- (id)groupIdentifier;

@end
