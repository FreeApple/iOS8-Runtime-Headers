/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class NSData;

@interface _MFWholeMessageSection : NSObject <MFMessageDataSection> {
    NSData *_data;
}

@property(retain) NSData * data;


- (id)partName;
- (bool)isPartial;
- (bool)isComplete;
- (id)data;
- (void)dealloc;
- (void)setData:(id)arg1;

@end
