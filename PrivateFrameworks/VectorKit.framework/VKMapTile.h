/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKTile, VKRasterTile;

@interface VKMapTile : VKTile <NSCopying> {
    VKTile *_tiles[34];
    unsigned long long _states[34];
    double _stateDates[34];
    id _stateMetas[34];
    struct { 
        float x0; 
        float x1; 
        float y0; 
        float y1; 
    } _localBounds[34];
    VKRasterTile *_rasterized;
    bool_needsRasterization;
    float _maximumStyleZ;
    struct shared_ptr<vk::LabelMapTile> { 
        struct LabelMapTile {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _labelMapTile;
}

@property(readonly) float maximumStyleZ;
@property(retain) VKRasterTile * rasterized;
@property bool needsRasterization;
@property struct shared_ptr<vk::LabelMapTile> { struct LabelMapTile {} *x1; struct __shared_weak_count {} *x2; } labelMapTile;


- (struct { float x1; float x2; float x3; float x4; })localBoundsForLayer:(unsigned long long)arg1;
- (void)_setTile:(id)arg1 state:(unsigned long long)arg2 metadata:(id)arg3 forLayer:(unsigned long long)arg4 timestamp:(double)arg5;
- (bool)needsRasterization;
- (void)setNeedsRasterization:(bool)arg1;
- (void)setTile:(id)arg1 state:(unsigned long long)arg2 metadata:(id)arg3 forLayer:(unsigned long long)arg4;
- (unsigned long long)tileStateForLayer:(unsigned long long)arg1;
- (void)setRasterized:(id)arg1;
- (void)setLabelMapTile:(struct shared_ptr<vk::LabelMapTile> { struct LabelMapTile {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (struct shared_ptr<vk::LabelMapTile> { struct LabelMapTile {} *x1; struct __shared_weak_count {} *x2; })labelMapTile;
- (id)rasterized;
- (float)maximumStyleZ;
- (id)tileForLayer:(unsigned long long)arg1;
- (id)detailedDescription;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1;
- (void)updateViewDependentStateWithContext:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
