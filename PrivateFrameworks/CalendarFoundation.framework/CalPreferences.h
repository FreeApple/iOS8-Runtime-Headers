/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@class NSString, NSMutableSet;

@interface CalPreferences : NSObject  {
    NSString *_domain;
    NSMutableSet *_registeredNotificationsToReflect;
}


- (void)_preferenceChangedExternally:(id)arg1;
- (void)_synchronizePreferences;
- (void)_preferenceChangedInternally:(id)arg1;
- (void)unregisterReflectionForPreferenceWithNotificationName:(id)arg1;
- (id)getValueForPreference:(id)arg1 expectedClass:(Class)arg2;
- (bool)getBooleanPreference:(id)arg1 defaultValue:(bool)arg2;
- (id)initWithDomain:(id)arg1;
- (void)setBooleanPreference:(id)arg1 value:(bool)arg2 notificationName:(id)arg3;
- (void)setValueForPreference:(id)arg1 value:(id)arg2 notificationName:(id)arg3;
- (void)registerReflectionForPreferenceWithNotificationName:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
