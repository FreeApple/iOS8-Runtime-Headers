/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class NSMutableSet;

@interface SBFPasscodeLockAssertionTracker : NSObject  {
    void *_mkbAssertion;
    NSMutableSet *_assertions;
}


- (bool)hasActiveAssertions;
- (void)removeAssertion:(id)arg1;
- (id)mkbAssertionOptions;
- (void)addAssertion:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;

@end
