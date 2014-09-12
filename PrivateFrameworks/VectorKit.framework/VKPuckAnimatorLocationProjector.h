/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class GEORouteMatch;

@interface VKPuckAnimatorLocationProjector : NSObject  {
    GEORouteMatch *_routeMatch;
    GEORouteMatch *_projectedRouteMatch;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _projectedPosition;
    double _projectedCourse;
}

@property(retain) GEORouteMatch * projectedRouteMatch;
@property(readonly) struct VKPoint { double x1; double x2; double x3; } projectedPosition;
@property(readonly) struct { double x1; double x2; } projectedLocation;
@property(readonly) double projectedCourse;
@property(readonly) bool projectedLocationOnRoute;
@property(retain) GEORouteMatch * routeMatch;


- (id)projectedRouteMatch;
- (struct { double x1; double x2; })projectedLocation;
- (void)_updateCourseAndPositionFromRouteMatch;
- (void)setProjectedRouteMatch:(id)arg1;
- (struct VKPoint { double x1; double x2; double x3; })projectedPosition;
- (void)projectFromLocation:(id)arg1 routeMatch:(id)arg2 speedMultiplier:(double)arg3;
- (bool)projectedLocationOnRoute;
- (double)projectedCourse;
- (id)routeMatch;
- (void)setRouteMatch:(id)arg1;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)reset;

@end
