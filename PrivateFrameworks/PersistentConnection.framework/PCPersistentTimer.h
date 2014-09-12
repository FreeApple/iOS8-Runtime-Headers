/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class NSString, PCSimpleTimer, NSObject<OS_dispatch_queue>;

@interface PCPersistentTimer : NSObject <PCLoggingDelegate, CUTPowerMonitorDelegate> {
    double _fireTime;
    double _startTime;
    unsigned long long _guidancePriority;
    double _minimumEarlyFireProportion;
    bool_triggerOnGMTChange;
    bool_disableSystemWaking;
    NSString *_serviceIdentifier;
    id _target;
    SEL _selector;
    id _userInfo;
    PCSimpleTimer *_simpleTimer;
    NSObject<OS_dispatch_queue> *_queue;
}

@property double minimumEarlyFireProportion;
@property bool disableSystemWaking;
@property(readonly) double fireTime;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) NSString * loggingIdentifier;

+ (double)_currentGuidanceTime;
+ (double)currentMachTimeInterval;
+ (id)lastSystemWakeDate;
+ (void)_updateTime:(double)arg1 forGuidancePriority:(unsigned long long)arg2;
+ (id)_backgroundUpdateQueue;

- (id)initWithFireDate:(id)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (bool)disableSystemWaking;
- (double)minimumEarlyFireProportion;
- (void)interfaceManagerWWANInterfaceChangedPowerState:(id)arg1;
- (void)setMinimumEarlyFireProportion:(double)arg1;
- (id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 guidancePriority:(unsigned long long)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6;
- (double)_earlyFireTime;
- (double)_nextForcedAlignmentAbsoluteTime;
- (bool)firingIsImminent;
- (void)scheduleInQueue:(id)arg1;
- (void)_fireTimerFired;
- (void)scheduleInRunLoop:(id)arg1 inMode:(id)arg2;
- (void)_updateTimers;
- (id)_initWithAbsoluteTime:(double)arg1 serviceIdentifier:(id)arg2 guidancePriority:(unsigned long long)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 triggerOnGMTChange:(bool)arg7;
- (id)loggingIdentifier;
- (void)scheduleInRunLoop:(id)arg1;
- (void)setDisableSystemWaking:(bool)arg1;
- (id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1;
- (void)interfaceManagerInternetReachabilityChanged:(id)arg1;
- (double)fireTime;
- (void)cutPowerMonitorBatteryConnectedStateDidChange:(id)arg1;
- (id)debugDescription;
- (bool)isValid;
- (void)invalidate;
- (id)userInfo;
- (void)dealloc;

@end
