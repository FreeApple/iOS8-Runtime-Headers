/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIMutableApplicationSceneClientSettings : FBSMutableSceneClientSettings <UIApplicationSceneClientSettings> {
}

@property long long statusBarStyle;
@property bool statusBarHidden;
@property long long defaultStatusBarStyle;
@property bool defaultStatusBarHidden;
@property(copy) NSString * defaultPNGName;
@property double defaultPNGExpirationTime;
@property long long compatibilityMode;
@property bool idleTimerDisabled;
@property bool orientationEnabled;
@property unsigned long long proximityDetectionModes;
@property long long controlCenterRevealMode;
@property long long notificationCenterRevealMode;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setNotificationCenterRevealMode:(long long)arg1;
- (void)setControlCenterRevealMode:(long long)arg1;
- (long long)notificationCenterRevealMode;
- (long long)controlCenterRevealMode;
- (bool)orientationEnabled;
- (bool)idleTimerDisabled;
- (double)defaultPNGExpirationTime;
- (bool)defaultStatusBarHidden;
- (long long)defaultStatusBarStyle;
- (void)setOrientationEnabled:(bool)arg1;
- (id)defaultPNGName;
- (long long)compatibilityMode;
- (void)setProximityDetectionModes:(unsigned long long)arg1;
- (unsigned long long)proximityDetectionModes;
- (void)setCompatibilityMode:(long long)arg1;
- (void)setDefaultPNGExpirationTime:(double)arg1;
- (void)setDefaultPNGName:(id)arg1;
- (void)setDefaultStatusBarHidden:(bool)arg1;
- (void)setDefaultStatusBarStyle:(long long)arg1;
- (void)setStatusBarHidden:(bool)arg1;
- (void)setStatusBarStyle:(long long)arg1;
- (long long)statusBarStyle;
- (bool)statusBarHidden;
- (bool)isUISubclass;
- (void)setIdleTimerDisabled:(bool)arg1;

@end
