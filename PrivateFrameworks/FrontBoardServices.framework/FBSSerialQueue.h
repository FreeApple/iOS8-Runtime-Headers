/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class NSObject<OS_dispatch_queue>, NSArray;

@interface FBSSerialQueue : NSObject  {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_mainRunLoopModes;
    struct __CFRunLoopSource { } *_runLoopSource;
}

+ (id)queueWithDispatchQueue:(id)arg1;
+ (id)queueWithMainRunLoopModes:(id)arg1;

- (void)assertOnQueue;
- (id)_initWithDispatchQueue:(id)arg1 mainRunLoopModes:(id)arg2;
- (void)performAsync:(id)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;

@end
