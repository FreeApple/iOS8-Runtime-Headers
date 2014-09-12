/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSMutableDictionary;

@interface CKOperationFlowControlManager : NSObject  {
    NSMutableDictionary *_flowControlledOperationClasses;
}

@property(readonly) NSMutableDictionary * flowControlledOperationClasses;


- (void)limitOperation:(id)arg1 retryAfter:(id)arg2;
- (double)secondsUntilUnlimited:(id)arg1;
- (bool)isOperationLimited:(id)arg1;
- (id)flowControlledOperationClasses;
- (void)unlimitAllOperations;
- (id)statusReport;
- (id)init;
- (void).cxx_destruct;

@end
