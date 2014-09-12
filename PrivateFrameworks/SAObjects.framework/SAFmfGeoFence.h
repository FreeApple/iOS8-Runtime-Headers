/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SALocation, SAPersonAttribute;

@interface SAFmfGeoFence : SADomainObject  {
}

@property(retain) SAPersonAttribute * friend;
@property(copy) NSString * geoFenceTrigger;
@property(retain) SALocation * location;

+ (id)geoFenceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)geoFence;

- (void)setGeoFenceTrigger:(id)arg1;
- (id)geoFenceTrigger;
- (void)setFriend:(id)arg1;
- (id)friend;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)groupIdentifier;

@end
