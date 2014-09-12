/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSXPCConnection, <PKPassLibraryDelegate>, PKAsyncCache, PKPassLibraryExportedProxy;

@interface PKPassLibrary : NSObject <PKPassLibraryExportedInterface> {
    NSXPCConnection *_connection;
    PKAsyncCache *_libraryCache;
    PKPassLibraryExportedProxy *_exportedProxy;
    <PKPassLibraryDelegate> *_delegate;
}

@property <PKPassLibraryDelegate> * delegate;

+ (bool)isPaymentPassActivationAvailable;
+ (void)_tearDownPassLibraryConnection:(id)arg1 exportedProxy:(id)arg2;
+ (bool)isPassLibraryAvailable;

- (id)passes;
- (id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (bool)containsPass:(id)arg1;
- (void)noteAccountDeleted;
- (void)noteAccountChanged;
- (bool)migrateData;
- (bool)_isPaymentPassActivationAvailable;
- (void)fetchImageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 withCompletion:(id)arg4;
- (void)fetchContentForUniqueID:(id)arg1 withCompletion:(id)arg2;
- (void)requestUpdateOfObjectWithUniqueID:(id)arg1 completion:(id)arg2;
- (void)ingestPassData:(id)arg1 settings:(id)arg2 completion:(id)arg3;
- (void)activatePaymentPass:(id)arg1 withActivationData:(id)arg2 completion:(id)arg3;
- (void)activatePaymentPass:(id)arg1 withActivationCode:(id)arg2 completion:(id)arg3;
- (id)archiveForObjectWithUniqueID:(id)arg1;
- (bool)replacePassWithPass:(id)arg1;
- (void)getRouteRelevantPassesFromLocation:(id)arg1 handler:(id)arg2;
- (void)_sendSuspended;
- (void)_sendResumed;
- (void)_postLibraryChangeWithUserInfo:(id)arg1;
- (void)removePassWithUniqueID:(id)arg1;
- (void)_getArchivedObjectWithUniqueID:(id)arg1 completion:(id)arg2;
- (void)getContainmentStatusAndSettingsForPass:(id)arg1 withHandler:(id)arg2;
- (void)_getPassesAndCatalog:(bool)arg1 withRetries:(unsigned long long)arg2 withHandler:(id)arg3;
- (void)_applyDataAccessorToObjects:(id)arg1;
- (id)_errorHandlerWithCompletion:(id)arg1;
- (void)_applyDataAccessorToObject:(id)arg1;
- (id)_errorHandlerWithSemaphore:(id)arg1;
- (void)_getPassWithUniqueID:(id)arg1 completion:(id)arg2;
- (id)_passesOfType:(unsigned long long)arg1 withRetries:(unsigned long long)arg2;
- (id)_passesWithRetries:(unsigned long long)arg1;
- (void)_unregisterForApplicationLifeCycleNotifications;
- (void)_tearDownPassLibraryConnection;
- (void)_establishPassLibraryConnection;
- (void)_registerForApplicationLifeCycleNotifications;
- (void)passRemoved:(id)arg1;
- (void)passUpdated:(id)arg1;
- (void)passAdded:(id)arg1;
- (void)catalogChanged:(id)arg1 withNewPasses:(id)arg2;
- (void)removePassesOfType:(unsigned long long)arg1;
- (void)hasInAppPaymentPassesForNetworks:(id)arg1 withHandler:(id)arg2;
- (void)inAppPaymentPassesForNetworks:(id)arg1 withHandler:(id)arg2;
- (void)recomputeRelevantPassesWithSearchMode:(long long)arg1;
- (void)logDelayExitReasons;
- (void)sendPassbookUIServiceLaunched;
- (void)sendUserEditedCatalog:(id)arg1;
- (void)getPassesAndCatalog:(bool)arg1 withHandler:(id)arg2;
- (void)shuffleGroups:(int)arg1;
- (void)introduceDatabaseIntegrityProblem;
- (void)addFakeBulletin;
- (void)nukeDatabaseAndExit;
- (void)noteObjectSharedWithUniqueID:(id)arg1;
- (void)updateSettings:(long long)arg1 forObjectWithUniqueID:(id)arg2;
- (void)addPasses:(id)arg1 withCompletionHandler:(id)arg2;
- (id)passWithUniqueID:(id)arg1;
- (bool)canAddPassOfType:(unsigned long long)arg1;
- (void)removePass:(id)arg1;
- (id)diffForPassBulletinWithRecordID:(id)arg1;
- (bool)hasPassesOfType:(unsigned long long)arg1;
- (id)passesOfType:(unsigned long long)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;

@end
