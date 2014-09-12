/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class NSDictionary;

@interface CAMEffectsGridView : CAMGLView  {
    bool_square;
    bool__fetchingGridFilters;
    bool__atomicBlackAndWhite;
    NSDictionary *__gridFilters;
}

@property(getter=isSquare) bool square;
@property(getter=isBlackAndWhite) bool blackAndWhite;
@property(setter=_setGridFilters:,retain) NSDictionary * _gridFilters;
@property(setter=_setFetchingGridFilters:) bool _fetchingGridFilters;
@property(getter=_isAtomicBlackAndWhite,setter=_setAtomicBlackAndWhite:) bool _atomicBlackAndWhite;


- (void)setSquare:(bool)arg1;
- (unsigned long long)filterIndexForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setupGridFiltersIfNecessary;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_squareCropFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_renderGridFilters:(id)arg1 withInputImage:(id)arg2 ciContext:(id)arg3 mirrorRendering:(bool)arg4;
- (void)renderPixelBuffer:(struct __CVBuffer { }*)arg1 ciContext:(id)arg2 mirrorRendering:(bool)arg3;
- (bool)isSquare;
- (unsigned long long)_gridIndexForFilterIndex:(unsigned long long)arg1;
- (unsigned long long)_cellsPerRow;
- (bool)isBlackAndWhite;
- (unsigned long long)_filterIndexForGridIndex:(unsigned long long)arg1;
- (unsigned long long)_cellCount;
- (void)_setFetchingGridFilters:(bool)arg1;
- (bool)_fetchingGridFilters;
- (id)_gridFilters;
- (void)_setGridFilters:(id)arg1;
- (void)_setAtomicBlackAndWhite:(bool)arg1;
- (bool)_isAtomicBlackAndWhite;
- (id)filterIndices;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForFilterIndex:(unsigned long long)arg1;
- (void)setBlackAndWhite:(bool)arg1;
- (void)dealloc;
- (void).cxx_destruct;

@end
