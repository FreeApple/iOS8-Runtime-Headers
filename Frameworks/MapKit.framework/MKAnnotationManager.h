/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSTimer, <MKAnnotationMarkerContainer>, NSArray, <MKAnnotationManagerDelegate>, MKQuadTrie, <MKAnnotationRepresentation>, NSMutableSet, NSMapTable, <MKAnnotation>;

@interface MKAnnotationManager : NSObject  {
    <MKAnnotationMarkerContainer> *_container;
    <MKAnnotationManagerDelegate> *_delegate;
    bool_annotationRepresentationsAreAddedImmediately;
    NSTimer *_updateVisibleTimer;
    MKQuadTrie *_annotations;
    NSMutableSet *_visibleAnnotations;
    NSMutableSet *_pendingAnnotations;
    NSMutableSet *_disallowAnimationAnnotations;
    NSMutableSet *_invalidCoordinateAnnotations;
    <MKAnnotation> *_selectedAnnotation;
    <MKAnnotation> *_draggedAnnotation;
    NSMapTable *_annotationsToRepresentations;
    NSMutableSet *_annotationRepresentations;
    NSMapTable *_reusableAnnotationRepresentations;
    NSMutableSet *_managedAnnotations;
    NSMutableSet *_managedAnnotationsObservingCoordinate;
    bool_isChangingCoordinate;
}

@property <MKAnnotationMarkerContainer> * container;
@property <MKAnnotationManagerDelegate> * delegate;
@property bool annotationRepresentationsAreAddedImmediately;
@property <MKAnnotation> * draggedAnnotation;
@property(readonly) <MKAnnotationRepresentation> * selectedAnnotationRepresentation;
@property(readonly) NSArray * annotationRepresentations;
@property(readonly) NSArray * annotations;


- (void)setDraggedAnnotation:(id)arg1;
- (id)draggedAnnotation;
- (void)removeRepresentationForManagedAnnotation:(id)arg1;
- (id)addRepresentationForManagedAnnotation:(id)arg1 notifyDelegate:(bool)arg2;
- (void)addManagedAnnotation:(id)arg1;
- (id)_addRepresentationForAnnotation:(id)arg1;
- (void)_removeAnnotation:(id)arg1 updateVisible:(bool)arg2 removeFromContainer:(bool)arg3;
- (void)_removeRepresentationForAnnotation:(id)arg1 fromCull:(bool)arg2;
- (void)_addAnnotation:(id)arg1 updateVisible:(bool)arg2;
- (void)_setupUpdateVisibleAnnotationsTimer;
- (void)addManagedAnnotation:(id)arg1 observeCoordinateChanges:(bool)arg2;
- (id)newInternalAnnotationRepresentationForInternalAnnotation:(id)arg1;
- (bool)annotationIsInternal:(id)arg1;
- (void)cleanUpAnnotationRepresentationForRemoval:(id)arg1;
- (void)configureAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2;
- (void)configureDefaultAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2;
- (id)newDefaultAnnotationRepresentationForAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (bool)internalAnnotationAllowsCustomRepresentation:(id)arg1;
- (bool)containsAnnotation:(id)arg1;
- (id)representationForAnnotation:(id)arg1;
- (id)dequeueReusableAnnotationRepresentationWithIdentifier:(id)arg1;
- (void)addRepresentationsForAnnotations:(id)arg1;
- (void)replaceAnnotation:(id)arg1 withAnnotation:(id)arg2;
- (void)removeAnnotations:(id)arg1;
- (void)addAnnotation:(id)arg1 allowAnimation:(bool)arg2;
- (id)annotationRepresentations;
- (id)annotationsInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)addAnnotations:(id)arg1;
- (void)showAnnotationsInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)selectedAnnotationRepresentation;
- (void)selectAnnotation:(id)arg1 animated:(bool)arg2 avoid:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)deselectAnnotation:(id)arg1 animated:(bool)arg2;
- (void)selectAnnotation:(id)arg1 animated:(bool)arg2;
- (void)updateVisibleAnnotations;
- (void)setAnnotationRepresentationsAreAddedImmediately:(bool)arg1;
- (bool)annotationRepresentationsAreAddedImmediately;
- (void)removeAnnotation:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (id)annotations;
- (id)init;
- (void)setContainer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)container;
- (id)delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
