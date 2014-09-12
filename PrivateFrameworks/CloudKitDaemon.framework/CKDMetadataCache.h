/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSObject<OS_dispatch_queue>;

@interface CKDMetadataCache : CKSQLite  {
    NSObject<OS_dispatch_queue> *_cacheQueue;
}

@property(retain) NSObject<OS_dispatch_queue> * cacheQueue;

+ (id)sharedCache;

- (void)setCacheQueue:(id)arg1;
- (void)removeKnownApplicationBundleID:(id)arg1;
- (id)knownApplicationBundleIDs;
- (id)dateOfLastTokenUpdate;
- (id)inlock_containerInfoForContainerID:(id)arg1;
- (id)inlock_applicationMetadataForApplicationBundleID:(id)arg1;
- (void)inlock_setDateOfLastTokenUpdate:(id)arg1;
- (id)cacheQueue;
- (void)expungeWithCurrentAccountIdentifier:(id)arg1 forceRemove:(bool)arg2;
- (id)containerInfoForContainerID:(id)arg1;
- (id)globalConfiguration;
- (void)setContainerInfo:(id)arg1 forContainerID:(id)arg2;
- (void)setAppContainerIntersectionMetadata:(id)arg1 forAppContainerTuple:(id)arg2;
- (id)pushTokenForAppContainerTuple:(id)arg1;
- (void)setDateOfLastTokenUpdate:(id)arg1;
- (void)setPushToken:(id)arg1 forAppContainerTuple:(id)arg2;
- (id)appContainerIntersectionMetadataForAppContainerTuple:(id)arg1;
- (void)setApplicationMetadata:(id)arg1 forApplicationBundleID:(id)arg2;
- (id)applicationMetadataForApplicationBundleID:(id)arg1;
- (id)knownAppContainerTuples;
- (void)setGlobalConfiguration:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end
