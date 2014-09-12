/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class IMHandle, NSString, NSDictionary, NSArray, NSDate, NSNumber;

@interface IMAVChatProxy : NSObject  {
    NSDictionary *_info;
}

@property(retain,readonly) NSString * GUID;
@property(readonly) unsigned int sessionID;
@property(readonly) long long callID;
@property(retain,readonly) NSString * conferenceID;
@property(readonly) unsigned int state;
@property(retain,readonly) NSDate * dateConnected;
@property(retain,readonly) NSDate * dateEnded;
@property(retain,readonly) NSArray * remoteParticipants;
@property(retain,readonly) IMHandle * initiatorIMHandle;
@property(retain,readonly) IMHandle * otherIMHandle;
@property(readonly) unsigned int endedReason;
@property(readonly) int endedError;
@property(readonly) bool isCaller;
@property(readonly) bool isVideo;
@property(readonly) bool isActive;
@property(readonly) bool isStateFinal;
@property(readonly) bool isSendingAudio;
@property(setter=setMute:) bool isMute;
@property(retain,readonly) NSNumber * dataUploaded;
@property(retain,readonly) NSNumber * dataDownloaded;
@property double invitationTimeoutTime;
@property double connectionTimeoutTime;


- (void)finalUpdate;
- (double)connectionTimeoutTime;
- (double)invitationTimeoutTime;
- (bool)isMute;
- (bool)_isProxy;
- (id)dateEnded;
- (void)updateWithInfo:(id)arg1;
- (void)setMute:(bool)arg1;
- (void)inviteAll;
- (id)initiatorIMHandle;
- (void)cancelInvitation;
- (id)account;
- (long long)callID;
- (bool)isActive;
- (void)setInvitationTimeoutTime:(double)arg1;
- (void)setConnectionTimeoutTime:(double)arg1;
- (bool)isSendingAudio;
- (id)dataDownloaded;
- (id)dataUploaded;
- (id)conferenceID;
- (id)GUID;
- (id)remoteParticipants;
- (id)dateConnected;
- (bool)isCaller;
- (bool)isStateFinal;
- (void)invite:(id)arg1 additionalPeers:(id)arg2;
- (id)otherIMHandle;
- (void)endChat;
- (void)declineInvitation;
- (void)acceptInvitation;
- (bool)isVideo;
- (int)endedError;
- (unsigned int)endedReason;
- (id)methodSignatureForSelector:(SEL)arg1;
- (unsigned int)sessionID;
- (unsigned int)state;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)description;

@end
