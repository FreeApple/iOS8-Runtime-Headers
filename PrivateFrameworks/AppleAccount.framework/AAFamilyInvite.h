/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSString, NSNumber;

@interface AAFamilyInvite : NSObject  {
    bool_isChildTransferInvite;
    NSString *_code;
    NSString *_organizerFirstName;
    NSString *_organizerLastName;
    NSString *_organizerEmail;
    NSNumber *_organizerDSID;
    NSNumber *_recepientDSID;
    NSString *_childFirstName;
    NSString *_childLastName;
}

@property(copy) NSString * code;
@property(copy) NSString * organizerFirstName;
@property(copy) NSString * organizerLastName;
@property(copy) NSString * organizerEmail;
@property(copy) NSNumber * organizerDSID;
@property(copy) NSNumber * recepientDSID;
@property bool isChildTransferInvite;
@property(copy) NSString * childFirstName;
@property(copy) NSString * childLastName;


- (void)setChildLastName:(id)arg1;
- (id)childLastName;
- (void)setChildFirstName:(id)arg1;
- (id)childFirstName;
- (void)setIsChildTransferInvite:(bool)arg1;
- (bool)isChildTransferInvite;
- (void)setRecepientDSID:(id)arg1;
- (id)recepientDSID;
- (void)setOrganizerDSID:(id)arg1;
- (id)organizerDSID;
- (void)setOrganizerEmail:(id)arg1;
- (id)organizerEmail;
- (void)setOrganizerLastName:(id)arg1;
- (id)organizerLastName;
- (void)setOrganizerFirstName:(id)arg1;
- (id)organizerFirstName;
- (void)setCode:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)code;
- (void).cxx_destruct;

@end
