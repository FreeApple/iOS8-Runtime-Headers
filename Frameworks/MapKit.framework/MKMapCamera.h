/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKMapView;

@interface MKMapCamera : NSObject <NSSecureCoding, NSCopying> {
    struct { 
        double latitude; 
        double longitude; 
    } _centerCoordinate;
    double _heading;
    double _pitch;
    double _altitude;
    MKMapView *_mapView;
}

@property struct { double x1; double x2; } centerCoordinate;
@property double heading;
@property double pitch;
@property double altitude;
@property(getter=_precisePitch,setter=_setPrecisePitch:) double precisePitch;

+ (id)_cameraLookingAtMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 forViewSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)cameraLookingAtCenterCoordinate:(struct { double x1; double x2; })arg1 fromEyeCoordinate:(struct { double x1; double x2; })arg2 eyeAltitude:(double)arg3;
+ (id)_cameraLookingAtGEOMapRect:(const struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 aspectRatio:(float)arg2;
+ (id)camera;
+ (bool)supportsSecureCoding;

- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1;
- (double)_precisePitch;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_enclosingGEOMapRectForAspectRatio:(float)arg1;
- (void)_setPrecisePitch:(double)arg1;
- (id)_mapView;
- (void)_setMapView:(id)arg1;
- (bool)_validate;
- (struct { double x1; double x2; })centerCoordinate;
- (void)setHeading:(double)arg1;
- (void)setPitch:(double)arg1;
- (double)heading;
- (double)pitch;
- (double)altitude;
- (void)setAltitude:(double)arg1;
- (bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)_updateState;

@end
