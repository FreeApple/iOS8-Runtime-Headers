/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentOrganizer : EKPersistentParticipant  {
}

@property(getter=isCurrentUser) bool currentUser;

+ (id)organizerWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(bool)arg4;
+ (id)relations;
+ (id)defaultPropertiesToLoad;

- (void)setCurrentUser:(bool)arg1;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(bool)arg4;
- (int)entityType;
- (bool)isCurrentUser;
- (id)owner;
- (void)setOwner:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
