/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFConditionLock, MFGenericAttachmentStore;

@interface _MFAttachmentScalingDataConsumer : MFCountingDataConsumer  {
    MFGenericAttachmentStore *_store;
    MFConditionLock *_lock;
}

@property MFGenericAttachmentStore * store;
@property MFConditionLock * lock;


- (void)setStore:(id)arg1;
- (id)store;
- (void)setLock:(id)arg1;
- (id)lock;
- (long long)appendData:(id)arg1;

@end
