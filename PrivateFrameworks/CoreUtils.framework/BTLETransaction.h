/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@class NSString, CBATTRequest, NSData;

@interface BTLETransaction : NSObject  {
    NSString *_identifier;
    CBATTRequest *_request;
    NSString *_replyCharacteristic;
    NSData *_replyData;
    bool_waitingToUpdate;
}

@property(readonly) NSString * requestCharacteristic;
@property(copy) NSData * requestData;
@property(copy) NSString * replyCharacteristic;
@property(copy) NSData * replyData;
@property(copy) NSString * identifier;
@property CBATTRequest * request;
@property bool waitingToUpdate;


- (void)setReplyData:(id)arg1;
- (void)setReplyCharacteristic:(id)arg1;
- (id)requestCharacteristic;
- (void)setWaitingToUpdate:(bool)arg1;
- (id)replyCharacteristic;
- (bool)waitingToUpdate;
- (id)replyData;
- (void)setRequestData:(id)arg1;
- (id)requestData;
- (void)setRequest:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)request;
- (void)dealloc;

@end
