/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SALocalSearchAceNavigationEta, SALocalSearchRoute;

@interface SALocalSearchGetNavigationStatusCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(retain) SALocalSearchAceNavigationEta * nextManeuverEta;
@property(retain) SALocalSearchAceNavigationEta * overallEta;
@property(retain) SALocalSearchRoute * route;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)getNavigationStatusCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getNavigationStatusCompleted;

- (void)setOverallEta:(id)arg1;
- (id)overallEta;
- (void)setNextManeuverEta:(id)arg1;
- (id)nextManeuverEta;
- (id)encodedClassName;
- (id)route;
- (void)setRoute:(id)arg1;
- (id)groupIdentifier;

@end
