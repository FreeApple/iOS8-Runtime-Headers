/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString;

@interface MFOfflineTransferFailureSnapshot : NSObject <NSCoding> {
    NSString *_originalRemoteID;
    NSString *_originalMailboxID;
    unsigned long long _originalMessageFlags;
}

@property(readonly) NSString * originalRemoteID;
@property(readonly) NSString * originalMailboxID;
@property(readonly) unsigned long long originalMessageFlags;


- (unsigned long long)originalMessageFlags;
- (id)initWithOriginalRemoteID:(id)arg1 mailboxID:(id)arg2 messageFlags:(unsigned long long)arg3;
- (id)originalRemoteID;
- (id)originalMailboxID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;

@end
