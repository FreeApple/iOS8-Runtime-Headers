/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKDiscoveredUserInfo, CKShareID;

@interface CKShareNotification : CKNotification <NSSecureCoding> {
    long long _shareNotificationReason;
    CKShareID *_shareID;
    CKDiscoveredUserInfo *_participantInfo;
}

@property long long shareNotificationReason;
@property(copy) CKShareID * shareID;
@property(copy) CKDiscoveredUserInfo * participantInfo;

+ (bool)supportsSecureCoding;

- (id)participantInfo;
- (long long)shareNotificationReason;
- (void)setParticipantInfo:(id)arg1;
- (void)setShareNotificationReason:(long long)arg1;
- (id)initWithRemoteNotificationDictionary:(id)arg1;
- (void)setShareID:(id)arg1;
- (id)shareID;
- (id)CKPropertiesDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end
