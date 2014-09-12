/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSLock, NSString, NSProtocolChecker, IMRemoteObject<IMAVDaemonProtocol>, NSMutableArray, IMLocalObject, NSObject<OS_dispatch_queue>, IMAVDaemonListener;

@interface IMAVDaemonController : NSObject  {
    IMRemoteObject<IMAVDaemonProtocol> *_remoteObject;
    IMLocalObject *_localObject;
    IMAVDaemonListener *_daemonListener;
    NSProtocolChecker *_protocol;
    NSString *_listenerID;
    NSMutableArray *_listeners;
    NSLock *_connectionLock;
    NSObject<OS_dispatch_queue> *_listenerLockQueue;
    NSObject<OS_dispatch_queue> *_remoteDaemonLockQueue;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    NSObject<OS_dispatch_queue> *_localObjectLockQueue;
    struct __CFRunLoopSource { } *_runLoopSource;
    bool_hasCheckedForDaemon;
    bool_acquiringDaemonConnection;
}

@property(readonly) IMAVDaemonListener * listener;
@property(readonly) NSObject<OS_dispatch_queue> * _remoteMessageQueue;

+ (id)sharedInstance;

- (void)_remoteObjectDiedNotification:(id)arg1;
- (void)_localObjectDiedNotification:(id)arg1;
- (bool)_makeConnectionWithCompletionBlock:(id)arg1;
- (void)_cleanUpConnection;
- (void)localObjectDiedNotification:(id)arg1;
- (void)_disconnectFromDaemon;
- (bool)addListenerID:(id)arg1;
- (id)_remoteMessageQueue;
- (void)_noteSetupComplete;
- (bool)removeListenerID:(id)arg1;
- (void)_listenerSetUpdated;
- (bool)hasListenerForID:(id)arg1;
- (void)_remoteObjectCleanup;
- (void)_localObjectCleanup;
- (bool)__isRemoteObjectValidOnQueue:(id)arg1;
- (void)remoteObjectDiedNotification:(id)arg1;
- (bool)__isLocalObjectValidOnQueue:(id)arg1;
- (bool)remoteObjectExists;
- (bool)localObjectExists;
- (bool)isConnecting;
- (void)_connectToDaemon;
- (bool)isConnected;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)listener;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;

@end
