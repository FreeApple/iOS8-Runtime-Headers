/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, NSString, MPAVRoutingController;

@interface MPAudioRoutingPicker : UIAlertView <MPAVRoutingControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    MPAVRoutingController *_routingController;
    bool_ignoringInteractionEvents;
    NSArray *_routes;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setAVPlayer:(id)arg1;
- (bool)_pickRouteAtIndex:(unsigned long long)arg1 withPassword:(id)arg2;
- (id)initWithAVPlayer:(id)arg1;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (bool)requiresPortraitOrientation;
- (void)willMoveToSuperview:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;

@end
