/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SADomainObject;

@interface SAAcknowledgeAlert : SABaseClientBoundCommand  {
}

@property(retain) SADomainObject * object;

+ (id)acknowledgeAlertWithDictionary:(id)arg1 context:(id)arg2;
+ (id)acknowledgeAlert;

- (bool)requiresResponse;
- (id)encodedClassName;
- (void)setObject:(id)arg1;
- (id)object;
- (id)groupIdentifier;

@end
