/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSRemoteNotificationClient : NSObject  {
}

+ (unsigned int)_remoteNotificationServerPort;
+ (void)setAllowed:(bool)arg1 forBundleIdentifier:(id)arg2;
+ (void)getSupportedBundleIdentifiers:(id*)arg1 enabledBundleIdentifiers:(id*)arg2;
+ (id)getNotificationUserInfoForToken:(int)arg1;
+ (id)getPendingNotificationUserInfo;
+ (void)registerForRemoteNotificationsWithLegacyTypes:(unsigned char)arg1;
+ (unsigned char)legacyRegisteredRemoteNotificationTypes;
+ (void)unregisterForRemoteNotifications;
+ (bool)isRegisteredForRemoteNotifications;
+ (void)registerForRemoteNotifications;


@end
