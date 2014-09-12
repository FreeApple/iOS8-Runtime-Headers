/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKStyleManager, NSArray, VKSharedResources, NSMutableArray, GEOVectorTile;

@interface VK3DObjectSubTile : NSObject  {
    NSMutableArray *_objectGroups;
    GEOVectorTile *_modelTile;
    VKStyleManager *_styleManager;
    VKSharedResources *_sharedResources;
    long long _vectorType;
    double _contentScale;
    struct vector<VKBuildingHeightMap, std::__1::allocator<VKBuildingHeightMap> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<VKBuildingHeightMap *, std::__1::allocator<VKBuildingHeightMap> > { 
            struct { /* ? */ } *__first_; 
        } __end_cap_; 
    } _heights;
}

@property(copy) NSArray * objectGroups;
@property(retain) GEOVectorTile * modelTile;
@property(retain) VKStyleManager * styleManager;
@property(retain) VKSharedResources * sharedResources;
@property double contentScale;


- (bool)_createMeshForObjects:(struct { struct { id x_1_1_1; char *x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; boolx_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; char *x2; unsigned long long x3; }*)arg1 count:(unsigned long long)arg2;
- (void)_read3DObjects:(struct vector<GEO3DBuildingFeature, std::__1::allocator<GEO3DBuildingFeature> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<GEO3DBuildingFeature *, std::__1::allocator<GEO3DBuildingFeature> > { struct { /* ? */ } *x_3_1_1; } x3; }*)arg1 fromDiskForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2;
- (void)setObjectGroups:(id)arg1;
- (void)fillShadowAreasInContext:(struct CGContext { }*)arg1;
- (struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; })shadowBounds;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 modelTile:(id)arg2 styleManager:(id)arg3 sharedResources:(id)arg4 contentScale:(double)arg5;
- (id)objectGroups;
- (bool)heightAtPoint:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg1 outZ:(float*)arg2;
- (id)modelTile;
- (void)setModelTile:(id)arg1;
- (void)setSharedResources:(id)arg1;
- (id)sharedResources;
- (void)setStyleManager:(id)arg1;
- (id)styleManager;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (double)contentScale;
- (void)setContentScale:(double)arg1;

@end
