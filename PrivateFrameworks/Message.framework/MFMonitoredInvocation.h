/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFActivityMonitor;

@interface MFMonitoredInvocation : NSInvocation  {
    MFActivityMonitor *_monitor;
    bool_shouldLogInvocation;
    bool_isLowPriority;
}

@property(readonly) MFActivityMonitor * monitor;
@property bool isLowPriority;

+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 taskName:(id)arg5 priority:(int)arg6 canBeCancelled:(bool)arg7;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3 taskName:(id)arg4 priority:(int)arg5 canBeCancelled:(bool)arg6;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 taskName:(id)arg3 priority:(int)arg4 canBeCancelled:(bool)arg5;
+ (id)invocationWithMethodSignature:(id)arg1;

- (void)setIsLowPriority:(bool)arg1;
- (bool)isLowPriority;
- (void)setShouldLogInvocation:(bool)arg1;
- (bool)mf_shouldLogInvocation;
- (id)monitor;
- (void)invoke;
- (void)dealloc;
- (id)description;

@end
