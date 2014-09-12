/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSXPCListenerEndpoint, NSString, NSXPCInterface, NSObject<OS_dispatch_queue>, <NSObject>;

@interface NSXPCConnection : NSObject <NSXPCProxyCreating> {
    void *_xconnection;
    id _incomingReplyInfo;
    NSObject<OS_dispatch_queue> *_userQueue;
    unsigned int _state;
    unsigned int _state2;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _interruptionHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _invalidationHandler;

    id _exportInfo;
    id _replyTable;
    id _importInfo;
    <NSObject> *_otherInfo;
    id _reserved1;
    id _lock;
    NSXPCInterface *_remoteObjectInterface;
    NSString *_serviceName;
    NSXPCListenerEndpoint *_endpoint;
    id _eCache;
    id _dCache;
}

@property(copy,readonly) NSString * serviceName;
@property(retain,readonly) NSXPCListenerEndpoint * endpoint;
@property(retain) NSXPCInterface * exportedInterface;
@property(retain) id exportedObject;
@property(retain) NSXPCInterface * remoteObjectInterface;
@property(retain,readonly) id remoteObjectProxy;
@property(copy) id interruptionHandler;
@property(copy) id invalidationHandler;
@property(readonly) int auditSessionIdentifier;
@property(readonly) int processIdentifier;
@property(readonly) unsigned int effectiveUserIdentifier;
@property(readonly) unsigned int effectiveGroupIdentifier;

+ (void)beginTransaction;
+ (id)currentConnection;
+ (void)endTransaction;
+ (id)_currentBoost;
+ (void)dispatchMainIfCurrentXPCConnection:(id)arg1;
+ (id)callServicesDaemonObserverXPCInterface;
+ (id)callServicesDaemonDelegateXPCInterface;
+ (id)callServicesAccountsControllerDelegateXPCInterface;

- (id)_queue;
- (void)_killConnection:(int)arg1;
- (int)processIdentifier;
- (id)endpoint;
- (id)initWithServiceName:(id)arg1;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)remoteObjectProxyWithErrorHandler:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (void)setInterruptionHandler:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setExportedInterface:(id)arg1;
- (void)setRemoteObjectInterface:(id)arg1;
- (void)resume;
- (id)initWithMachServiceName:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)stop;
- (id)initWithEndpoint:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)invalidate;
- (id)userInfo;
- (void)setOptions:(unsigned long long)arg1;
- (id)remoteObjectProxy;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;
- (void)start;
- (id)delegate;
- (void)suspend;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)remoteObjectInterface;
- (void)_decodeProgressMessageWithData:(id)arg1;
- (void)_updateProgress:(unsigned long long)arg1 completed:(long long)arg2 total:(long long)arg3;
- (void)_setTargetUserIdentifier:(unsigned int)arg1;
- (void)_setUUID:(id)arg1;
- (unsigned int)effectiveGroupIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (int)auditSessionIdentifier;
- (void)_removeImportedProxy:(unsigned long long)arg1;
- (void)_addImportedProxy:(unsigned long long)arg1;
- (id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(id)arg2;
- (id)remoteObjectProxyWithUserInfo:(id)arg1 errorHandler:(id)arg2;
- (id)exportedInterface;
- (id)exportedObject;
- (void)_addClassToDecodeCache:(Class)arg1;
- (bool)_decodeCacheContainsClass:(Class)arg1;
- (void)_addClassToEncodeCache:(Class)arg1;
- (bool)_encodeCacheContainsClass:(Class)arg1;
- (void)_setQueue:(id)arg1;
- (id)replacementObjectForEncoder:(id)arg1 object:(id)arg2;
- (id)valueForEntitlement:(id)arg1;
- (id)_exportTable;
- (id)serviceName;
- (id)invalidationHandler;
- (id)interruptionHandler;
- (void)_sendInvocation:(id)arg1 proxyNumber:(unsigned long long)arg2 remoteInterface:(id)arg3 withErrorHandler:(id)arg4 timeout:(double)arg5;
- (void)_sendInvocation:(id)arg1 proxyNumber:(unsigned long long)arg2 remoteInterface:(id)arg3 withErrorHandler:(id)arg4;
- (void)_sendInvocation:(id)arg1 proxyNumber:(unsigned long long)arg2 remoteInterface:(id)arg3;
- (void)addBarrierBlock:(id)arg1;
- (id)_initWithPeerConnection:(id)arg1 name:(id)arg2 options:(unsigned long long)arg3;
- (void)_decodeAndInvokeMessageWithData:(id)arg1;
- (void)_sendDesistForProxyNumber:(unsigned long long)arg1;
- (struct { unsigned int x1[8]; })auditToken;
- (void)_decodeAndInvokeReplyBlockWithData:(id)arg1 replyInfo:(id)arg2;
- (void)_pauseProgress:(unsigned long long)arg1;
- (void)_cancelProgress:(unsigned long long)arg1;
- (void)_sendInvocation:(id)arg1 proxyNumber:(unsigned long long)arg2 remoteInterface:(id)arg3 withErrorHandler:(id)arg4 timeout:(double)arg5 userInfo:(id)arg6;
- (id)initWithServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id)_errorDescription;
- (id)_xpcConnection;
- (id)_clientBundleID;
- (bool)sl_clientHasEntitlement:(id)arg1;
- (id)sl_localizedClientName;

@end
