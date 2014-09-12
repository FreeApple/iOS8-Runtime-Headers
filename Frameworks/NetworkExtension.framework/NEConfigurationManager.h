/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSUUID, NSString, NSData, NSMutableDictionary, <NEConfigurationManagerDelegate>, NSDictionary, NSObject<OS_dispatch_queue>, NSKeyedUnarchiver, NEHelper;

@interface NEConfigurationManager : NSObject  {
    NSString *_description;
    NEHelper *_helper;
    bool_hasVPNAPIEntitlement;
    bool_hasReadPermission;
    bool_isVPNPublicAPI;
    bool_isNEHelper;
    int _changedNotifyToken;
    NSUUID *_userUUID;
    <NEConfigurationManagerDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_currentIndex;
    NSObject<OS_dispatch_queue> *_changedQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _changedHandler;

    NSMutableDictionary *_loadedIndex;
    NSMutableDictionary *_loadedConfigurations;
    NSKeyedUnarchiver *_decoder;
    long long _generation;
    NSData *_SCPreferencesSignature;
    NSString *_pluginType;
}

@property bool hasVPNAPIEntitlement;
@property(readonly) NSUUID * userUUID;
@property(retain) <NEConfigurationManagerDelegate> * delegate;
@property(readonly) NSObject<OS_dispatch_queue> * queue;
@property int changedNotifyToken;
@property(retain) NSDictionary * currentIndex;
@property(retain) NSObject<OS_dispatch_queue> * changedQueue;
@property(copy) id changedHandler;
@property(retain) NSMutableDictionary * loadedIndex;
@property(retain) NSMutableDictionary * loadedConfigurations;
@property(retain) NSKeyedUnarchiver * decoder;
@property long long generation;
@property(readonly) NEHelper * helper;
@property(retain) NSData * SCPreferencesSignature;
@property(readonly) NSString * pluginType;
@property bool hasReadPermission;
@property bool isVPNPublicAPI;
@property bool isNEHelper;

+ (id)sharedManagerForAllUsers;
+ (void)disableConfiguration:(id)arg1 onDemandOnly:(bool)arg2;
+ (long long)configuration:(id)arg1 overlapsWithOtherConfiguration:(id)arg2;
+ (bool)configurationIsEnabled:(id)arg1;
+ (void)updateFlags:(unsigned long long*)arg1 withConfiguration:(id)arg2;
+ (id)sharedManager;

- (void)setIsNEHelper:(bool)arg1;
- (void)setIsVPNPublicAPI:(bool)arg1;
- (void)setHasVPNAPIEntitlement:(bool)arg1;
- (bool)hasVPNAPIEntitlement;
- (void)copyIdentities:(id)arg1 fromDomain:(long long)arg2 withCompletionQueue:(id)arg3 handler:(id)arg4;
- (void)handleApplicationsRemoved:(id)arg1 pluginTypesRemoved:(id)arg2 withCompletionHandler:(id)arg3;
- (void)handlePluginTypesRemoved:(id)arg1 configuration:(id)arg2 vpn:(id)arg3 updateSCPreferences:(struct __SCPreferences { }*)arg4;
- (void)handleFileRemovedWithCompletionHandler:(id)arg1;
- (void)setChangedQueue:(id)arg1 andHandler:(id)arg2;
- (void)removeConfiguration:(id)arg1 withCompletionQueue:(id)arg2 handler:(id)arg3;
- (void)saveConfiguration:(id)arg1 withCompletionQueue:(id)arg2 handler:(id)arg3;
- (void)loadConfigurationsWithCompletionQueue:(id)arg1 handler:(id)arg2;
- (void)loadConfigurationWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(id)arg3;
- (void)loadConfigurations:(id)arg1 withFilter:(id)arg2 completionQueue:(id)arg3 completionHandler:(id)arg4;
- (void)loadIndexWithFilter:(id)arg1 completionQueue:(id)arg2 handler:(id)arg3;
- (void)syncWithSystemConfigurationWithAppNameCallback:(id)arg1 completionHandler:(id)arg2;
- (void)removeConfigurationFromDisk:(id)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3;
- (void)saveConfigurationToDisk:(id)arg1 currentSignature:(id)arg2 userUUID:(id)arg3 completionQueue:(id)arg4 completionHandler:(id)arg5;
- (void)postGeneration;
- (void)setChangedHandler:(id)arg1;
- (void)setChangedQueue:(id)arg1;
- (void)updateSCPreferencesSignatureOnDisk;
- (id)removeConfigurationFromDisk:(id)arg1 updateSCPreferences:(struct __SCPreferences { }*)arg2;
- (id)saveConfigurationToDisk:(id)arg1 updateSCPreferences:(struct __SCPreferences { }*)arg2 currentSignature:(id)arg3 userUUID:(id)arg4;
- (id)SCPreferencesSignature;
- (id)makeMutableCopyOfIndex:(id)arg1;
- (bool)resetKeychainItemsAfterProtocolChange:(id)arg1 newConfiguration:(id)arg2;
- (void)setSCPreferencesSignature:(id)arg1;
- (void)setHasReadPermission:(bool)arg1;
- (bool)configurationHasChanged:(id)arg1;
- (void)didLoadConfiguration:(id)arg1 withSignature:(id)arg2;
- (void)setLoadedConfigurations:(id)arg1;
- (void)setLoadedIndex:(id)arg1;
- (void)setChangedNotifyToken:(int)arg1;
- (void)getCurrentIndexWithCompletionHandler:(id)arg1;
- (id)copyChangedConfigurationIDs:(id)arg1;
- (id)changedHandler;
- (id)changedQueue;
- (id)errorWithCode:(long long)arg1 specifics:(id)arg2;
- (void)setGeneration:(long long)arg1;
- (bool)isNEHelper;
- (bool)reloadFromDisk;
- (bool)isVPNPublicAPI;
- (void)registerForChangeNotifications;
- (void)didLoadConfiguration:(id)arg1;
- (id)decodeConfigurationWithIdentifier:(id)arg1;
- (void)clearLoadedConfigurationsWithIDs:(id)arg1;
- (id)loadedIndex;
- (void)notifyChanges;
- (id)filterIndexWithFilter:(id)arg1;
- (id)userUUID;
- (void)setCurrentIndex:(id)arg1;
- (void)setDecoder:(id)arg1;
- (bool)hasReadPermission;
- (id)readIndexFromDiskWithError:(id*)arg1;
- (void)loadConfigurationsInternal:(id)arg1 withCompletionHandler:(id)arg2;
- (void)postChangeNotificationWithGeneration:(long long)arg1 andFlags:(unsigned long long)arg2;
- (id)loadedConfigurations;
- (void)sendRequest:(id)arg1 responseHandler:(id)arg2;
- (id)decoder;
- (int)changedNotifyToken;
- (id)initWithUserUUID:(id)arg1;
- (id)initWithPluginType:(id)arg1;
- (id)pluginType;
- (long long)generation;
- (id)helper;
- (id)currentIndex;
- (id)queue;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;

@end
