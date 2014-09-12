/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition  {
    NSMutableArray *_runLoopStateList;
}


- (void)_signalRunLoopWithState:(id)arg1;
- (bool)_waitInMode:(id)arg1 untilDate:(id)arg2;
- (void)waitInMode:(id)arg1;
- (bool)waitUntilDate:(id)arg1 inMode:(id)arg2;
- (id)init;
- (void)broadcast;
- (void)wait;
- (void)dealloc;
- (void)signal;
- (bool)waitUntilDate:(id)arg1;

@end
