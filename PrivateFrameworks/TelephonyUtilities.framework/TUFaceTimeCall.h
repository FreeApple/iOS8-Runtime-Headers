/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class IMAVChat;

@interface TUFaceTimeCall : TUCall  {
    IMAVChat *_chat;
}

@property(retain) IMAVChat * chat;


- (void)setChat:(id)arg1;
- (id)conferenceInviteDictionary;
- (id)remoteFrequency;
- (id)conferenceIdentifier;
- (bool)managesAudioRelay;
- (id)localFrequency;
- (float)localVolume;
- (bool)isTTY;
- (bool)playsConnectedSound;
- (bool)needsManualInCallSounds;
- (bool)managesAudioInterruptions;
- (int)faceTimeIDStatus;
- (id)totalDataUsed;
- (double)callDuration;
- (id)callHistoryIdentifier;
- (id)callUUID;
- (int)callIdentifier;
- (bool)isAlerting;
- (id)callerNameFromNetwork;
- (id)destinationID;
- (id)remoteParticipant;
- (void)leaveConference;
- (void)joinConference;
- (bool)isConferenced;
- (bool)shouldPlayDTMFTone;
- (bool)isBlocked;
- (bool)isStatusFinal;
- (void)inviteWithCallIdentifier:(int)arg1;
- (id)initWithChat:(id)arg1;
- (bool)setDownlinkMuted:(bool)arg1;
- (bool)isDownlinkMuted;
- (bool)setUplinkMuted:(bool)arg1;
- (bool)isUplinkMuted;
- (bool)isOutgoing;
- (int)disconnectedReason;
- (void)answerWithSourceIdentifier:(id)arg1;
- (id)chat;
- (bool)isEqual:(id)arg1;
- (double)startTime;
- (void)dealloc;
- (void)disconnect;

@end
