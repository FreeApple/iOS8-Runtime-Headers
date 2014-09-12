/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class LSBestAppSuggestion, NSXPCConnection, <LSBestAppSuggestionManagerDelegate>;

@interface LSBestAppSuggestionManager : NSObject  {
    <LSBestAppSuggestionManagerDelegate> *_delegate;
    bool_listeningForBestAppSuggestions;
    int _bestAppNotificationCount;
    LSBestAppSuggestion *_lastBestAppSuggestion;
    NSXPCConnection *_connection;
}

@property <LSBestAppSuggestionManagerDelegate> * delegate;
@property(retain) NSXPCConnection * connection;


- (void)launchAppWithBestAppSuggestion:(id)arg1;
- (void)launchAppWithBundleIdentifier:(id)arg1 taskContinuationIdentifier:(id)arg2;
- (void)notifyBestAppChanged:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3 bundleIdentifier:(id)arg4 activityType:(id)arg5 when:(id)arg6 confidence:(double)arg7 deviceName:(id)arg8 deviceIdentifier:(id)arg9 deviceType:(id)arg10;
- (void)bestAppSuggestionLaunchWasCancelled:(id)arg1;
- (void)bestAppSuggestionWasLaunched:(id)arg1 withInteractionType:(int)arg2;
- (void)queueFetchOfPayloadForBestAppSuggestion:(id)arg1;
- (id)bestAppSuggestions:(long long)arg1;
- (bool)determineBestAppWithDelay:(double)arg1 withBlock:(id)arg2;
- (void)removeBestApp:(id)arg1 options:(id)arg2;
- (void)launchAppWithBundleIdentifier:(id)arg1 userActivityUniqueIdentifier:(id)arg2 userActivityTypeIdentifier:(id)arg3 deviceName:(id)arg4 deviceType:(id)arg5;
- (void)launchAppWithBundleIdentifier:(id)arg1 userActivityUniqueIdentifier:(id)arg2 userActivityTypeIdentifier:(id)arg3;
- (id)bestAppSuggestion;
- (void)stopListeningForBestAppSuggestions;
- (void)startListeningForBestAppSuggestions;
- (id)connection;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setConnection:(id)arg1;
- (void)dealloc;

@end
