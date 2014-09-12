/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAMicroblogGetSocialCredential : SABaseClientBoundCommand  {
}

@property(copy) NSString * explicitUserPermission;
@property(copy) NSString * socialNetwork;

+ (id)getSocialCredentialWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getSocialCredential;

- (void)setSocialNetwork:(id)arg1;
- (id)socialNetwork;
- (void)setExplicitUserPermission:(id)arg1;
- (id)explicitUserPermission;
- (bool)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
