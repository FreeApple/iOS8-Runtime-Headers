/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMHandle;

@interface IMMessageActionChatItem : IMTranscriptChatItem  {
    IMHandle *_sender;
    IMHandle *_otherHandle;
}

@property(readonly) long long actionType;
@property(retain,readonly) IMHandle * sender;
@property(retain,readonly) IMHandle * otherHandle;


- (id)_initWithItem:(id)arg1 sender:(id)arg2 otherHandle:(id)arg3;
- (long long)actionType;
- (id)otherHandle;
- (id)sender;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
