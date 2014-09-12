/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEOMapAccess, GEOMapTileFinder;

@interface GEOMapEdgeBuilder : GEOMapRequest  {
    bool_buildAhead;
    bool_buildBehind;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    } _firstTilePoint;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    } _lastTilePoint;
    GEOMapTileFinder *_currentTileFinder;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _edgeHandler;

    struct unordered_set<_GEOTileKey, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<_GEOTileKey> > { 
        struct __hash_table<_GEOTileKey, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<_GEOTileKey> > { 
            struct unique_ptr<std::__1::__hash_node<_GEOTileKey, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_GEOTileKey, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<_GEOTileKey, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_GEOTileKey, void *> *> > > { 
                    struct __hash_node<_GEOTileKey, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<_GEOTileKey, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<_GEOTileKey, void *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_GEOTileKey, void *> *>, std::__1::allocator<std::__1::__hash_node<_GEOTileKey, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<_GEOTileKey, void *> *> { 
                    struct __hash_node<_GEOTileKey, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::hash<GEOTileKey> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::equal_to<GEOTileKey> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    } _tileKeysSeen;
    bool_searchDirection;
}

@property(copy) id edgeHandler;
@property(readonly) GEOMapAccess * map;


- (id)edgeHandler;
- (bool)_edgeStart:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg1 end:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg2 connectsTo:(const struct { double x1; double x2; }*)arg3 rect:(const struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (bool)_pointConnects:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg1 rect:(const struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 to:(const struct { double x1; double x2; }*)arg3;
- (void)buildEdge:(id)arg1;
- (id)initWithMap:(id)arg1;
- (bool)_findEdgeBehindInTile:(id)arg1;
- (bool)_findEdgeAheadInTile:(id)arg1;
- (id)_tileFinderForMap:(id)arg1 center:(struct { double x1; double x2; })arg2 radius:(double)arg3;
- (id)map;
- (bool)_findNextEdge;
- (void)_buildCompleteEdge;
- (bool)_findEdgeBehind;
- (bool)_findEdgeAhead;
- (id)_lastTile;
- (struct Matrix<float, 2, 1> { float x1[2]; })_lastPoint;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; }*)_lastJunction;
- (void)_findTilesAdjacentToTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 containingPoint:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg2 findAhead:(bool)arg3;
- (id)_firstTile;
- (struct Matrix<float, 2, 1> { float x1[2]; })_firstPoint;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; }*)_firstJunction;
- (void)setEdgeHandler:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
