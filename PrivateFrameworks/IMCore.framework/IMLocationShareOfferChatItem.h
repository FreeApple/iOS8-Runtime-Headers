/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSString, IMHandle, NSDate;

@interface IMLocationShareOfferChatItem : IMTranscriptChatItem <IMMessageChatItem> {
    IMHandle *_sender;
    bool_actionableEclipsed;
}

@property(readonly) long long offerState;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) bool isFromMe;
@property(readonly) bool failed;
@property(retain,readonly) NSDate * time;
@property(retain,readonly) IMHandle * sender;


- (bool)failed;
- (bool)_isActionableEclipsed;
- (long long)offerState;
- (void)_setActionableEclipsed:(bool)arg1;
- (id)_initWithItem:(id)arg1 sender:(id)arg2;
- (id)time;
- (bool)isFromMe;
- (id)sender;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
