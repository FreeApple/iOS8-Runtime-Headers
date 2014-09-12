/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDate, NSString, NSURL, SAEmail, SAPhone, SALocation, NSNumber;

@interface SAABPersonSearch : SADomainCommand  {
}

@property(copy) NSURL * accountIdentifier;
@property(retain) SALocation * address;
@property(copy) NSDate * birthday;
@property(copy) NSString * company;
@property(retain) SAEmail * email;
@property(copy) NSNumber * me;
@property(copy) NSString * name;
@property(retain) SAPhone * phone;
@property(copy) NSString * relationship;
@property(copy) NSString * scope;

+ (id)personSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)personSearch;

- (void)setRelationship:(id)arg1;
- (bool)requiresResponse;
- (id)encodedClassName;
- (void)setPhone:(id)arg1;
- (id)phone;
- (id)me;
- (void)setBirthday:(id)arg1;
- (id)birthday;
- (void)setEmail:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setMe:(id)arg1;
- (id)scope;
- (id)relationship;
- (void)setCompany:(id)arg1;
- (id)company;
- (void)setAccountIdentifier:(id)arg1;
- (id)accountIdentifier;
- (void)setName:(id)arg1;
- (id)email;
- (id)name;
- (id)groupIdentifier;
- (id)address;
- (void)setScope:(id)arg1;

@end
