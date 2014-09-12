/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SADomainObject, NSString;

@interface SADomainObjectDelete : SABaseClientBoundCommand <SADomainObjectCommand> {
}

@property(retain) SADomainObject * identifier;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)domainObjectDeleteWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainObjectDelete;

- (bool)requiresResponse;
- (id)encodedClassName;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)groupIdentifier;

@end
