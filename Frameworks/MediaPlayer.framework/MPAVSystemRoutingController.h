/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSPointerArray, NSObject<OS_dispatch_queue>;

@interface MPAVSystemRoutingController : NSObject  {
    NSPointerArray *_clientRoutingControllers;
    long long _clientDiscoveryMode;
    NSObject<OS_dispatch_queue> *_serialQueue;
    int _debugNotifyToken;
}

+ (id)sharedRoutingController;

- (void)unregisterClientRoutingController:(id)arg1;
- (void)registerClientRoutingController:(id)arg1;
- (void)_updateClientRouteDiscoveryMode;
- (void)_onQueueUpdateClientRouteDiscoveryMode;
- (void)_debugLogSystemControllerState;
- (void)_clientRoutingControllerDidUpdateDiscoveryModeNotification:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_init;

@end
