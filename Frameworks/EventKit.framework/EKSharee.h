/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString, EKCalendar;

@interface EKSharee : EKObject <NSCopying, EKIdentityProtocol> {
}

@property(readonly) NSString * UUID;
@property(copy) NSString * name;
@property(copy) NSString * emailAddress;
@property(copy) NSString * firstName;
@property(copy) NSString * lastName;
@property(copy) NSString * externalID;
@property int shareeStatus;
@property int shareeAccessLevel;
@property(readonly) EKCalendar * owner;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)shareeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)shareeWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3;

- (id)_persistentSharee;
- (void*)ABRecordWithAddressBook:(void*)arg1;
- (id)lazyLoadRelationForKey:(id)arg1;
- (void)setShareeAccessLevel:(int)arg1;
- (int)shareeAccessLevel;
- (void)setShareeStatus:(int)arg1;
- (int)shareeStatus;
- (id)externalID;
- (void)setExternalID:(id)arg1;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3;
- (id)owner;
- (void)setEmailAddress:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (id)emailAddress;
- (id)lastName;
- (id)firstName;
- (id)UUID;
- (void)setName:(id)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
