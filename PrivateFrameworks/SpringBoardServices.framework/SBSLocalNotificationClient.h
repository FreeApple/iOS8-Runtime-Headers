/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSLocalNotificationClient : NSObject  {
}

+ (unsigned int)currentAllowedNotificationTypesForBundleID:(id)arg1;
+ (void)setScheduledLocalNotifications:(id)arg1 bundleIdentifier:(id)arg2;
+ (void)cancelAllLocalNotificationsForBundleIdentifier:(id)arg1;
+ (void)cancelLocalNotification:(id)arg1 bundleIdentifier:(id)arg2 waitUntilDone:(bool)arg3;
+ (void)cancelLocalNotification:(id)arg1 bundleIdentifier:(id)arg2;
+ (void)scheduleLocalNotification:(id)arg1 bundleIdentifier:(id)arg2 waitUntilDone:(bool)arg3;
+ (void)scheduleLocalNotification:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)getPendingNotification;
+ (void)migrateUserNotificationSettingsForBundleIdentifierPushSettingsPairs:(id)arg1;
+ (void)registerUserNotificationSettings:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)scheduledLocalNotificationsForBundleIdentifier:(id)arg1;
+ (void)_scheduleLocalNotifications:(id)arg1 cancel:(bool)arg2 replace:(bool)arg3 optionalBundleIdentifier:(id)arg4;
+ (void)_scheduleLocalNotifications:(id)arg1 cancel:(bool)arg2 replace:(bool)arg3 optionalBundleIdentifier:(id)arg4 waitUntilDone:(bool)arg5;
+ (id)currentUserNotificationSettingsForBundleID:(id)arg1;
+ (id)scheduledLocalNotifications;
+ (void)setScheduledLocalNotifications:(id)arg1;
+ (void)cancelAllLocalNotifications;
+ (void)cancelLocalNotification:(id)arg1;
+ (void)scheduleLocalNotification:(id)arg1;
+ (void)registerUserNotificationSettings:(id)arg1;
+ (id)currentUserNotificationSettings;


@end
