/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class NSString, SCNAction;

@interface SCNActionRunAction : SCNAction  {
    SCNAction *_action;
    NSString *_subSpriteKey;
    NSString *_actionKey;
    bool_waitForKeyedAction;
    bool_runOnSubSprite;
    bool_fired;
}

+ (id)runAction:(id)arg1 afterActionWithKey:(id)arg2;
+ (id)runAction:(id)arg1 onFirstChildWithName:(id)arg2;

- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;
- (id)reversedAction;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (bool)isCustom;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
