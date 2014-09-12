/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSObject<OS_dispatch_queue>;

@interface PLThrottleTimer : NSObject  {
    id _target;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _timeoutId;
    unsigned long long _maxTimeoutId;
    bool_isPingedSinceLastFire;
    bool_isPaused;
    bool_isInvalid;
    SEL _action;
    double _timeout;
    double _maxTimeout;
}

@property(readonly) id target;
@property(readonly) SEL action;
@property(readonly) double timeout;
@property(readonly) double maxTimeout;


- (double)maxTimeout;
- (void)_inqScheduleTimeout:(bool)arg1 maxTimeout:(bool)arg2;
- (void)_inqFireWithTimeout:(bool)arg1 timeoutId:(unsigned long long)arg2 maxTimeout:(bool)arg3 maxTimeoutId:(unsigned long long)arg4;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 timeout:(double)arg3 maxTimeout:(double)arg4;
- (void)setPaused:(bool)arg1;
- (SEL)action;
- (double)timeout;
- (void)ping;
- (void)invalidate;
- (id)target;

@end
