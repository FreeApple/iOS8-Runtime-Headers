/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMServiceAgentImpl : IMServiceAgent  {
}

+ (void)_statusImageAppearanceChanged:(id)arg1;
+ (id)sharedAgent;
+ (void)_determineStatusImageAppearance;
+ (id)notificationCenter;
+ (id)imageURLForStatus:(unsigned long long)arg1;
+ (id)imageNameForStatus:(unsigned long long)arg1;
+ (void)forgetStatusImageAppearance;
+ (void)initialize;

- (void)setMyAwayMessages:(id)arg1;
- (void)setMyAvailableMessages:(id)arg1;
- (id)myAwayMessages;
- (id)myAvailableMessages;
- (void)_customMessagesChanged:(id)arg1;
- (void)launchIfNecessary;
- (void)_daemonDisconnected:(id)arg1;
- (void)_daemonConnected:(id)arg1;
- (void)_statusImageAppearanceChanged:(id)arg1;
- (void)setMyStatus:(unsigned long long)arg1 message:(id)arg2;
- (unsigned long long)vcCapabilities;
- (void)vcCapabilitiesChanged:(unsigned long long)arg1;
- (void)setupComplete;
- (id)notificationCenter;
- (id)serviceWithName:(id)arg1;
- (id)init;
- (void)finalize;
- (void)dealloc;

@end
