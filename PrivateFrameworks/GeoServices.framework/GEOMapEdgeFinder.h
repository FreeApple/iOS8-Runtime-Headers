/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEOMapAccess, NSMutableSet, GEOMapTileFinder;

@interface GEOMapEdgeFinder : GEOMapRequest  {
    GEOMapTileFinder *_tileFinder;
    struct { 
        double x; 
        double y; 
    } _centerPoint;
    double _mapRadius;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _edgeHandler;

    NSMutableSet *_edgeBuilders;
}

@property(readonly) GEOMapAccess * map;
@property(copy) id edgeHandler;


- (void)findEdges:(id)arg1;
- (id)initWithMap:(id)arg1 center:(struct { double x1; double x2; })arg2 radius:(double)arg3;
- (void)_buildersInTile:(id)arg1 localPoint:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg2 localRadiusSqr:(float)arg3 localSearch:(const struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; }*)arg4 handler:(id)arg5;
- (bool)_checkEdgeForDuplicates:(const struct shared_ptr<geo::MapEdge> { struct MapEdge {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (id)edgeHandler;
- (id)map;
- (void)setEdgeHandler:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id).cxx_construct;

@end
