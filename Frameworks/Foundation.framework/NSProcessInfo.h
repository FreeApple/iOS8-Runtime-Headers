/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSDictionary, NSArray, NSString;

@interface NSProcessInfo : NSObject  {
    NSDictionary *environment;
    NSArray *arguments;
    NSString *hostName;
    NSString *name;
    long long automaticTerminationOptOutCounter;
}

@property(copy,readonly) NSDictionary * environment;
@property(copy,readonly) NSArray * arguments;
@property(copy,readonly) NSString * hostName;
@property(copy) NSString * processName;
@property(readonly) int processIdentifier;
@property(copy,readonly) NSString * globallyUniqueString;
@property(copy,readonly) NSString * operatingSystemVersionString;
@property(readonly) struct { long long x1; long long x2; long long x3; } operatingSystemVersion;
@property(readonly) unsigned long long processorCount;
@property(readonly) unsigned long long activeProcessorCount;
@property(readonly) unsigned long long physicalMemory;
@property(readonly) double systemUptime;
@property bool automaticTerminationSupportEnabled;

+ (id)processInfo;

- (int)processIdentifier;
- (id)arguments;
- (double)systemUptime;
- (id)environment;
- (unsigned long long)processorCount;
- (void)dealloc;
- (void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 block:(id)arg3;
- (void)endSystemBehaviorSuspension:(id)arg1;
- (id)beginSuspensionOfSystemBehaviors:(unsigned long long)arg1 reason:(id)arg2;
- (void)_enableAutomaticTerminationOnly:(id)arg1;
- (void)_disableAutomaticTerminationOnly:(id)arg1;
- (bool)automaticTerminationSupportEnabled;
- (void)setAutomaticTerminationSupportEnabled:(bool)arg1;
- (void)enableAutomaticTermination:(id)arg1;
- (void)disableAutomaticTermination:(id)arg1;
- (long long)_suddenTerminationDisablingCount;
- (void)_exitWhenSuddenTerminationEnabledWithStatus:(int)arg1;
- (void)_exitIfSuddenTerminationEnabledWithStatus:(int)arg1;
- (void)enableSuddenTermination;
- (void)disableSuddenTermination;
- (bool)isTranslated;
- (unsigned long long)physicalMemory;
- (unsigned long long)activeProcessorCount;
- (bool)isOperatingSystemAtLeastVersion:(struct { long long x1; long long x2; long long x3; })arg1;
- (id)operatingSystemVersionString;
- (id)operatingSystemName;
- (id)userHomeDirectory;
- (id)userFullName;
- (id)userName;
- (id)globallyUniqueString;
- (void)setProcessName:(id)arg1;
- (id)hostName;
- (void)setArguments:(id)arg1;
- (void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(id)arg3;
- (struct { long long x1; long long x2; long long x3; })operatingSystemVersion;
- (unsigned long long)operatingSystem;
- (void)endActivity:(id)arg1;
- (void)_reactivateActivity:(id)arg1;
- (id)beginActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2;
- (id)processName;
- (void)_enableAutomaticTerminationWithoutSettingRelaunchable:(id)arg1;
- (void)_disableAutomaticTerminationWithoutSettingRelaunchable:(id)arg1;

@end
