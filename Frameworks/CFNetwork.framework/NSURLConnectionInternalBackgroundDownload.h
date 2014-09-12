/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSCountedSet, NSString, SSDownloadHandler, NSAsyncSSDownloadManager, NSTimer, NSMutableArray;

@interface NSURLConnectionInternalBackgroundDownload : NSURLConnectionInternal <NSURLConnectionRequired, SSDownloadManagerObserver, SSDownloadHandlerDelegate> {
    struct __CFRunLoopSource { } *_source;
    NSMutableArray *_pendingOps;
    NSCountedSet *_runloops;
    SSDownloadHandler *_handler;
    NSAsyncSSDownloadManager *_manager;
    long long _downloadIdent;
    long long _ctLast;
    bool_terminated;
    NSTimer *_deferredStartTimer;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (void)_enableLogging;
+ (id)sharedDownloadManagerForMediaKind:(id)arg1 persistenceIdentifier:(id)arg2;

- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (long long)_getDownloadIdent;
- (void)_sourcePerform;
- (void)invokeForDelegate:(id)arg1;
- (void)downloadHandler:(id)arg1 handleAuthenticationSession:(id)arg2;
- (bool)downloadHandler:(id)arg1 pauseSession:(id)arg2;
- (void)downloadHandler:(id)arg1 cancelSession:(id)arg2;
- (void)downloadHandlerDidDisconnect:(id)arg1;
- (void)_sendTerminalDidFinishToDelegate:(id)arg1;
- (void)_updateClientWithCurrentWrites:(id)arg1;
- (void)_createNewDownload;
- (void)_managerFailedToStartInTime;
- (void)setHandlerForDownload:(id)arg1 completionBlock:(id)arg2;
- (void)_sendTerminalErrorToDelegate:(id)arg1;
- (void)_invalidate;
- (void)_postTerminalInvocation:(id)arg1;
- (void)_preTerminalInvocation:(id)arg1;
- (void)_invokeInvocation:(id)arg1 withConnection:(id)arg2;
- (void)_updateDownloadState:(id)arg1;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)start;
- (id)initWithInfo:(const struct InternalInit { id x1; id x2; id x3; id x4; boolx5; long long x6; }*)arg1;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)cancel;
- (void)dealloc;
- (id)description;

@end
