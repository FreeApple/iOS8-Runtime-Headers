/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSDate, NSString, NSRecursiveLock, IMHandle, IMServiceImpl, NSMutableDictionary, NSArray, NSDictionary, NSData, NSAttributedString, IMPeople;

@interface IMAccount : NSObject <IMSystemMonitorListener> {
    IMServiceImpl *_service;
    IMPeople *_buddyList;
    NSRecursiveLock *_lock;
    NSMutableDictionary *_imHandles;
    NSMutableDictionary *_inlineTransfers;
    IMHandle *_loginIMHandle;
    NSArray *_cachedAllowList;
    NSArray *_cachedBlockList;
    NSString *_loginID;
    NSString *_displayName;
    NSString *_uniqueID;
    long long _accountType;
    NSDictionary *_data;
    NSMutableDictionary *_dataChanges;
    NSMutableDictionary *_localCache;
    NSDictionary *_profile;
    NSMutableDictionary *_profileChanges;
    NSString *_countryCode;
    long long _profileStatus;
    NSDictionary *_accountPreferences;
    NSMutableDictionary *_accountPreferencesChanges;
    NSDictionary *_accountPersistentProperties;
    NSMutableDictionary *_accountPersistentPropertiesChanges;
    NSArray *_groups;
    NSMutableDictionary *_sortOrders;
    NSDictionary *_members;
    NSMutableDictionary *_coalescedChanges;
    NSArray *_targetGroupState;
    NSArray *_lastReceivedGroupState;
    NSDictionary *_subtypeInfo;
    NSArray *_vettedAliases;
    unsigned long long _myStatus;
    NSMutableDictionary *_currentAccountStatus;
    NSString *_myStatusMessage;
    NSDictionary *_myNowPlaying;
    NSDate *_myIdleSince;
    NSData *_myPictureData;
    NSData *_accountImageData;
    unsigned long long _capabilities;
    unsigned long long _defaultHandleCapabilities;
    bool_hasCheckedDefaultHandleCapabilities;
    NSAttributedString *_myProfile;
    long long _registrationStatus;
    long long _registrationFailureReason;
    NSDictionary *_registrationAlertInfo;
    unsigned long long _loginStatus;
    bool_isActive;
    bool_hasPostedOfflineNotification;
    bool_justLoggedIn;
    bool_useMeCardName;
    unsigned int _cachedBlockingMode;
    bool_blockIdleStatus;
    bool_syncedWithRemoteBuddyList;
    bool_hasReceivedSync;
    int _numHolding;
    int _coalesceCount;
    bool_needToCheckForWatchedIMHandles;
    bool_iconChecked;
    bool_hasBeenRemoved;
    id _smallImage;
    id _accountImage;
    bool_asleep;
}

@property(readonly) IMServiceImpl * service;
@property(readonly) NSDictionary * dictionary;
@property(readonly) NSString * uniqueID;
@property(readonly) NSString * name;
@property(readonly) NSString * shortName;
@property(readonly) NSString * serviceName;
@property(readonly) NSString * internalName;
@property(readonly) NSArray * emailDomains;
@property(readonly) NSData * accountImageData;
@property(readonly) NSString * addressBookProperty;
@property(readonly) NSArray * addressBookProperties;
@property(readonly) NSDictionary * accountSubtypeInfo;
@property(readonly) bool supportsRegistration;
@property(readonly) long long registrationStatus;
@property(readonly) long long registrationFailureReason;
@property(retain,readonly) NSDictionary * registrationFailureAlertInfo;
@property(readonly) bool isRegistered;
@property(readonly) bool isOperational;
@property(readonly) bool supportsAuthorization;
@property(readonly) NSString * authorizationID;
@property(readonly) NSString * authorizationToken;
@property(retain,readonly) NSDictionary * profileInfo;
@property(retain,readonly) NSString * countryCode;
@property(readonly) NSArray * aliases;
@property(readonly) NSArray * vettedAliases;
@property(copy) NSString * displayName;
@property(readonly) long long accountType;
@property(readonly) bool hasCustomDescription;
@property(retain) NSString * accountDescription;
@property(readonly) unsigned long long loginStatus;
@property(readonly) NSString * loginStatusMessage;
@property(readonly) unsigned long long myStatus;
@property(readonly) NSString * myStatusMessage;
@property(readonly) NSDictionary * myStatusDictionary;
@property(readonly) NSDate * myIdleSince;
@property(readonly) NSData * myPictureData;
@property(readonly) NSString * myNowPlayingString;
@property(readonly) NSAttributedString * myProfile;
@property(readonly) bool isManaged;
@property bool autoLogin;
@property(retain) NSString * login;
@property(readonly) NSString * server;
@property(readonly) long long port;
@property(readonly) bool useSSL;
@property bool goIdle;
@property bool allowsVCRelay;
@property(readonly) bool allowsSMSRelay;
@property(readonly) bool allowsMMSRelay;
@property(readonly) bool isConnecting;
@property(readonly) bool isConnected;
@property(readonly) bool justLoggedIn;
@property(getter=isInvisible) bool invisible;
@property(readonly) bool isActive;
@property(readonly) bool canActivate;
@property(readonly) unsigned long long capabilities;
@property(readonly) bool handlesChatInvites;
@property(readonly) bool validLogin;
@property(readonly) bool validPort;
@property(readonly) bool validServer;
@property(readonly) long long invalidSettings;
@property(readonly) NSString * password;
@property(readonly) NSString * temporaryPassword;
@property(readonly) NSArray * groupList;
@property(readonly) IMPeople * buddyList;
@property(readonly) bool makingChanges;
@property(retain) NSArray * blockList;
@property(retain) NSArray * allowList;
@property unsigned int blockingMode;
@property bool blockIdleStatus;
@property bool blockOtherAddresses;
@property(readonly) NSDictionary * accountPreferences;
@property(readonly) NSArray * arrayOfAllIMHandles;
@property(readonly) id loginIMHandle;
@property(readonly) bool isAsleep;
@property(readonly) bool _isUsableForSending;
@property(readonly) bool isAwaitingTargetGroupState;
@property(readonly) bool hasTargetGroupStateBeenMet;
@property(readonly) bool hasSyncedWithRemoteBuddies;
@property(readonly) NSDictionary * _persistentProperties;

+ (id)allBuddyListIMHandles;
+ (id)nameOfLoginStatus:(unsigned long long)arg1;
+ (id)_groupSummaryFromGroupList:(id)arg1;
+ (void)removeTemporaryPasswordForAccount:(id)arg1 forServiceName:(id)arg2;
+ (void)setTemporaryPassword:(id)arg1 forAccount:(id)arg2 forServiceName:(id)arg3;
+ (id)temporaryPasswordForAccount:(id)arg1 forServiceName:(id)arg2;
+ (void)removePasswordForAccount:(id)arg1 forServiceName:(id)arg2;
+ (void)setPassword:(id)arg1 forAccount:(id)arg2 forServiceName:(id)arg3;
+ (id)passwordForAccount:(id)arg1 forServiceName:(id)arg2;
+ (id)arrayOfAllIMHandles;

- (bool)unregisterAccount;
- (bool)registerAccount;
- (bool)unvalidateAliases:(id)arg1;
- (bool)validateAliases:(id)arg1;
- (bool)removeAliases:(id)arg1;
- (bool)addAliases:(id)arg1;
- (bool)validateProfile;
- (bool)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (bool)authenticateAccount;
- (id)vettedAliases;
- (id)aliases;
- (id)profileInfo;
- (long long)registrationStatus;
- (id)initWithService:(id)arg1;
- (bool)justLoggedIn;
- (id)loginIMHandle;
- (id)accountSubtypeInfo;
- (id)myIdleSince;
- (id)myPictureData;
- (id)myStatusMessage;
- (id)myProfile;
- (id)myStatusDictionary;
- (void)_handleIncomingCommand:(id)arg1 withProperties:(id)arg2 fromBuddyInfo:(id)arg3;
- (void)_handleDeliveredCommand:(id)arg1 withProperties:(id)arg2 fromBuddyInfo:(id)arg3;
- (void)setInteger:(int)arg1 forPreferenceKey:(id)arg2;
- (int)integerForPreferenceKey:(id)arg1;
- (void)setBool:(bool)arg1 forPreferenceKey:(id)arg2;
- (bool)boolForPreferenceKey:(id)arg1;
- (void)setString:(id)arg1 forPreferenceKey:(id)arg2;
- (id)stringForPreferenceKey:(id)arg1;
- (id)dictionaryDataForPreferenceKey:(id)arg1;
- (void)setDictionaryData:(id)arg1 forPreferenceKey:(id)arg2;
- (void)removeObjectForPreferenceKey:(id)arg1;
- (void)_removePersistentPropertyForKey:(id)arg1;
- (void)_setPersistentPropertyObject:(id)arg1 forKey:(id)arg2;
- (id)_persistentPropertyForKey:(id)arg1;
- (id)_persistentProperties;
- (bool)isAsleep;
- (void)_setInteger:(int)arg1 forKey:(id)arg2;
- (id)dictionaryDataForKey:(id)arg1;
- (void)_setDictionaryData:(id)arg1 forKey:(id)arg2;
- (void)setDictionaryData:(id)arg1 forKey:(id)arg2;
- (long long)validationErrorReasonForAlias:(id)arg1 type:(long long)arg2;
- (long long)validationStatusForAlias:(id)arg1 type:(long long)arg2;
- (bool)validateAlias:(id)arg1 type:(long long)arg2;
- (bool)unvalidateAlias:(id)arg1;
- (bool)removeAlias:(id)arg1 type:(long long)arg2;
- (bool)addAlias:(id)arg1 type:(long long)arg2;
- (id)aliasesForType:(long long)arg1;
- (bool)hasAlias:(id)arg1 type:(long long)arg2;
- (bool)setProfileString:(id)arg1 forKey:(id)arg2;
- (bool)removeProfileValueForKey:(id)arg1;
- (bool)requestNewAuthorizationCredentials;
- (struct _FZChatRoomValidity { int x1; unsigned short x2; })validityOfChatRoomName:(id)arg1;
- (id)chatIDForRoomName:(id)arg1;
- (void)handleSubscriptionRequestFrom:(id)arg1 withMessage:(id)arg2;
- (void)unregisterIMHandle:(id)arg1;
- (void)registerIMHandle:(id)arg1;
- (void)stopWatchingIMHandle:(id)arg1;
- (bool)removeIMHandle:(id)arg1 fromIMPerson:(id)arg2;
- (bool)addIMHandle:(id)arg1 toIMPerson:(id)arg2;
- (unsigned long long)sortOrderForIMHandle:(id)arg1 inGroup:(id)arg2;
- (id)personSibsForIMHandle:(id)arg1;
- (id)personForIMHandle:(id)arg1 identifier:(int*)arg2;
- (id)existingIMHandleWithID:(id)arg1 countryCode:(id)arg2;
- (id)imHandleWithID:(id)arg1 countryCode:(id)arg2;
- (id)existingIMHandleWithInfo:(id)arg1 alreadyCanonical:(bool)arg2;
- (id)imHandleWithInfo:(id)arg1 alreadyCanonical:(bool)arg2;
- (Class)imHandleClass;
- (void)recalculateSubtypeInfo;
- (void)_clearImageCache;
- (id)recalculatedSubtypeInfo;
- (bool)isConnecting;
- (long long)registrationFailureReason;
- (id)registrationFailureAlertInfo;
- (void)accountDidDeactivate;
- (void)accountDidBecomeActive;
- (void)accountWillBeRemoved;
- (void)setBuddyProperties:(id)arg1 buddyPictures:(id)arg2;
- (void)buddyPictureChanged:(id)arg1 imageData:(id)arg2 imageHash:(id)arg3;
- (void)resumeBuddyUpdates;
- (void)holdBuddyUpdates;
- (id)memberGroups:(id)arg1;
- (id)groupMembers:(id)arg1;
- (void)reorderGroup:(id)arg1 order:(id)arg2;
- (void)renameGroup:(id)arg1 to:(id)arg2;
- (void)addBuddyToBuddyList:(id)arg1;
- (bool)removeIMHandle:(id)arg1 fromGroups:(id)arg2;
- (bool)addIMHandle:(id)arg1 toGroups:(id)arg2 atLocation:(long long)arg3;
- (bool)removePeople:(id)arg1 fromGroups:(id)arg2;
- (void)setBlockOtherAddresses:(bool)arg1;
- (bool)blockOtherAddresses;
- (void)blockMessages:(bool)arg1 fromID:(id)arg2;
- (void)setValue:(id)arg1 ofExtraProperty:(id)arg2 ofIMHandle:(id)arg3;
- (void)requestProperty:(id)arg1 ofIMHandle:(id)arg2;
- (bool)isManaged;
- (bool)canActivate;
- (bool)allowsMMSRelay;
- (bool)allowsSMSRelay;
- (void)setAllowsVCRelay:(bool)arg1;
- (bool)allowsVCRelay;
- (void)setGoIdle:(bool)arg1;
- (bool)goIdle;
- (bool)autoLogin;
- (bool)hasCustomDescription;
- (void)setInvisible:(bool)arg1;
- (void)setTemporaryPassword:(id)arg1;
- (id)temporaryPassword;
- (void)updateCapabilities:(unsigned long long)arg1;
- (long long)compareServices:(id)arg1;
- (long long)compareStatus:(id)arg1;
- (long long)compareLoginStatus:(id)arg1;
- (void)resetToDefaults;
- (id)accountImageData;
- (id)myNowPlayingString;
- (void)setCurrentAccountStatus:(id)arg1;
- (void)setLogin:(id)arg1;
- (void)loginStatusChanged:(unsigned int)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4;
- (void)logoutAccount;
- (void)loginAccount;
- (void)autoLoginAccount;
- (id)objectForPreferenceKey:(id)arg1;
- (void)setObject:(id)arg1 forPreferenceKey:(id)arg2;
- (long long)validationStatusForAlias:(id)arg1;
- (id)_aliasInfoForAlias:(id)arg1;
- (bool)validateAlias:(id)arg1;
- (bool)removeAlias:(id)arg1;
- (bool)addAlias:(id)arg1;
- (void)_setLocalCachedObject:(id)arg1 forKey:(id)arg2;
- (long long)typeForAlias:(id)arg1;
- (bool)hasAlias:(id)arg1;
- (long long)profileValidationErrorReason;
- (id)profileStringForKey:(id)arg1;
- (bool)setProfileValue:(id)arg1 forKey:(id)arg2;
- (id)profileValueForKey:(id)arg1;
- (void)_removeObjectForKey:(id)arg1;
- (id)defaultChatSuffix;
- (void)disconnectAllIMHandles;
- (void)setBuddyListAuthorization:(bool)arg1 forIMHandle:(id)arg2;
- (id)imHandleWithInfo:(id)arg1;
- (void)_watchBuddiesIfNecessary;
- (void)startWatchingIMHandle:(id)arg1;
- (bool)emailAddressIsID:(id)arg1;
- (id)imHandlesForIMPerson:(id)arg1;
- (id)personForIMHandle:(id)arg1;
- (unsigned long long)defaultHandleCapabilities;
- (id)_imHandleWithID:(id)arg1 alreadyCanonical:(bool)arg2 knownIDStatus:(int)arg3 originalID:(id)arg4 countryCode:(id)arg5;
- (id)existingIMHandleWithID:(id)arg1 alreadyCanonical:(bool)arg2;
- (void)watchBuddiesIfNecessary;
- (void)imHandle:(id)arg1 buddyStatusChanged:(bool)arg2;
- (id)buddyList;
- (bool)isAwaitingTargetGroupState;
- (void)nowLoggedOut;
- (void)nowLoggedIn;
- (void)forgetAllWatches;
- (void)_notJustLoggedIn;
- (long long)profileValidationStatus;
- (void)setIMAccountLoginStatus:(unsigned long long)arg1 errorMessage:(id)arg2;
- (void)hookupToDaemon;
- (void)buddyPropertiesChanged:(id)arg1;
- (id)existingIMHandleWithInfo:(id)arg1;
- (void)_resumeBuddyUpdatesNow;
- (void)_applyChangesToTemporaryCache:(id)arg1;
- (void)endChanges;
- (void)reorderGroups:(id)arg1;
- (id)propertiesForGroup:(id)arg1;
- (void)beginChanges;
- (bool)addPeople:(id)arg1 toGroups:(id)arg2 atLocation:(long long)arg3;
- (void)requestBuddyListAuthorizationFromIMHandle:(id)arg1;
- (void)_ensureGroupsExists:(id)arg1;
- (void)changeBuddyList:(id)arg1 add:(bool)arg2 groups:(id)arg3 atLocation:(int)arg4;
- (id)groupList;
- (bool)hasCapability:(unsigned long long)arg1;
- (void)requestGroups;
- (bool)makingChanges;
- (void)setTargetGroupsState:(id)arg1;
- (void)updateWithTargetGroups;
- (void)setWaitForTargetState;
- (void)groupsChanged:(id)arg1 error:(id)arg2;
- (void)clearTargetState;
- (bool)hasTargetGroupStateBeenMet;
- (void)targetGroupStateTimeout;
- (void)writeSettings;
- (void)setCachedBlockIdleStatus:(bool)arg1;
- (void)setCachedBlockingMode:(unsigned int)arg1;
- (void)setCachedAllowList:(id)arg1;
- (void)setCachedBlockList:(id)arg1;
- (void)setAllowList:(id)arg1;
- (void)setBlockingMode:(unsigned int)arg1;
- (void)setBlockList:(id)arg1;
- (id)allowList;
- (id)blockList;
- (unsigned int)blockingMode;
- (bool)_updateDisplayName:(id)arg1;
- (long long)validationErrorReasonForAlias:(id)arg1;
- (void)_updateRegistrationStatus:(int)arg1 error:(int)arg2 info:(id)arg3;
- (void)_updateProfileInfo:(id)arg1;
- (id)_aliases;
- (id)_statuses;
- (id)authorizationID;
- (bool)validPort;
- (bool)validServer;
- (bool)validLogin;
- (long long)invalidSettings;
- (void)setBlockIdleStatus:(bool)arg1;
- (bool)blockIdleStatus;
- (id)_serverWithSSL:(bool)arg1;
- (id)loginStatusMessage;
- (void)_setBool:(bool)arg1 forKey:(id)arg2;
- (bool)isInvisible;
- (void)removeTemporaryPassword;
- (void)removePassword;
- (long long)compareIDs:(id)arg1;
- (long long)compareAccountNames:(id)arg1;
- (void)setAutoLogin:(bool)arg1;
- (void)_loadFromDictionary:(id)arg1 force:(bool)arg2;
- (id)accountPreferences;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (id)canonicalFormOfID:(id)arg1 countryCode:(id)arg2;
- (void)_updateMyStatus:(unsigned long long)arg1 message:(id)arg2;
- (void)_updateLogin:(id)arg1;
- (void)_setString:(id)arg1 forKey:(id)arg2;
- (void)_refreshLoginIMHandle;
- (void)setIMAccountLoginStatus:(unsigned long long)arg1 errorMessage:(id)arg2 reason:(int)arg3;
- (void)_loginWithAutoLogin:(bool)arg1;
- (void)_registrationStatusChanged:(id)arg1;
- (void)_serviceDidDisconnect:(id)arg1;
- (void)_serviceDidReconnect:(id)arg1;
- (void)_serviceDidConnect:(id)arg1;
- (void)syncWithRemoteBuddies;
- (void)clearServiceCaches;
- (id)initWithUniqueID:(id)arg1 service:(id)arg2;
- (id)shortName;
- (id)emailDomains;
- (id)addressBookProperties;
- (bool)supportsRegistration;
- (bool)handlesChatInvites;
- (bool)supportsAuthorization;
- (id)addressBookProperty;
- (long long)compareNames:(id)arg1;
- (bool)equalID:(id)arg1 andID:(id)arg2;
- (id)arrayOfAllIMHandles;
- (id)existingIMHandleWithID:(id)arg1;
- (unsigned long long)loginStatus;
- (void)_markHasSyncedWithRemoteBuddies;
- (void)setIMAccountLoginStatus:(unsigned long long)arg1;
- (id)internalName;
- (void)_syncWithRemoteBuddies;
- (bool)hasSyncedWithRemoteBuddies;
- (id)canonicalFormOfID:(id)arg1;
- (id)login;
- (unsigned long long)myStatus;
- (id)imHandleWithID:(id)arg1 alreadyCanonical:(bool)arg2;
- (bool)_isUsableForSending;
- (bool)isOperational;
- (void)setUniqueID:(id)arg1;
- (unsigned long long)capabilities;
- (id)authorizationToken;
- (void)loadFromDictionary:(id)arg1;
- (bool)useSSL;
- (void)setPassword:(id)arg1;
- (long long)accountType;
- (void)setDisplayName:(id)arg1;
- (void)setAccountDescription:(id)arg1;
- (id)accountDescription;
- (void)systemDidWake;
- (void)systemWillSleep;
- (id)countryCode;
- (id)dictionary;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setInteger:(int)arg1 forKey:(id)arg2;
- (bool)isActive;
- (bool)boolForKey:(id)arg1;
- (id)uniqueID;
- (id)server;
- (id)imHandleWithID:(id)arg1;
- (bool)isRegistered;
- (bool)isConnected;
- (id)service;
- (id)stringForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)password;
- (long long)port;
- (id)name;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)serviceName;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)displayName;
- (int)integerForKey:(id)arg1;
- (void)setIsActive:(bool)arg1;

@end
