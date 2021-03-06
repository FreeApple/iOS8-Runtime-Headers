/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString, MKLocationManager, UILabel, UIView;

@interface MKStarkCompassView : UIView <MKLocationManagerObserver> {
    UIView *_contentsView;
    bool_monitoringCourse;
    UILabel *_label;
    MKLocationManager *_locationManager;
    int _compassPoint;
    double _heading;
}

@property int compassPoint;
@property double heading;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (int)compassPoint;
- (id)initWithSharedMKLocationManager;
- (void)_updateDisplayedHeadingWithHeading:(double)arg1;
- (void)setCompassPoint:(int)arg1;
- (void)_updateContents;
- (void)_updateStyling;
- (void)_startLocationUpdates;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)setHeading:(double)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)_createSubviews;
- (double)heading;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithEffectiveBundleIdentifier:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;

@end
