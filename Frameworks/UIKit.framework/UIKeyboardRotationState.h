/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIInputViewAnimationStyle;

@interface UIKeyboardRotationState : NSObject  {
    int _state;
    bool_requiresNewState;
    int _postRotationState;
    UIInputViewAnimationStyle *_animationStyle;
    long long _targetOrientation;
}

@property int state;
@property bool requiresNewState;
@property int postRotationState;
@property(retain) UIInputViewAnimationStyle * animationStyle;
@property long long targetOrientation;

+ (id)stateWithState:(int)arg1 targetOrientation:(long long)arg2;

- (void)setState:(int)arg1;
- (int)state;
- (void)dealloc;
- (int)postRotationState;
- (bool)requiresNewState;
- (void)setTargetOrientation:(long long)arg1;
- (void)setPostRotationState:(int)arg1;
- (void)setRequiresNewState:(bool)arg1;
- (void)setAnimationStyle:(id)arg1;
- (void)setPostRotationState:(int)arg1 animationStyle:(id)arg2;
- (long long)targetOrientation;
- (id)animationStyle;

@end
