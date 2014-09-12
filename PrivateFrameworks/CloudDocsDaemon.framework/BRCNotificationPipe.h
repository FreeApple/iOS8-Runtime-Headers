/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BRNotificationQueue, NSString, BRCRelativePath, <BRItemNotificationReceiving>, NSSet, NSNumber, BRCNotificationGatherer, NSObject<OS_dispatch_queue>, BRCXPCClient, BRCNotificationManager, BRCItemID;

@interface BRCNotificationPipe : NSObject <BRItemNotificationSending> {
    BRCNotificationManager *_manager;
    int _watchKind;
    NSString *_watchNamePrefix;
    NSString *_watchForBundleID;
    NSSet *_watchedContainers;
    NSSet *_watchedContainerIDs;
    unsigned long long _watchedContainersFlags;
    <BRItemNotificationReceiving> *_receiver;
    BRNotificationQueue *_notifs;
    NSObject<OS_dispatch_queue> *_queue;
    BRCRelativePath *_root;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _boostReply;

    BRCXPCClient *_client;
    unsigned short _watchItemOptions;
    BRCItemID *_oldWatchedAncestorItemID;
    BRCItemID *_watchedAncestorItemID;
    NSNumber *_watchedAncestorFileObjectID;
    NSString *_watchedAncestorFilenameToItem;
    BRCNotificationGatherer *_gatherer;
    bool_hasUpdatesInFlight;
    bool_volumeIsCaseSensitive;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)watchItemInProcessAtURL:(id)arg1 options:(unsigned short)arg2 reply:(id)arg3;
- (void)watchScopes:(unsigned short)arg1 trustedContainerIDs:(id)arg2 gatheringDone:(id)arg3;
- (void)_stopWatchingItems;
- (void)watchItemAtURL:(id)arg1 container:(id)arg2 lookup:(id)arg3 options:(unsigned short)arg4 reply:(id)arg5;
- (int)_isInterestingUpdate:(id)arg1;
- (void)_addIntraContainerUpdatesFromInterContainerUpdate:(id)arg1 toArray:(id)arg2;
- (id)_initWithRoot:(id)arg1 manager:(id)arg2;
- (void)addDequeueCallback:(id)arg1;
- (void)processUpdates:(id)arg1;
- (id)initWithReceiver:(id)arg1 root:(id)arg2 manager:(id)arg3;
- (id)initWithXPCReceiver:(id)arg1 client:(id)arg2 root:(id)arg3 manager:(id)arg4;
- (void)addNotification:(id)arg1 asDead:(bool)arg2;
- (void)watchScopes:(unsigned short)arg1 gatheringDone:(id)arg2;
- (void)watchScopes:(unsigned short)arg1 containerIDs:(id)arg2 gatheringDone:(id)arg3;
- (void)watchItemsNamesPrefixedBy:(id)arg1 inScopes:(unsigned short)arg2 containerIDs:(id)arg3 gatheringDone:(id)arg4;
- (void)watchItemAtURL:(id)arg1 options:(unsigned short)arg2 reply:(id)arg3;
- (void)boostPriority:(id)arg1;
- (void)_flush;
- (void)close;
- (oneway void)invalidate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;

@end
