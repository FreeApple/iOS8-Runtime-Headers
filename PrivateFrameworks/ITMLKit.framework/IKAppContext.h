/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class NSError, NSString, <IKApplication>, IKJSFoundation, <IKAppContextDelegate>, JSContext, NSMutableArray;

@interface IKAppContext : NSObject <ISURLOperationDelegate> {
    struct __CFRunLoop { } *_jsThreadRunLoop;
    struct __CFRunLoopSource { } *_jsThreadRunLoopSource;
    bool_isValid;
    bool_remoteInspectionEnabled;
    bool_canAccessPendingQueue;
    <IKApplication> *_app;
    unsigned long long _mode;
    <IKAppContextDelegate> *_delegate;
    JSContext *_jsContext;
    NSMutableArray *_postEvaluationBlocks;
    IKJSFoundation *_jsFoundation;
    NSString *_responseScript;
    NSError *_responseError;
    id _reloadData;
    NSMutableArray *_pendingQueue;
}

@property(readonly) <IKApplication> * app;
@property(readonly) unsigned long long mode;
@property(readonly) <IKAppContextDelegate> * delegate;
@property bool isValid;
@property bool remoteInspectionEnabled;
@property(retain) JSContext * jsContext;
@property(retain) NSMutableArray * postEvaluationBlocks;
@property(retain) IKJSFoundation * jsFoundation;
@property bool canAccessPendingQueue;
@property(copy) NSString * responseScript;
@property(retain) NSError * responseError;
@property(retain) id reloadData;
@property(retain) NSMutableArray * pendingQueue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)currentAppContext;

- (void)_sourceCanceledOnRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)_sourceScheduledOnRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)setPostEvaluationBlocks:(id)arg1;
- (void)_stopAndReload:(bool)arg1;
- (void)setJsContext:(id)arg1;
- (bool)remoteInspectionEnabled;
- (id)responseScript;
- (id)responseError;
- (void)_startWithScript:(id)arg1;
- (void)setResponseScript:(id)arg1;
- (void)setResponseError:(id)arg1;
- (void)setReloadData:(id)arg1;
- (void)_dispatchError:(id)arg1;
- (id)_errorWithMessage:(id)arg1;
- (id)postEvaluationBlocks;
- (void)_evaluate:(id)arg1;
- (bool)canAccessPendingQueue;
- (void)_addStopRecordToPendingQueueWithReload:(bool)arg1;
- (void)_jsThreadMain;
- (void)_startWithURL:(id)arg1 urlTrusted:(bool)arg2;
- (void)setCanAccessPendingQueue:(bool)arg1;
- (void)setPendingQueue:(id)arg1;
- (id)pendingQueue;
- (bool)validateDOMDocument:(id)arg1 error:(id*)arg2;
- (void)evaluate:(id)arg1 completionBlock:(id)arg2;
- (void)addPostEvaluateBlock:(id)arg1;
- (void)evaluateFoundationJS;
- (void)setException:(id)arg1 withErrorMessage:(id)arg2;
- (void)setJsFoundation:(id)arg1;
- (id)jsFoundation;
- (void)_evaluateFoundationWithDeviceConfig:(id)arg1;
- (void)evaluateDelegateBlockSync:(id)arg1;
- (id)app;
- (id)jsContext;
- (void)exitAppWithOptions:(id)arg1;
- (void)launchAppWithOptions:(id)arg1;
- (void)handleReloadWithUrgencyType:(unsigned long long)arg1 data:(id)arg2;
- (void)setRemoteInspectionEnabled:(bool)arg1;
- (id)initWithApplication:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3;
- (void)suspendWithOptions:(id)arg1;
- (void)resumeWithOptions:(id)arg1;
- (void)setIsValid:(bool)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)reload;
- (void)stop;
- (bool)isValid;
- (void)_sourcePerform;
- (void)start;
- (id)delegate;
- (void).cxx_destruct;
- (unsigned long long)mode;
- (id)reloadData;

@end
