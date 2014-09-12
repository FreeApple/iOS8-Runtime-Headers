/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString, NSDate;

@interface EKTravelRealRoutePredictorInternalDelegate : NSObject <GEORouteHypothesizerDelegate> {
    NSDate *_lastUpdateDate;
}

@property(readonly) NSDate * lastUpdateDate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)routeHypothesizerUpdatedETA:(id)arg1 etaRoute:(id)arg2;
- (void)routeHypothesizer:(id)arg1 receivedETAError:(id)arg2;
- (void)routeHypothesizer:(id)arg1 receivedETAResponse:(id)arg2;
- (void)routeHypothesizer:(id)arg1 willSendETARequest:(id)arg2;
- (void)routeHypothesizerRerouted:(id)arg1 request:(id)arg2 response:(id)arg3;
- (void)routeHypothesizer:(id)arg1 willRequestNewRoute:(id)arg2;
- (void)routeHypothesizer:(id)arg1 matchedToRoute:(id)arg2;
- (void)routeHypothesizerArrived:(id)arg1;
- (id)lastUpdateDate;

@end
