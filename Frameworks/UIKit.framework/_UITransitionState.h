/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDate;

@interface _UITransitionState : NSObject  {
    long long _transitionDirection;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completion;

    NSDate *_beginDate;
}

@property(readonly) long long transitionDirection;
@property(readonly) long long effectiveTransitionDirection;
@property(readonly) NSDate * beginDate;
@property(getter=isActive,readonly) bool active;


- (bool)isActive;
- (void)dealloc;
- (id)description;
- (void)markBeginDate;
- (id)beginDate;
- (long long)effectiveTransitionDirection;
- (bool)isCompatibleWithTransitionInDirection:(long long)arg1;
- (void)cleanupWithFinishedState:(bool)arg1 completedState:(bool)arg2;
- (long long)transitionDirection;
- (id)initWithTransitionDirection:(long long)arg1 completion:(id)arg2;

@end
