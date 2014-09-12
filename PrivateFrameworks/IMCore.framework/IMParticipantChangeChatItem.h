/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMHandle;

@interface IMParticipantChangeChatItem : IMTranscriptChatItem  {
    IMHandle *_sender;
    IMHandle *_otherHandle;
    IMHandle *_handle;
}

@property(readonly) long long changeType;
@property(retain,readonly) IMHandle * sender;
@property(retain,readonly) IMHandle * handle;
@property(retain,readonly) IMHandle * otherHandle;


- (id)_initWithItem:(id)arg1 sender:(id)arg2 otherHandle:(id)arg3;
- (long long)changeType;
- (id)otherHandle;
- (id)handle;
- (id)sender;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
