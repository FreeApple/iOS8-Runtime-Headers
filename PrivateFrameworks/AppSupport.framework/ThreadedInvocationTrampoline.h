/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSThread;

@interface ThreadedInvocationTrampoline : InvocationTrampoline  {
    NSThread *_thread;
    bool_immediateForMatchingThread;
}


- (id)initWithTarget:(id)arg1 thread:(id)arg2 immediateForMatchingThread:(bool)arg3;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;

@end
