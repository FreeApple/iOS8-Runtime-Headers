/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString;

@interface MPAudioVideoRoutingPopoverController : UIPopoverController <MPAVRoutingViewControllerDelegate> {
    int _airPlayPasswordAlertDidAppearToken;
    bool_airPlayPasswordAlertDidAppearTokenIsValid;
    bool_mirroringIncluded;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)initWithType:(unsigned long long)arg1 includeMirroring:(bool)arg2;
- (void)routingViewController:(id)arg1 didPickRoute:(id)arg2;
- (id)routingController;
- (id)initWithType:(unsigned long long)arg1;
- (void)dealloc;
- (id)_tableViewController;
- (id)initWithContentViewController:(id)arg1;

@end
