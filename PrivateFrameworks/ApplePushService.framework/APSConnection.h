/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@class NSData, NSString, NSArray, CUTWeakReference, NSMutableDictionary, <APSConnectionDelegate>, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<OS_xpc_object>;

@interface APSConnection : NSObject  {
    CUTWeakReference *_delegateReference;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSString *_environmentName;
    NSData *_publicToken;
    unsigned long long _messageSize;
    unsigned long long _largeMessageSize;
    NSString *_connectionPortName;
    unsigned int _connectionPort;
    NSArray *_enabledTopics;
    NSArray *_ignoredTopics;
    NSArray *_opportunisticTopics;
    bool_enableCriticalReliability;
    bool_enableStatusNotifications;
    bool_isConnected;
    bool_usesAppLaunchStats;
    NSMutableDictionary *_idsToOutgoingMessages;
    unsigned long long _nextOutgoingMessageID;
    NSObject<OS_dispatch_queue> *_machQueue;
    NSObject<OS_dispatch_source> *_mach_source;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    bool_everHadDelegate;
    NSMutableArray *_queuedDelegateBlocks;
}

@property(retain,readonly) NSData * publicToken;
@property unsigned long long messageSize;
@property unsigned long long largeMessageSize;
@property <APSConnectionDelegate> * delegate;
@property(readonly) NSObject<OS_dispatch_queue> * delegateQueue;
@property(readonly) NSObject<OS_dispatch_queue> * ivarQueue;
@property bool usesAppLaunchStats;

+ (void)notifySafeToSendFilter;
+ (id)connectionsDebuggingState;
+ (double)keepAliveIntervalForEnvironmentName:(id)arg1;
+ (void)invalidateDeviceIdentity;
+ (void)requestCourierConnection;
+ (struct __SecIdentity { }*)copyIdentity;
+ (bool)isValidEnvironment:(id)arg1;
+ (void)_setTokenState;
+ (void)_blockingXPCCallWithArgumentBlock:(id)arg1 resultHandler:(id)arg2;

- (id)ivarQueue;
- (void)invalidateTokenForTopic:(id)arg1 identifier:(id)arg2;
- (void)requestTokenForTopic:(id)arg1 identifier:(id)arg2;
- (void)sendFakeMessage:(id)arg1;
- (void)cancelOutgoingMessage:(id)arg1;
- (void)sendOutgoingMessage:(id)arg1;
- (bool)hasIdentity;
- (void)_deliverToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3;
- (void)_deliverConnectionStatusFromDealloc:(bool)arg1;
- (void)_deliverPublicToken:(id)arg1;
- (void)_deliverMessage:(id)arg1;
- (void)setEnableCriticalReliability:(bool)arg1;
- (bool)usesAppLaunchStats;
- (void)setUsesAppLaunchStats:(bool)arg1;
- (unsigned long long)largeMessageSize;
- (unsigned long long)messageSize;
- (id)publicToken;
- (void)moveTopic:(id)arg1 fromList:(unsigned long long)arg2 toList:(unsigned long long)arg3;
- (id)opportunisticTopics;
- (id)ignoredTopics;
- (id)enabledTopics;
- (void)setEnabledTopics:(id)arg1;
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2;
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3;
- (void)removeFromRunLoop;
- (void)_disconnectFromDealloc;
- (id)initWithEnvironmentName:(id)arg1 queue:(id)arg2;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2;
- (id)initWithEnvironmentName:(id)arg1;
- (void)_sendOutgoingMessage:(id)arg1 fake:(bool)arg2;
- (id)_listForIdentifierOnIvarQueue:(unsigned long long)arg1;
- (void)_onIvarQueue_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 sendToDaemon:(bool)arg4;
- (void)_handleEvent:(id)arg1 withHandler:(id)arg2;
- (void)_cancelConnectionOnIvarQueue;
- (void)_deliverConnectionStatusChange:(bool)arg1;
- (void)_deliverPublicTokenOnIvarQueue:(id)arg1;
- (void)_deliverDidReconnectOnIvarQueue;
- (void)setLargeMessageSize:(unsigned long long)arg1;
- (void)setMessageSize:(unsigned long long)arg1;
- (void)_setEnableStatusNotifications:(bool)arg1 sendToDaemon:(bool)arg2;
- (void)_setUsesAppLaunchStats:(bool)arg1 sendToDaemon:(bool)arg2;
- (void)_setEnableCriticalReliability:(bool)arg1 sendToDaemon:(bool)arg2;
- (void)_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 sendToDaemon:(bool)arg4;
- (void)_addUsesAppLaunchStatsToXPCMessage:(id)arg1;
- (void)_addEnableStatusNotificationsToXPCMessage:(id)arg1;
- (void)_addEnableCriticalReliabilityToXPCMessage:(id)arg1;
- (void)_deliverOutgoingMessageResultWithID:(unsigned long long)arg1 error:(id)arg2;
- (void)_connectIfNecessary;
- (void)_noteDisconnectedFromDaemonOnIvarQueue;
- (void)_cancelConnection;
- (void)setEnableStatusNotifications:(bool)arg1;
- (void)_shutdownFromDealloc;
- (void)_shutdownOnIvarQueue;
- (void)_disconnectOnIvarQueue;
- (void)_connectIfNecessaryOnIvarQueue;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 queue:(id)arg3;
- (void)_callDelegateOnIvarQueueWithBlock:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1;
- (void)_disconnect;
- (bool)isConnected;
- (void)shutdown;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)delegateQueue;
- (void)dealloc;

@end
