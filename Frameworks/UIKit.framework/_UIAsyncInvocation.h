/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class _UIAsyncInvocationObserver;

@interface _UIAsyncInvocation : NSObject  {
    _UIAsyncInvocationObserver *_observer;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _invocationBlock;

    bool_invocationBlockHasBeenCalled;
}

+ (id)emptyInvocation;
+ (id)invocationWithBlock:(id)arg1;

- (id)invoke;
- (void)dealloc;

@end
