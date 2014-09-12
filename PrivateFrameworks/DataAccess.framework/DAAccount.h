/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableDictionary, NSURL, NSMapTable, ACAccount, NSMutableArray, NSString, DATaskManager, NSSet, NSObject<OS_dispatch_queue>, NSArray, NSData, DAStatusReport;

@interface DAAccount : NSObject  {
    ACAccount *_backingAccountInfo;
    bool_hasInitted;
    bool_shouldUseOpportunisticSockets;
    bool_wasUserInitiated;
    NSMutableDictionary *_haveWarnedAboutCertDict;
    DAStatusReport *_statusReport;
    NSMapTable *_consumers;
    struct __CFURLStorageSession { } *_storageSession;
    NSString *_clientToken;
    DATaskManager *_taskManager;
    bool_shouldFailAllTasks;
    bool_isValidating;
    NSArray *_appIdsForPasswordPrompt;
    NSMutableArray *_pendingQueries;
    NSObject<OS_dispatch_queue> *_pendingQueryQueue;
    unsigned long long _lastQueryStartedTime;
    NSMutableDictionary *_dataclassPropertyURLsByDataclass;
}

@property(readonly) NSString * accountID;
@property(setter=setDAAccountVersion:) int daAccountVersion;
@property(copy,readonly) NSString * persistentUUID;
@property(copy) NSString * accountDescription;
@property(copy) NSString * username;
@property(copy) NSString * user;
@property(copy) NSString * host;
@property long long port;
@property(copy) NSString * password;
@property bool useSSL;
@property(readonly) long long enabledDataclassesBitmask;
@property(readonly) bool isChildAccount;
@property(readonly) ACAccount * backingAccountInfo;
@property(readonly) DATaskManager * taskManager;
@property(readonly) NSString * changeTrackingID;
@property(readonly) int keychainAccessibilityType;
@property(readonly) NSString * scheduleIdentifier;
@property(retain) NSData * signingIdentityPersistentReference;
@property(retain) NSData * encryptionIdentityPersistentReference;
@property bool shouldDoInitialAutodiscovery;
@property(readonly) bool shouldAutodiscoverAccountProperties;
@property(copy,readonly) NSString * scheme;
@property(copy) NSURL * principalURL;
@property(copy) NSString * principalPath;
@property(copy,readonly) NSString * clientToken;
@property(copy) NSString * emailAddress;
@property(copy) NSArray * emailAddresses;
@property(readonly) NSArray * appIdsForPasswordPrompt;
@property(readonly) bool shouldFailAllTasks;
@property(copy,readonly) NSData * identityPersist;
@property bool shouldUseOpportunisticSockets;
@property bool wasUserInitiated;
@property bool isValidating;
@property(readonly) NSString * userAgentHeader;
@property(readonly) NSSet * serverComplianceClasses;
@property(readonly) NSString * serverRoot;
@property(retain) DAStatusReport * statusReport;
@property(retain) NSMutableArray * pendingQueries;
@property(retain) NSObject<OS_dispatch_queue> * pendingQueryQueue;
@property unsigned long long lastQueryStartedTime;
@property(retain) NSMutableDictionary * dataclassPropertyURLsByDataclass;

+ (void)reacquireClientRestrictions:(id)arg1;
+ (id)oneshotListOfAccountIDs;
+ (id)_leafAccountTypes;
+ (id)daAccountSubclassWithBackingAccountInfo:(id)arg1;

- (oneway void)setEncryptionIdentityPersistentReference:(id)arg1;
- (id)encryptionIdentityPersistentReference;
- (oneway void)setSigningIdentityPersistentReference:(id)arg1;
- (id)signingIdentityPersistentReference;
- (void)cancelSearchQuery:(id)arg1;
- (void)performSearchQuery:(id)arg1;
- (id)unactionableICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id*)arg3;
- (bool)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
- (int)supportsEmailFlagging;
- (int)supportsMailboxSearch;
- (bool)isHotmailAccount;
- (id)draftsFolder;
- (id)deletedItemsFolder;
- (id)sentItemsFolder;
- (id)inboxFolder;
- (void)removeAccountPropertyForKey:(id)arg1;
- (void)synchronizeBookmarkTreeWithConsumer:(id)arg1 hasRemoteChanges:(bool)arg2;
- (void)getRootFolderWithConsumer:(id)arg1;
- (void)synchronizeNotesFolder:(id)arg1 noteContext:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 changeSet:(id)arg5 notesToDeleteAfterSync:(id)arg6 isInitialUberSync:(bool)arg7 isResyncAfterConnectionFailed:(bool)arg8 moreLocalChangesAvailable:(bool)arg9 consumer:(id)arg10;
- (id)notesFolders;
- (id)defaultNotesFolder;
- (void)setToDosNumberOfPastDaysToSync:(int)arg1;
- (int)toDosNumberOfPastDaysToSync;
- (void)synchronizeToDosFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(id)arg4 isInitialUberSync:(bool)arg5 isResyncAfterConnectionFailed:(bool)arg6 moreLocalChangesAvailable:(bool)arg7 consumer:(id)arg8;
- (id)toDosFolders;
- (id)defaultToDosFolder;
- (bool)searchQueriesRunning;
- (void)cancelAllSearchQueries;
- (bool)_reallySearchQueriesRunning;
- (void)_reallyCancelAllSearchQueries;
- (void)_reallyCancelPendingSearchQuery:(id)arg1;
- (void)_reallyCancelSearchQuery:(id)arg1;
- (void)_dequeueQuery;
- (void)_reallyPerformSearchQuery:(id)arg1;
- (id)getPendingQueryQueue;
- (void)retrieveOofSettingsForConsumer:(id)arg1;
- (void)updateOofSettingsWithParams:(id)arg1 consumer:(id)arg2;
- (void)synchronizeContactsFolder:(id)arg1 previousTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 highestIdContext:(id)arg5 isInitialUberSync:(bool)arg6 isResyncAfterConnectionFailed:(bool)arg7 previousTagIsSuspect:(bool)arg8 moreLocalChangesAvailable:(bool)arg9 consumer:(id)arg10;
- (id)contactsFolders;
- (id)defaultContactsFolder;
- (void)cancelShareResponseInstance:(id)arg1 error:(id)arg2;
- (id)respondToShareRequestForCalendar:(id)arg1 withResponse:(long long)arg2 consumer:(id)arg3;
- (id)performCalendarDirectorySearchForTerms:(id)arg1 recordTypes:(id)arg2 resultLimit:(unsigned long long)arg3 consumer:(id)arg4;
- (id)requestCalendarAvailabilityForStartDate:(id)arg1 endDate:(id)arg2 ignoredEventID:(id)arg3 addresses:(id)arg4 consumer:(id)arg5;
- (void)cancelDownloadingInstance:(id)arg1 error:(id)arg2;
- (id)beginDownloadingAttachmentWithUUID:(id)arg1 consumer:(id)arg2;
- (bool)sendEmailsForCalEvents:(id)arg1 consumer:(id)arg2;
- (void)synchronizeEventsFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(id)arg4 isInitialUberSync:(bool)arg5 isResyncAfterConnectionFailed:(bool)arg6 moreLocalChangesAvailable:(bool)arg7 consumer:(id)arg8;
- (id)eventsFolders;
- (id)defaultEventsFolder;
- (void)handleValidationError:(id)arg1 completion:(id)arg2;
- (id)localizedInvalidPasswordMessage;
- (id)localizedIdenticalAccountFailureMessage;
- (void)_webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 completionBlock:(id)arg3;
- (void)handleTrust:(struct __SecTrust { }*)arg1 forHost:(id)arg2 withCompletionBlock:(id)arg3;
- (id)_serverSuffixesToAlwaysFail;
- (int)_actionForTrust:(struct __SecTrust { }*)arg1 host:(id)arg2 service:(id)arg3;
- (void)setDataclassPropertyURLsByDataclass:(id)arg1;
- (void)setLastQueryStartedTime:(unsigned long long)arg1;
- (unsigned long long)lastQueryStartedTime;
- (void)setPendingQueryQueue:(id)arg1;
- (id)pendingQueryQueue;
- (void)setPendingQueries:(id)arg1;
- (id)pendingQueries;
- (id)appIdsForPasswordPrompt;
- (void)setWasUserInitiated:(bool)arg1;
- (void)setShouldUseOpportunisticSockets:(bool)arg1;
- (bool)isSubscribedCalendarAccount;
- (bool)isGoogleAccount;
- (bool)isCalDAVChildAccount;
- (bool)isCardDAVAccount;
- (bool)isCalDAVAccount;
- (bool)isBookmarkDAVAccount;
- (bool)isLDAPAccount;
- (bool)isActiveSyncAccount;
- (bool)isEqualToAccount:(id)arg1;
- (bool)resetCertWarnings;
- (void)setHaveWarnedAboutCert:(id)arg1 forHost:(id)arg2;
- (bool)haveWarnedAboutCert:(id)arg1 forHost:(id)arg2;
- (bool)isChildAccount;
- (void)setExceptions:(struct __CFData { }*)arg1 forDigest:(id)arg2;
- (struct __CFData { }*)exceptionsForDigest:(id)arg1;
- (id)addUsernameToURL:(id)arg1;
- (void)removeClientCertificateData;
- (id)defaultContainerIdentifierForDADataclass:(long long)arg1;
- (void)stopMonitoringFolders;
- (void)stopMonitoringFoldersWithIDs:(id)arg1;
- (bool)monitorFolderWithID:(id)arg1;
- (void)accountDidChangeFromOldAccountInfo:(id)arg1;
- (bool)shouldAutodiscoverAccountProperties;
- (void)setShouldDoInitialAutodiscovery:(bool)arg1;
- (bool)autodiscoverAccountConfigurationWithConsumer:(id)arg1;
- (void)discoverInitialPropertiesWithConsumer:(id)arg1;
- (bool)saveModifiedPropertiesOnBackingAccount;
- (bool)accountContainsEmailAddress:(id)arg1;
- (id)domainOnly;
- (id)usernameWithoutDomain;
- (long long)portFromDataclassPropertiesForDataclass:(id)arg1;
- (bool)useSSLFromDataclassPropertiesForDataclass:(id)arg1;
- (id)hostFromDataclassPropertiesForDataclass:(id)arg1;
- (void)removeConsumerForTask:(id)arg1;
- (id)consumerForTask:(id)arg1;
- (void)setConsumer:(id)arg1 forTask:(id)arg2;
- (void)stopMonitoringFolderWithID:(id)arg1;
- (void)suspendMonitoringFoldersWithIDs:(id)arg1;
- (void)resumeMonitoringFoldersWithIDs:(id)arg1;
- (id)spinnerIdentifiers;
- (long long)enabledDataclassesBitmask;
- (bool)enabledForAnyDADataclasses:(long long)arg1;
- (id)scheduleIdentifier;
- (id)syncStoreIdentifier;
- (void)resetAccountID;
- (bool)upgradeAccount;
- (void)setDAAccountVersion:(int)arg1;
- (int)daAccountVersion;
- (int)keychainAccessibilityType;
- (void)dropAssertionsAndRenewCredentialsWithHandler:(id)arg1;
- (bool)wasUserInitiated;
- (bool)isValidating;
- (void)setStatusReport:(id)arg1;
- (void)saveAccountProperties;
- (id)exceptionsDict;
- (void)saveAccountPropertiesWithCompletionHandler:(id)arg1;
- (void)setIdentityCertificatePersistentID:(id)arg1 managedByProfile:(bool)arg2;
- (bool)_isIdentityManagedByProfile;
- (bool)monitorFoldersWithIDs:(id)arg1;
- (id)onBehalfOfBundleIdentifier;
- (void)cleanupAccountFiles;
- (void)removeDBSyncData;
- (bool)accountHasSignificantPropertyChangesFromOldAccountInfo:(id)arg1;
- (id)changeTrackingID;
- (bool)shouldRemoveDBSyncDataOnAccountChange;
- (bool)shouldDoInitialAutodiscovery;
- (void)setIsValidating:(bool)arg1;
- (void)setUseSSL:(bool)arg1;
- (id)urlFromDataclassPropertiesForDataclass:(id)arg1;
- (id)dataclassPropertyURLsByDataclass;
- (id)passwordWithExpected:(bool)arg1;
- (void)setAccountBoolProperty:(bool)arg1 forKey:(id)arg2;
- (bool)accountBoolPropertyForKey:(id)arg1;
- (id)stateString;
- (bool)enabledForDADataclass:(long long)arg1;
- (id)backingAccountInfo;
- (void)setAccountIntProperty:(int)arg1 forKey:(id)arg2;
- (int)accountIntPropertyForKey:(id)arg1;
- (id)initWithBackingAccountInfo:(id)arg1;
- (void)ingestBackingAccountInfoProperties;
- (void)_setPersistentUUID:(id)arg1;
- (void)resetStatusReport;
- (void)setEnabled:(bool)arg1 forDADataclass:(long long)arg2;
- (void)checkValidityOnAccountStore:(id)arg1 withConsumer:(id)arg2;
- (void)setEmailAddresses:(id)arg1;
- (id)oauth2Token;
- (void)setPrincipalURL:(id)arg1;
- (void)webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 completionBlock:(id)arg3;
- (id)customConnectionProperties;
- (bool)shouldFailAllTasks;
- (id)identityPersist;
- (bool)shouldUseOpportunisticSockets;
- (struct __CFURLStorageSession { }*)copyStorageSession;
- (bool)handleCertificateError:(id)arg1;
- (bool)handleTrustChallenge:(id)arg1;
- (id)oauthInfoProvider;
- (void)clientTokenRequestedByServer;
- (id)serverComplianceClasses;
- (id)userAgentHeader;
- (id)serverRoot;
- (id)additionalHeaderValues;
- (id)taskManager;
- (id)principalURL;
- (id)emailAddresses;
- (id)statusReport;
- (bool)useSSL;
- (void)setPassword:(id)arg1;
- (void)setUser:(id)arg1;
- (void)tearDown;
- (bool)isDisabled;
- (id)persistentUUID;
- (void)setPrincipalPath:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (id)principalPath;
- (id)emailAddress;
- (void)cancelCalendarDirectorySearchWithID:(id)arg1;
- (void)cancelCalendarAvailabilityRequestWithID:(id)arg1;
- (void)setEnabled:(bool)arg1 forDataclass:(id)arg2;
- (void)setAccountDescription:(id)arg1;
- (id)clientToken;
- (void)reload;
- (bool)isEnabledForDataclass:(id)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (id)accountPropertyForKey:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)dataclassProperties;
- (id)username;
- (id)accountDescription;
- (id)accountID;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setPort:(long long)arg1;
- (id)protocolVersion;
- (void)shutdown;
- (id)password;
- (id)user;
- (long long)port;
- (id)host;
- (id)scheme;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (id)displayName;

@end
