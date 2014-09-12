/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class VKAnnotationMarker, NSString, NSArray, VKMapModel, NSMutableSet, NSMutableArray, VKStyleManager;

@interface VKAnnotationModel : VKModelObject <VKMapLayer, VKStyleManagerObserver> {
    NSMutableArray *_annotationMarkers;
    VKAnnotationMarker *_selectedAnnotationMarker;
    NSMutableSet *_animatingMarkers;
    NSMutableArray *_markersToAnimate;
    VKAnnotationMarker *_draggingAnnotationMarker;
    bool_didDragMarker;
    bool_hasEverDrawnSomething;
    struct { 
        int from; 
        int to; 
        unsigned long long fromDisplayStyle; 
        unsigned long long toDisplayStyle; 
        float fraction; 
    } _styleTransitionState;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _annotationMarkerDeselectionCallback;

    VKMapModel *_mapModel;
}

@property struct { int x1; int x2; unsigned long long x3; unsigned long long x4; float x5; } styleTransitionState;
@property(readonly) NSArray * annotationMarkers;
@property(readonly) VKAnnotationMarker * selectedAnnotationMarker;
@property(readonly) bool needsLayout;
@property(copy) id annotationMarkerDeselectionCallback;
@property VKMapModel * mapModel;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) VKStyleManager * styleManager;

+ (bool)reloadOnStylesheetChange;

- (void)anchorPositionChangedForMarker:(id)arg1;
- (id)mapModel;
- (unsigned long long)mapLayerPosition;
- (void)stylesheetDidChange;
- (struct { int x1; int x2; unsigned long long x3; unsigned long long x4; float x5; })styleTransitionState;
- (void)setStyleTransitionState:(struct { int x1; int x2; unsigned long long x3; unsigned long long x4; float x5; })arg1;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (bool)shouldLayoutWithoutStyleManager;
- (id)annotationMarkerForSelectionAtPoint:(struct VKPoint { double x1; double x2; double x3; })arg1 avoidCurrent:(bool)arg2 canvasSize:(struct CGSize { double x1; double x2; })arg3;
- (void)setMapModel:(id)arg1;
- (void)deselectAnnotationMarker:(id)arg1;
- (void)selectAnnotationMarker:(id)arg1;
- (void)addAnnotationMarker:(id)arg1 allowAnimation:(bool)arg2;
- (void)removeAnnotationMarker:(id)arg1;
- (id)selectedAnnotationMarker;
- (void)setAnnotationMarkerDeselectionCallback:(id)arg1;
- (id)annotationMarkerDeselectionCallback;
- (id)annotationMarkers;
- (id)styleManager;
- (id)annotationCoordinateTest;
- (id)annotationRectTest;
- (bool)needsLayout;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;

@end
