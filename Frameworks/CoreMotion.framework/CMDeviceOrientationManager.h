/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMDeviceOrientationManager : NSObject  {
    id _internal;
}

+ (void)dummySelector:(id)arg1;
+ (void)initialize;

- (id)deviceOrientationBlocking;
- (void)stopDeviceOrientationUpdates;
- (void)startDeviceOrientationUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (bool)isDeviceOrientationActive;
- (void)updateAggregateDictionaryPrivate;
- (void)signalAndReleaseSemaphoreIfNecessaryPrivate;
- (bool)isDeviceOrientationAvailable;
- (void)startDeviceOrientationUpdatesPrivateToQueue:(id)arg1 withHandler:(id)arg2;
- (void)setDeviceOrientationCallbackModePrivate:(int)arg1;
- (void)stopDeviceOrientationUpdatesPrivate;
- (void)deallocPrivate;
- (void)onNotification:(id)arg1;
- (id)initPrivate;
- (void)onDeviceOrientation:(const struct Sample { double x1; int x2; }*)arg1;
- (id)init;
- (void)dealloc;

@end
