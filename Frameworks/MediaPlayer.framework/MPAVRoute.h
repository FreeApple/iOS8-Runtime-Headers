/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, NSDictionary, MPAVRoute;

@interface MPAVRoute : NSObject  {
    NSString *_routeName;
    bool_picked;
    NSDictionary *_avRouteDescription;
    MPAVRoute *_wirelessDisplayRoute;
    long long _displayRouteType;
    bool_requiresPassword;
    NSString *_routeUID;
    long long _routeType;
    long long _pickableRouteType;
    long long _routeSubtype;
}

@property(readonly) NSString * routeName;
@property(readonly) NSString * routeUID;
@property(readonly) long long routeType;
@property(readonly) long long pickableRouteType;
@property(readonly) long long routeSubtype;
@property(readonly) MPAVRoute * wirelessDisplayRoute;
@property(getter=isPicked,readonly) bool picked;
@property(readonly) bool requiresPassword;
@property(readonly) long long passwordType;
@property(readonly) bool displayIsPicked;
@property(readonly) long long displayRouteType;


- (void)setDisplayRouteType:(long long)arg1;
- (long long)displayRouteType;
- (void)setAVRouteDescription:(id)arg1;
- (void)_routingControllerPickedRouteNotification:(id)arg1;
- (long long)passwordType;
- (bool)requiresPassword;
- (void)setPicked:(bool)arg1;
- (void)setWirelessDisplayRoute:(id)arg1;
- (void)setRouteName:(id)arg1;
- (id)_initWithAVRouteDescription:(id)arg1;
- (id)routeUID;
- (long long)pickableRouteType;
- (long long)routeType;
- (id)avRouteDescription;
- (long long)routeSubtype;
- (bool)isPicked;
- (id)wirelessDisplayRoute;
- (bool)displayIsPicked;
- (id)routeName;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;

@end
