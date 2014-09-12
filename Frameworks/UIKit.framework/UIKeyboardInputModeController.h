/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, UIKeyboardInputMode, <UIKeyboardInputModeControllerDelegate>;

@interface UIKeyboardInputModeController : NSObject  {
    UIKeyboardInputMode *_currentInputMode;
    NSArray *_inputModesWithoutHardwareSupport;
    NSArray *_allExtensions;
    NSArray *_allowedExtensions;
    bool_skipExtensionInputModes;
    bool_cacheNeedsRefresh;
    NSArray *keyboardInputModes;
    NSArray *keyboardInputModeIdentifiers;
    NSArray *enabledInputModes;
    NSArray *normalizedInputModes;
    NSArray *defaultKeyboardInputModes;
    NSArray *defaultRawInputModes;
    NSArray *defaultInputModes;
    NSArray *defaultNormalizedInputModes;
    UIKeyboardInputMode *_lastUsedInputMode;
    NSString *_inputModeContextIdentifier;
    <UIKeyboardInputModeControllerDelegate> *_delegate;
    UIKeyboardInputMode *_nextInputModeToUse;
    UIKeyboardInputMode *_currentUsedInputMode;
}

@property(readonly) NSArray * supportedInputModeIdentifiers;
@property(readonly) NSArray * inputModesWithoutHardwareSupport;
@property(readonly) NSArray * enabledInputModeIdentifiers;
@property(readonly) NSArray * normalizedEnabledInputModeIdentifiers;
@property(readonly) NSArray * enabledInputModeLanguages;
@property(readonly) NSArray * activeInputModeIdentifiers;
@property(retain) UIKeyboardInputMode * currentInputMode;
@property UIKeyboardInputMode * currentInputModeInPreference;
@property(retain) UIKeyboardInputMode * lastUsedInputMode;
@property(readonly) UIKeyboardInputMode * hardwareInputMode;
@property(readonly) UIKeyboardInputMode * currentSystemInputMode;
@property(readonly) UIKeyboardInputMode * currentPublicInputMode;
@property(readonly) bool containsDictationSupportedInputMode;
@property(copy) NSString * inputModeContextIdentifier;
@property <UIKeyboardInputModeControllerDelegate> * delegate;
@property(readonly) NSArray * allowedExtensions;
@property(retain) NSArray * keyboardInputModes;
@property(retain) NSArray * keyboardInputModeIdentifiers;
@property(retain) NSArray * enabledInputModes;
@property(retain) NSArray * normalizedInputModes;
@property(retain) NSArray * defaultKeyboardInputModes;
@property(copy) NSArray * defaultRawInputModes;
@property(retain) NSArray * defaultInputModes;
@property(retain) NSArray * defaultNormalizedInputModes;
@property(retain) UIKeyboardInputMode * nextInputModeToUse;
@property(retain) UIKeyboardInputMode * currentUsedInputMode;

+ (id)sharedInputModeController;

- (id)enabledInputModes;
- (id)defaultInputModes;
- (void)setDefaultInputModes:(id)arg1;
- (void)setEnabledInputModes:(id)arg1;
- (id)enabledInputModeIdentifiers;
- (id)supportedInputModeIdentifiers;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)preferredLanguages;
- (id)enabledInputModeLanguages;
- (id)inputModesWithoutHardwareSupport;
- (id)enabledInputModeIdentifiers:(bool)arg1;
- (id)allowedExtensions;
- (id)defaultKeyboardInputModes;
- (void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)switchToCurrentSystemInputMode;
- (bool)deviceStateIsLocked;
- (id)suggestedInputModesForPreferredLanguages;
- (id)suggestedInputModesForCurrentLocale;
- (id)defaultEnabledInputModesForCurrentLocale:(bool)arg1;
- (bool)currentLocaleRequiresExtendedSetup;
- (bool)containsDictationSupportedInputMode;
- (id)inputModeWithIdentifier:(id)arg1;
- (void)startDictationConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)setCurrentUsedInputMode:(id)arg1;
- (void)setLastUsedInputMode:(id)arg1;
- (id)currentUsedInputMode;
- (void)setNextInputModeToUse:(id)arg1;
- (id)nextInputModeToUse;
- (id)_MCFilteredExtensionIdentifiers;
- (bool)verifyKeyboardExtensionsWithApp;
- (id)defaultNormalizedInputModes;
- (id)defaultRawInputModes;
- (id)suggestedInputModesForCurrentLocale:(bool)arg1 fallbackToDefaultInputModes:(bool)arg2;
- (id)normalizedInputModes;
- (void)_setCurrentInputMode:(id)arg1 force:(bool)arg2;
- (id)_systemInputModePassingTest:(id)arg1;
- (id)lastUsedInputMode;
- (void)updateCurrentInputMode:(id)arg1;
- (id)keyboardInputModeIdentifiers;
- (id)keyboardInputModes;
- (void)didEnterBackground:(id)arg1;
- (void)setDefaultNormalizedInputModes:(id)arg1;
- (void)setDefaultRawInputModes:(id)arg1;
- (void)setDefaultKeyboardInputModes:(id)arg1;
- (void)setNormalizedInputModes:(id)arg1;
- (void)setKeyboardInputModeIdentifiers:(id)arg1;
- (void)setKeyboardInputModes:(id)arg1;
- (id)extensionInputModes;
- (id)nextInputModeToUseForTraits:(id)arg1;
- (void)setCurrentInputMode:(id)arg1;
- (void)setInputModeContextIdentifier:(id)arg1;
- (bool)identifierIsValidSystemInputMode:(id)arg1;
- (void)updateLastUsedInputMode:(id)arg1;
- (void)performWithoutExtensionInputModes:(id)arg1;
- (void)_clearAllExtensionIfNeeded;
- (id)nextInputModeInPreferenceListForTraits:(id)arg1;
- (void)updateCurrentAndNextInputModes;
- (void)setCurrentInputModeInPreference:(id)arg1;
- (id)nextInputModeFromList:(id)arg1 withFilter:(unsigned long long)arg2 withTraits:(id)arg3;
- (id)currentInputModeInPreference;
- (id)activeInputModeIdentifiers;
- (id)identifiersFromInputModes:(id)arg1;
- (id)currentInputMode;
- (id)inputModeContextIdentifier;
- (id)activeInputModes;
- (id)currentSystemInputMode;
- (id)normalizedEnabledInputModeIdentifiers;
- (id)currentPublicInputMode;
- (id)hardwareInputMode;

@end
