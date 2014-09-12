/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSMutableArray;

@interface IMAVHandler : NSObject  {
    NSMutableArray *_pendingChats;
    NSMutableArray *_pendingLookups;
}

+ (void)ensureHandlerSetup;
+ (void)initialize;

- (void)account:(id)arg1 conference:(id)arg2 invitationSentSuccessfully:(bool)arg3;
- (void)account:(id)arg1 relay:(id)arg2 handleCancel:(id)arg3 fromPerson:(id)arg4;
- (void)account:(id)arg1 relay:(id)arg2 handleUpdate:(id)arg3 fromPerson:(id)arg4;
- (void)account:(id)arg1 relay:(id)arg2 handleInitate:(id)arg3 fromPerson:(id)arg4;
- (void)account:(id)arg1 conference:(id)arg2 peerID:(id)arg3 propertiesUpdated:(id)arg4;
- (void)pendingACRequestComplete;
- (void)pendingVCRequestComplete;
- (void)account:(id)arg1 avAction:(unsigned int)arg2 withArguments:(id)arg3 toAVChat:(id)arg4 isVideo:(bool)arg5;
- (void)_handleFilteredIncomingAVChatForNotification:(id)arg1;
- (void)_enqueueIMAVChatForNetworkActivation:(id)arg1;
- (void)account:(id)arg1 conference:(id)arg2 changedToNewConferenceID:(id)arg3;
- (void)account:(id)arg1 conference:(id)arg2 peerIDChangedFromID:(id)arg3 toID:(id)arg4;
- (void)account:(id)arg1 conference:(id)arg2 receivedAVMessage:(unsigned int)arg3 from:(id)arg4 sessionID:(unsigned int)arg5 userInfo:(id)arg6;
- (void)account:(id)arg1 conference:(id)arg2 receivedCancelInvitationFrom:(id)arg3 properties:(id)arg4;
- (void)account:(id)arg1 conference:(id)arg2 receivedResponseToInvitationFrom:(id)arg3 properties:(id)arg4;
- (void)account:(id)arg1 conference:(id)arg2 receivedInvitationFrom:(id)arg3 properties:(id)arg4;
- (void)_notifyOfFilteredIncomingInvitationFor:(id)arg1 notifyInvitationListeners:(bool)arg2;
- (void)_notifyOfIncomingInvitationFor:(id)arg1 notifyInvitationListeners:(bool)arg2;
- (void)_handleIncomingWithAccount:(id)arg1 fromHandle:(id)arg2 conference:(id)arg3 properites:(id)arg4 allowCall:(bool)arg5;
- (void)_handleIncomingAVChatForNotification:(id)arg1;
- (void)account:(id)arg1 postedError:(id)arg2;
- (void)persistentProperty:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)property:(id)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)vcCapabilitiesChanged:(unsigned long long)arg1;
- (void)setupComplete;
- (void)dealloc;

@end
