/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSObject<OS_dispatch_queue>, AVWeakReference, NSString;

@interface AVWeakReferencingDelegateStorage : NSObject <AVDelegateStorage> {
    NSObject<OS_dispatch_queue> *_delegateReadWriteQueue;
    AVWeakReference *_weakReferenceToDelegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property(readonly) id delegate;
@property(readonly) NSObject<OS_dispatch_queue> * delegateQueue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (void)initialize;

- (void)getRetainedDelegate:(id*)arg1 retainedDelegateQueue:(id*)arg2;
- (void)_collectUncollectables;
- (void)invokeDelegateCallbackWithBlock:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)init;
- (void)_setDelegate:(id)arg1;
- (id)_delegate;
- (id)delegate;
- (id)delegateQueue;
- (void)finalize;
- (void)dealloc;

@end
