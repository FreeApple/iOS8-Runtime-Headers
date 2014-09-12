/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapEdgeRoadBuilder : GEOMapEdgeBuilder  {
    struct deque<GEORoadEdge, std::__1::allocator<GEORoadEdge> > { 
        struct __split_buffer<GEORoadEdge *, std::__1::allocator<GEORoadEdge *> > { 
            struct { /* ? */ } **__first_; 
            struct { /* ? */ } **__begin_; 
            struct { /* ? */ } **__end_; 
            struct __compressed_pair<GEORoadEdge **, std::__1::allocator<GEORoadEdge *> > { 
                struct { /* ? */ } **__first_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<GEORoadEdge> > { 
            unsigned long long __first_; 
        } __size_; 
    } _edges;
}


- (id)initWithMap:(id)arg1 firstEdge:(const struct { struct { /* ? */ } *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg2;
- (bool)_findEdgeBehindInTile:(id)arg1;
- (bool)_findEdgeAheadInTile:(id)arg1;
- (id)_tileFinderForMap:(id)arg1 center:(struct { double x1; double x2; })arg2 radius:(double)arg3;
- (void)_buildCompleteEdge;
- (id)_lastTile;
- (struct Matrix<float, 2, 1> { float x1[2]; })_lastPoint;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; }*)_lastJunction;
- (id)_firstTile;
- (struct Matrix<float, 2, 1> { float x1[2]; })_firstPoint;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; }*)_firstJunction;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
