/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSString;

@interface IMLockdownManager : NSObject  {
    bool_settingUpActivationState;
    bool_isInternalInstall;
    bool_isCarrierInstall;
    bool_isNonUIInstall;
    bool_isVendorInstall;
    bool_hasShownMismatchedSIM;
    bool_hasShownWaitingAlertThisSession;
    unsigned long long _state;
}

@property(readonly) bool isNonUIInstall;
@property(readonly) bool isVendorInstall;
@property(readonly) bool isInternalInstall;
@property(readonly) bool isCarrierInstall;
@property(readonly) bool isActivated;
@property(readonly) bool isExpired;
@property(readonly) NSString * uniqueDeviceIdentifier;
@property(setter=_setState:) unsigned long long _state;
@property bool _settingUpActivationState;
@property bool _isVendorInstall;
@property bool _isInternalInstall;
@property bool _isNonUIInstall;
@property bool _isCarrierInstall;
@property bool _hasShownWaitingAlertThisSession;
@property bool _hasShownMismatchedSIM;

+ (id)sharedInstance;

- (void)set_hasShownWaitingAlertThisSession:(bool)arg1;
- (bool)_hasShownWaitingAlertThisSession;
- (void)set_hasShownMismatchedSIM:(bool)arg1;
- (bool)_hasShownMismatchedSIM;
- (void)set_isVendorInstall:(bool)arg1;
- (bool)_isVendorInstall;
- (void)set_isNonUIInstall:(bool)arg1;
- (bool)_isNonUIInstall;
- (void)set_isCarrierInstall:(bool)arg1;
- (bool)_isCarrierInstall;
- (void)set_isInternalInstall:(bool)arg1;
- (void)set_settingUpActivationState:(bool)arg1;
- (bool)_settingUpActivationState;
- (id)uniqueDeviceIdentifier;
- (bool)isExpired;
- (bool)isActivated;
- (bool)isCarrierInstall;
- (bool)isInternalInstall;
- (bool)isVendorInstall;
- (void)_resetActivationState;
- (void)_activationFailed;
- (long long)lockdownState;
- (void)_setupActivationState;
- (void)_calculateInstallType;
- (bool)isNonUIInstall;
- (unsigned long long)_state;
- (void)_setState:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (bool)_isInternalInstall;

@end
