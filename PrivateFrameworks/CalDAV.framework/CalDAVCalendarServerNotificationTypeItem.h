/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerNotificationTypeItem : CoreDAVItem  {
    CoreDAVItemWithNoChildren *_inviteNotification;
    CoreDAVItemWithNoChildren *_inviteReply;
    CoreDAVItemWithNoChildren *_resourceChanged;
}

@property(retain) CoreDAVItemWithNoChildren * inviteNotification;
@property(retain) CoreDAVItemWithNoChildren * inviteReply;
@property(retain) CoreDAVItemWithNoChildren * resourceChanged;
@property(readonly) bool isInviteReply;
@property(readonly) bool isInviteNotification;
@property(readonly) bool isResourceChanged;


- (bool)notificationNameMatches:(id)arg1;
- (id)resourceChanged;
- (id)inviteReply;
- (id)inviteNotification;
- (void)setResourceChanged:(id)arg1;
- (void)setInviteReply:(id)arg1;
- (void)setInviteNotification:(id)arg1;
- (bool)notificationNameIn:(id)arg1;
- (bool)isResourceChanged;
- (bool)isInviteReply;
- (bool)isInviteNotification;
- (id)copyParseRules;
- (void)dealloc;
- (id)description;

@end
