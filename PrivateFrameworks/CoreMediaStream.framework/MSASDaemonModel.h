/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASDaemonModel : MSASModelBase  {
}

+ (id)defaultModel;

- (bool)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;
- (void)clearAllNextActivityDates;
- (void)setNextActivityDate:(id)arg1 forPersonID:(id)arg2;
- (id)nextActivityDateByPersonID;
- (id)earliestNextActivityDate;
- (id)init;

@end
