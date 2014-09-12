/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString, CLHeading, MKUserLocationInternal, CLLocation;

@interface MKUserLocation : NSObject <MKAnnotation> {
    MKUserLocationInternal *_internal;
    double _expectedCoordinateUpdateInterval;
    double _expectedHeadingUpdateInterval;
}

@property(getter=isUpdating) bool updating;
@property(retain) CLLocation * location;
@property(retain) CLHeading * heading;
@property(copy) NSString * title;
@property(copy) NSString * subtitle;
@property struct { double x1; double x2; } coordinate;
@property(readonly) double headingDegrees;
@property(readonly) double accuracy;
@property(retain) CLLocation * fixedLocation;
@property(retain) CLLocation * predictedLocation;
@property double timestamp;
@property(readonly) NSString * shortDescription;
@property double expectedCoordinateUpdateInterval;
@property double expectedHeadingUpdateInterval;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)keyPathsForValuesAffectingSubtitle;
+ (void)_setAnnotationClass:(Class)arg1;
+ (id)title;

- (double)expectedHeadingUpdateInterval;
- (double)expectedCoordinateUpdateInterval;
- (double)headingDegrees;
- (void)_updateCoordinate;
- (id)fixedLocation;
- (void)setExpectedHeadingUpdateInterval:(double)arg1;
- (void)setExpectedCoordinateUpdateInterval:(double)arg1;
- (bool)isEqualToLocation:(id)arg1;
- (void)setPredictedLocation:(id)arg1;
- (id)predictedLocation;
- (bool)isUpdating;
- (void)setFixedLocation:(id)arg1;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (double)accuracy;
- (void)setHeading:(id)arg1;
- (void)setCourse:(double)arg1;
- (void)setUpdating:(bool)arg1;
- (id)location;
- (double)timestamp;
- (id)heading;
- (struct { double x1; double x2; })coordinate;
- (double)course;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setTimestamp:(double)arg1;
- (void)setLocation:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (id)annotation;
- (id)shortDescription;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;

@end
