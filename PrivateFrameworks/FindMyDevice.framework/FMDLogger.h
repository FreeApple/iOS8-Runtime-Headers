/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

@interface FMDLogger : NSObject  {
    bool_logLevelsMaxedOut;
    bool_logLocationIndicatorSent;
    bool_isInternalBuild;
}

@property bool isInternalBuild;
@property bool logLevelsMaxedOut;
@property bool logLocationIndicatorSent;

+ (id)sharedInstance;

- (void)setLogLevelsMaxedOut:(bool)arg1;
- (void)setLogLocationIndicatorSent:(bool)arg1;
- (bool)logLocationIndicatorSent;
- (bool)isInternalBuild;
- (bool)logLevelsMaxedOut;
- (void)logSettingsDidChange;
- (void)maxOutLogging;
- (void)logAtLevel:(long long)arg1 facility:(id)arg2 filename:(const char *)arg3 lineNumber:(long long)arg4 function:(const char *)arg5 message:(id)arg6;
- (void)setIsInternalBuild:(bool)arg1;
- (id)init;

@end
