/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSHashTable, BRNotificationQueue, NSString, NSMutableDictionary, BRCAccountSession, BRCClientRanksPersistedState, NSObject<OS_dispatch_queue>, BRCXPCClient, PQLConnection;

@interface BRCNotificationManager : NSObject <BRCModule> {
    BRCAccountSession *_session;
    BRCClientRanksPersistedState *_state;
    NSHashTable *_pipes;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    BRNotificationQueue *_notifs;
    NSMutableDictionary *_transferCache;
    BRCXPCClient *_client;

  /* Unexpected information at end of encoded ivar type: Q */
  /* Error parsing encoded ivar type info: AQ */
    /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*_activeAliasQueries;

}

@property(readonly) bool hasActiveAliasWatchers;
@property(readonly) PQLConnection * clientTruthConnection;
@property(readonly) BRCAccountSession * accountSession;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)queueUpdate:(id)arg1;
- (id)notificationGatheredFromItem:(id)arg1;
- (id)pipeWithReceiver:(id)arg1 root:(id)arg2;
- (id)pipeWithXPCReceiver:(id)arg1 client:(id)arg2 root:(id)arg3;
- (void)unregisterContainers:(id)arg1 forFlags:(unsigned long long)arg2;
- (void)registerContainers:(id)arg1 forFlags:(unsigned long long)arg2;
- (bool)hasActiveAliasWatchers;
- (id)initWithAccountSession:(id)arg1;
- (id)clientTruthConnection;
- (void)flushUpdates;
- (id)accountSession;
- (void)resume;
- (void)close;
- (void)suspend;
- (void).cxx_destruct;

@end
