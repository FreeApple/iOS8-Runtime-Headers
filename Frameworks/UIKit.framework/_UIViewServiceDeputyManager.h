/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, _UIAsyncInvocation, NSMutableSet, NSObject<OS_dispatch_queue>, NSLock, NSString;

@interface _UIViewServiceDeputyManager : NSObject <_UIViewServiceViewControllerOperatorDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    _UIAsyncInvocation *_invalidationInvocation;
    NSMutableDictionary *_connectionHandlers;
    NSLock *_connectionHandlersLock;
    NSMutableSet *_deputies;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _terminationHandler;

    int __automatic_invalidation_retainCount;
    bool__automatic_invalidation_invalidated;
    id _delegate;
}

@property id delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)exportedInterfaceSupportingDeputyInterfaces:(id)arg1;

- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;
- (void)invalidate;
- (id)delegate;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2;
- (void)registerDeputyClass:(Class)arg1 withConnectionHandler:(id)arg2;
- (void)unregisterDeputyClass:(Class)arg1;
- (void)__requestConnectionToDeputyOfClass:(Class)arg1 fromHostObject:(/* Warning: Unrecognized filer type: 'R' using 'void*' */ void*)arg2 replyHandler:(id)arg3;
     /* Encoded args for previous method: v40@0:8#16R@24@?32 */

- (void)checkDeputyForRotation:(id)arg1;
- (void)__prototype_requestConnectionToDeputyFromHostObject:(id)arg1 replyHandler:(id)arg2;
- (Class)_deputyClassForConnectionSelector:(SEL)arg1;
- (void)_invalidateUnconditionallyThen:(id)arg1;
- (int)__automatic_invalidation_logic;

@end
