/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@class NSDictionary, TLAccessQueue;

@interface TLVibrationManager : NSObject  {
    bool_needsRefresh;
    bool_allowsAutoRefresh;
    unsigned long long _specialBehaviors;
    NSDictionary *_cachedSystemVibrationPatterns;
    NSDictionary *_cachedUserGeneratedVibrationPatterns;
    TLAccessQueue *_accessQueue;
}

@property bool needsRefresh;
@property bool allowsAutoRefresh;
@property(readonly) bool shouldVibrateForCurrentRingerSwitchState;
@property(readonly) bool shouldVibrateOnRing;
@property(readonly) bool shouldVibrateOnSilent;
@property(setter=_setAllowsAutoRefresh:) bool _allowsAutoRefresh;
@property(setter=_setSpecialBehaviors:) unsigned long long _specialBehaviors;
@property(getter=_isUnitTestingModeEnabled,readonly) bool _unitTestingModeEnabled;
@property(readonly) NSDictionary * _systemVibrationPatterns;
@property(setter=_setCachedSystemVibrationPatterns:,retain) NSDictionary * _cachedSystemVibrationPatterns;
@property(readonly) NSDictionary * _userGeneratedVibrationPatterns;
@property(setter=_setCachedUserGeneratedVibrationPatterns:,retain) NSDictionary * _cachedUserGeneratedVibrationPatterns;
@property(setter=_setAccessQueue:,retain) TLAccessQueue * _accessQueue;

+ (void)_handleVibrateOnRingOrSilentDidChangeNotification;
+ (void)_handleVibrationPreferencesDidChangeNotification;
+ (id)sharedVibrationManager;

- (bool)setName:(id)arg1 forUserGeneratedVibrationWithIdentifier:(id)arg2 error:(id*)arg3;
- (id)addUserGeneratedVibrationPattern:(id)arg1 name:(id)arg2 error:(id*)arg3;
- (bool)deleteUserGeneratedVibrationPatternWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)allUserGeneratedVibrationIdentifiers;
- (id)allUserSelectableSystemVibrationIdentifiers;
- (id)noneVibrationName;
- (bool)shouldVibrateForCurrentRingerSwitchState;
- (bool)_migrateLegacySettings;
- (bool)_removeAllUserGeneratedVibrationsWithError:(id*)arg1;
- (unsigned long long)_numberOfUserGeneratedVibrations;
- (bool)_vibrationIsSettableForAlertType:(int)arg1;
- (id)defaultVibrationPatternForAlertType:(int)arg1;
- (id)defaultVibrationNameForAlertType:(int)arg1;
- (id)currentVibrationPatternForAlertType:(int)arg1;
- (id)currentVibrationNameForAlertType:(int)arg1;
- (bool)allowsAutoRefresh;
- (void)_makeSystemVibrationDataMigrationVersionCurrentIfNecessary;
- (void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(int)arg2;
- (unsigned long long)_storedSystemVibrationDataMigrationVersion;
- (bool)shouldVibrateOnRing;
- (bool)shouldVibrateOnSilent;
- (bool)_booleanPreferenceForKey:(struct __CFString { }*)arg1 defaultValue:(bool)arg2;
- (bool)_removeAllUserGeneratedVibrationPatternsUsingServiceWithError:(id*)arg1;
- (bool)_saveUserGeneratedVibrationPatterns:(id)arg1 error:(id*)arg2;
- (void)_didChangeUserGeneratedVibrationPatterns;
- (bool)_setUserGeneratedVibrationPatternsUsingService:(id)arg1 error:(id*)arg2;
- (id)_retrieveUserGeneratedVibrationPatternsUsingService;
- (id)_nameOfVibrationWithIdentifier:(id)arg1;
- (id)patternForVibrationWithIdentifier:(id)arg1;
- (id)_localizedNameForVibrationWithIdentifier:(id)arg1;
- (id)_systemVibrationPatterns;
- (id)_cachedSystemVibrationPatterns;
- (id)noneVibrationPattern;
- (id)_patternForSystemVibrationWithIdentifier:(id)arg1;
- (id)patternForVibrationWithIdentifier:(id)arg1 repeating:(bool)arg2;
- (id)currentVibrationIdentifierForAlertType:(int)arg1;
- (id)_currentVibrationIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)defaultVibrationIdentifierForAlertType:(int)arg1;
- (id)_copySystemWideVibrationPatternPreferenceKeyForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3;
- (id)currentVibrationIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2;
- (id)_userGeneratedVibrationPatterns;
- (void)_setNeedsRefresh:(bool)arg1;
- (id)_cachedUserGeneratedVibrationPatterns;
- (bool)needsRefresh;
- (unsigned long long)_specialBehaviors;
- (bool)_allowsAutoRefresh;
- (void)_setCachedUserGeneratedVibrationPatterns:(id)arg1;
- (void)_setCachedSystemVibrationPatterns:(id)arg1;
- (bool)_isUnitTestingModeEnabled;
- (void)_setAllowsAutoRefresh:(bool)arg1;
- (void)_setSpecialBehaviors:(unsigned long long)arg1;
- (id)_initWithSpecialBehaviors:(unsigned long long)arg1;
- (id)_newServiceConnection;
- (id)_accessQueue;
- (void)_performBlockInAccessQueue:(id)arg1;
- (void)_setAccessQueue:(id)arg1;
- (id)nameOfVibrationWithIdentifier:(id)arg1;
- (void)setAllowsAutoRefresh:(bool)arg1;
- (bool)vibrationWithIdentifierIsValid:(id)arg1;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;
- (bool)refresh;
- (id)init;
- (void)dealloc;

@end
