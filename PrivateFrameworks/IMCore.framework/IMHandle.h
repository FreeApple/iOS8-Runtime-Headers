/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSURL, NSDate, NSDictionary, IMAccount, NSMutableArray, NSString, NSSet, IMPerson, NSAttributedString, NSArray, NSData, IMServiceImpl;

@interface IMHandle : IMDirectlyObservableObject <NSCoding> {
    NSString *_guid;
    IMAccount *_account;
    NSString *_id;
    NSString *_uncanonicalID;
    NSString *_countryCode;
    NSDictionary *_otherServiceIDs;
    NSDate *_idleSince;
    NSDate *_feedUpdatedDate;
    NSDictionary *_extraProps;
    NSDictionary *_certs;
    NSSet *_groups;
    IMPerson *_person;
    NSString *_abFirstName;
    NSString *_abLastName;
    NSString *_abFullName;
    NSString *_abNickname;
    NSString *_displayID;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_fullName;
    NSString *_nickname;
    NSArray *_emails;
    NSString *_normalizedFormOfID;
    NSString *_IDWithoutResource;
    NSString *_IDWithTrimmedServer;
    NSString *_uniqueName;
    NSData *_pictureData;
    NSString *_statusMsg;
    NSString *_processedStatusMsg;
    NSAttributedString *_richStatusMsg;
    NSDate *_whenWentOffline;
    NSDate *_whenStatusChanged;
    NSString *_prevStatusMsg;
    NSMutableArray *_notificationNameQueue;
    NSMutableArray *_notificationQueue;
    NSURL *_statusURL;
    struct __CFPhoneNumber { } *_phoneNumberRef;
    NSString *_formattedNumber;
    bool_hasCheckedPhoneNumber;
    unsigned long long _status;
    unsigned long long _prevStatus;
    unsigned long long _capabilities;
    unsigned int _authRequestStatus;
    unsigned long long _resourceIndex;
    long long _IDStatus;
    bool_isRetainingAccount;
    bool_blockNotifications;
    bool_hasTemporaryWatch;
    bool_isMobile;
    bool_isBot;
    bool_isAnonymous;
    bool_beingTornDown;
    bool_hasCheckedCardMap;
    bool_isRegistered;
    long long _priority;
    int _addressBookIdentifier;
    int _notificationQueueCount;
    NSURL *_statusMessageURL;
}

@property(readonly) bool hasNoConferencingCaps;
@property(retain,readonly) NSString * ID;
@property(retain) NSString * originalID;
@property(retain) NSString * countryCode;
@property(retain,readonly) NSString * displayID;
@property(retain,readonly) NSString * normalizedID;
@property(readonly) bool hasName;
@property(retain,readonly) NSString * name;
@property(retain,readonly) NSString * fullName;
@property(retain,readonly) NSString * uniqueName;
@property(retain,readonly) NSString * nameAndID;
@property(retain,readonly) NSString * nameAndEmail;
@property(retain,readonly) NSString * firstName;
@property(retain,readonly) NSString * lastName;
@property(retain,readonly) NSString * nickname;
@property(retain,readonly) IMAccount * account;
@property(retain,readonly) IMServiceImpl * service;
@property long long IDStatus;
@property(retain,readonly) NSURL * statusURL;
@property(retain) NSURL * statusMessageAsURL;
@property(readonly) unsigned long long status;
@property(retain,readonly) NSString * statusMessage;
@property(retain,readonly) NSString * nameOfStatus;
@property(retain,readonly) NSAttributedString * richStatusMessage;
@property(retain,readonly) NSString * offlineString;
@property(readonly) unsigned long long previousStatus;
@property(retain,readonly) NSString * previousStatusMessage;
@property(readonly) double timeSinceWentOffline;
@property(readonly) double timeSinceStatusChanged;
@property(readonly) unsigned int authRequestStatus;
@property(readonly) double idleTime;
@property(retain,readonly) NSString * idleString;
@property(retain,readonly) NSDate * feedUpdatedDate;
@property long long priority;
@property(readonly) bool canBeAdded;
@property(readonly) bool canBeDeleted;
@property(readonly) unsigned long long capabilities;
@property(readonly) bool isBot;
@property(readonly) bool isBuddy;
@property(readonly) bool isLoginIMHandle;
@property(readonly) bool isVisiblyBlocked;
@property(setter=setBlocked:) bool isBlocked;
@property(readonly) bool isAnonymous;
@property(readonly) bool isSystemUser;
@property(readonly) bool isMobile;
@property(readonly) bool isLoginIMHandleForAnyAccount;
@property(retain,readonly) NSString * mobileDeviceName;
@property(readonly) bool watchingIMHandle;
@property(retain,readonly) NSData * pictureData;
@property(retain) NSDictionary * otherServiceIDs;
@property(retain,readonly) NSDictionary * extraProperties;
@property(retain,readonly) NSString * email;
@property(retain,readonly) NSArray * emails;
@property(setter=setIMPerson:,retain) IMPerson * person;
@property(readonly) int addressBookIdentifier;
@property(retain,readonly) NSArray * groupsArray;
@property(retain,readonly) NSSet * groups;
@property(readonly) bool hasOtherSiblings;
@property(retain,readonly) NSSet * siblings;
@property(retain,readonly) NSArray * siblingsArray;
@property(retain,readonly) NSArray * accountSiblingsArray;
@property(retain,readonly) NSArray * existingAccountSiblingsArray;
@property(readonly) id bestSibling;
@property(retain,readonly) id bestAccountSibling;
@property(readonly) bool isConferenceAvailable;
@property(readonly) bool hasConferencing;
@property(readonly) bool hasVideo;
@property(readonly) bool hasMultiwayVideo;
@property(readonly) bool hasAudio;
@property(readonly) bool hasMultiwayAudio;
@property(retain,readonly) NSString * resource;
@property(retain,readonly) NSString * IDWithoutResource;
@property(retain,readonly) NSString * server;
@property(retain,readonly) NSString * accountTypeName;
@property(retain,readonly) NSString * guid;
@property(retain,readonly) NSString * _displayNameWithAbbreviation;
@property(readonly) bool supportsARDMuxing;
@property(readonly) bool hasLocation;
@property(readonly) bool hasResource;
@property(readonly) id imHandleWithoutResource;
@property(readonly) id existingIMHandleWithoutResource;
@property(readonly) bool hasServer;
@property(retain,readonly) IMPerson * _cachedPerson;
@property(readonly) NSArray * dependentIMHandles;
@property(readonly) bool areABPropertiesRecent;
@property(setter=_setIsRegisteredWithRegistrar:) bool _isRegisteredWithRegistrar;
@property(retain) NSData * customPictureData;

+ (id)filterIMHandlesForAccountSiblings:(id)arg1 onAccount:(id)arg2;
+ (id)nameOfStatus:(unsigned long long)arg1;
+ (id)bestIMHandleInArray:(id)arg1;
+ (void)_loadStatusNames;
+ (id)imHandlesForIMPerson:(id)arg1;
+ (id)filterIMHandlesForBestAccountSiblings:(id)arg1;
+ (bool)notificationsEnabled;
+ (void)setNotificationsEnabled:(bool)arg1;

- (void)setUniqueName:(id)arg1;
- (void)requestValueOfProperty:(id)arg1;
- (void)setPersonStatus:(unsigned long long)arg1;
- (bool)hasConferencing;
- (bool)_setCapabilities:(unsigned long long)arg1;
- (id)fmfSiblingHandles;
- (id)fmfHandle;
- (id)imHandleRegistrarGUID;
- (void)_sendRemoteLogDumpRequest;
- (void)_sendRemoteLogDumpRequest:(id)arg1;
- (void)setStatusMessageAsURL:(id)arg1;
- (id)statusMessageAsURL;
- (void)setIDStatus:(long long)arg1;
- (bool)isBot;
- (void)setOtherServiceIDs:(id)arg1;
- (id)richStatusMessage;
- (id)previousStatusMessage;
- (id)feedUpdatedDate;
- (unsigned long long)previousStatus;
- (id)statusURL;
- (void)_setIsRegisteredWithRegistrar:(bool)arg1;
- (bool)_isRegisteredWithRegistrar;
- (void)setCustomPictureData:(id)arg1;
- (id)customPictureData;
- (void)_imPersonPictureChanged:(id)arg1;
- (void)_sendCommand:(id)arg1 properties:(id)arg2;
- (void)_sendAutomationData:(id)arg1 properties:(id)arg2;
- (bool)hasMultiwayAudio;
- (bool)hasMultiwayVideo;
- (bool)isConferenceAvailable;
- (id)_bestChatSibling;
- (id)_chatSiblings;
- (bool)_isChatSiblingOf:(id)arg1;
- (bool)isSiblingOf:(id)arg1;
- (bool)isAccountSiblingOf:(id)arg1;
- (id)siblingsArray;
- (bool)hasOtherSiblings;
- (bool)matchesIMHandle:(id)arg1;
- (long long)compareNormalizedIDs:(id)arg1;
- (long long)compareLastNames:(id)arg1;
- (long long)compareFirstNames:(id)arg1;
- (id)statusMessage;
- (id)idleString;
- (id)offlineString;
- (void)setStatusURLFromString:(id)arg1;
- (void)setFeedUpdatedDate:(id)arg1;
- (void)setIdleSince:(id)arg1;
- (void)_setIDStatus:(long long)arg1;
- (void)requestIDStatus;
- (id)nameOfStatus;
- (void)statusMessageChanged:(id)arg1;
- (void)setAuthRequestStatus:(unsigned int)arg1;
- (id)dependentIMHandles;
- (id)accountTypeName;
- (unsigned int)sortOrderInGroup:(id)arg1;
- (bool)isVisiblyBlocked;
- (id)bestSibling;
- (id)bestIMHandleForAccount:(id)arg1;
- (void)setValue:(id)arg1 ofExtraProperty:(id)arg2;
- (bool)isLoginIMHandleForAnyAccount;
- (id)mobileDeviceName;
- (void)setIsBot:(bool)arg1;
- (void)setIsMobile:(bool)arg1;
- (bool)isSystemUser;
- (bool)canBeAdded;
- (void)setLocalNickname:(id)arg1;
- (void)resetUniqueName;
- (id)nameAndID;
- (id)_displayNameWithAbbreviation;
- (id)displayNameForChat:(id)arg1;
- (void)_clearABPersonLookup;
- (void)clearABPerson;
- (id)nameAndEmail;
- (void)_setOriginalID:(id)arg1 countryCode:(id)arg2 updateSiblings:(bool)arg3;
- (id)_handleInfo;
- (id)initWithAccount:(id)arg1 ID:(id)arg2;
- (void)_registerForIMPersonPictureChanges;
- (void)_unregisterFromIMPersonPictureChanges;
- (void)customPictureDataChanged:(id)arg1 key:(id)arg2;
- (id)pictureData;
- (bool)hasAudio;
- (bool)hasVideo;
- (id)_chatSiblingsArray;
- (id)chatSiblingsArray;
- (id)normalizedID;
- (id)_nameForComparisonPreferFirst:(bool)arg1;
- (void)_clearStatusMessageURLCache;
- (void)_filterStatusMessage;
- (double)idleTime;
- (double)timeSinceStatusChanged;
- (long long)IDStatus;
- (void)_updateStatusBasedOnAuthRequestStatus;
- (void)setStatus:(unsigned long long)arg1 message:(id)arg2 richMessage:(id)arg3;
- (id)imHandleWithoutResource;
- (bool)_isMyIDInList:(id)arg1;
- (void)_setExtraProperties:(id)arg1;
- (id)siblings;
- (bool)isBetterThanIMHandle:(id)arg1;
- (id)existingAccountSiblingsArray;
- (id)bestIMHandleForAccount:(id)arg1 onService:(id)arg2 inGroup:(id)arg3 otherThan:(id)arg4;
- (double)timeSinceWentOffline;
- (bool)supportsARDMuxing;
- (bool)isMobile;
- (void)_createPhoneNumberRefIfNeeded;
- (id)accountSiblingsArray;
- (id)IDWithoutResource;
- (bool)hasResource;
- (id)extraProperties;
- (void)setEmail:(id)arg1 andUpdateABPerson:(bool)arg2;
- (void)setFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 andUpdateABPerson:(bool)arg4;
- (void)setEmails:(id)arg1 andUpdateABPerson:(bool)arg2;
- (void)_setBaseFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3;
- (void)_setABPersonFirstName:(id)arg1 lastName:(id)arg2;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (id)_abPersonCreateIfNeeded;
- (id)_nameUsingUnique:(bool)arg1;
- (id)_IDWithTrimmedServer;
- (bool)hasServer;
- (id)_formattedPhoneNumber;
- (bool)_hasServiceNameProperties;
- (bool)_hasABName;
- (id)displayID;
- (void)sendNotificationABPersonChanged;
- (void)_clearABProperties;
- (void)resetABProperties;
- (bool)areABPropertiesRecent;
- (id)existingIMHandleWithoutResource;
- (bool)shouldQueueNotifications;
- (id)imHandleForOtherAccount:(id)arg1;
- (id)bestIMHandleForService:(id)arg1;
- (id)groupsArray;
- (bool)isAnonymous;
- (void)setAnonymous:(bool)arg1;
- (id)existingChatSiblingsArray;
- (void)_setOriginalID:(id)arg1 updateSiblings:(bool)arg2;
- (void)_setCountryCode:(id)arg1;
- (long long)compareStatus:(id)arg1;
- (void)statusChanged:(unsigned long long)arg1;
- (bool)isLoginIMHandle;
- (void)statusChanged:(unsigned long long)arg1 message:(id)arg2;
- (void)setIMPerson:(id)arg1;
- (id)_cachedPerson;
- (bool)resetABPerson;
- (void)setHasTemporaryWatch:(bool)arg1;
- (bool)watchingIMHandle;
- (id)otherServiceIDs;
- (id)resource;
- (id)initWithAccount:(id)arg1 ID:(id)arg2 alreadyCanonical:(bool)arg3;
- (id)initWithAccount:(id)arg1 ID:(id)arg2 alreadyCanonical:(bool)arg3 knownIDStatus:(int)arg4;
- (void)_setOriginalID:(id)arg1;
- (void)_updateOriginalID:(id)arg1;
- (id)originalID;
- (void)propertiesChanged:(id)arg1;
- (void)_stopRetainingAccount:(id)arg1;
- (void)releaseNotificationQueue;
- (void)beginNotificationQueue;
- (void)setCustomPictureData:(id)arg1 key:(id)arg2;
- (bool)isBuddy;
- (unsigned int)authRequestStatus;
- (bool)hasCapability:(unsigned long long)arg1;
- (long long)compareIDs:(id)arg1;
- (long long)compareAccountNames:(id)arg1;
- (void)_removeAccountReference:(id)arg1;
- (id)publicAPIPropertiesDictionary;
- (id)bestAccountSibling;
- (void)setBlocked:(bool)arg1;
- (bool)canBeDeleted;
- (void)setEmail:(id)arg1;
- (void)_postNotification:(id)arg1;
- (bool)hasLocation;
- (bool)hasName;
- (void)setEmails:(id)arg1;
- (unsigned long long)capabilities;
- (void)setCapabilities:(unsigned long long)arg1;
- (id)nickname;
- (void)_registerForNotifications;
- (id)lastName;
- (id)firstName;
- (void)postNotificationName:(id)arg1;
- (id)account;
- (unsigned long long)status;
- (id)guid;
- (id)countryCode;
- (void)setImageData:(id)arg1;
- (id)fullName;
- (id)groups;
- (id)server;
- (id)email;
- (struct __CFPhoneNumber { }*)phoneNumberRef;
- (bool)isBlocked;
- (int)addressBookIdentifier;
- (id)ID;
- (id)emails;
- (id)service;
- (id)init;
- (unsigned long long)hash;
- (id)name;
- (void)setPriority:(long long)arg1;
- (long long)priority;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (oneway void)release;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (id)person;
- (id)uniqueName;
- (bool)hasNoConferencingCaps;

@end
