/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary;

@interface UIApplicationSceneTransitionContext : FBSSceneTransitionContext  {
}

@property(retain) NSDictionary * payload;
@property bool forTesting;
@property bool safeMode;
@property double userLaunchEventTime;
@property double execTime;
@property(getter=_lifecycleActionType,setter=_setLifecycleActionType:) unsigned long long lifecycleActionType;


- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (void)setExecTime:(double)arg1;
- (void)setUserLaunchEventTime:(double)arg1;
- (void)setSafeMode:(bool)arg1;
- (void)setForTesting:(bool)arg1;
- (void)setPayload:(id)arg1;
- (bool)safeMode;
- (double)execTime;
- (double)userLaunchEventTime;
- (bool)forTesting;
- (unsigned long long)_lifecycleActionType;
- (void)_setLifecycleActionType:(unsigned long long)arg1;
- (id)payload;
- (bool)isUISubclass;

@end
