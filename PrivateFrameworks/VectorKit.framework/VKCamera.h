/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <VKCameraDelegate>, VKViewVolume, VKFootprint;

@interface VKCamera : NSObject  {
    <VKCameraDelegate> *_delegate;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _position;
    struct { 
        double v[4][4]; 
    } _orientation;
    float _aspectRatio;
    float _verticalFieldOfView;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _puckPosition;
    struct { 
        boolorthographic; 
        double width; 
        double height; 
        double near; 
        double far; 
    } _frustum;
    double _minHeight;
    double _maxHeight;
    double _maxPitch;
    double _terrainHeight;
    double _maxFarClipDistance;
    bool_needsUpdate;
    bool_updating;
    int _updateNumber;
    struct { 
        double v[4][4]; 
    } _viewProjectionMatrix;
    struct { 
        double v[4][4]; 
    } _projectionMatrix;
    struct { 
        double v[4][4]; 
    } _viewMatrix;
    struct { 
        double v[4][4]; 
    } _viewMatrixUnscaled;
    struct { 
        double v[4][4]; 
    } _projectionMatrixUnscaled;
    struct { 
        double v[4][4]; 
    } _projectionMatrixUnscaledWithoutOffset;
    struct { 
        double v[4][4]; 
    } _viewProjectionMatrixUnscaled;
    struct { 
        double v[4][4]; 
    } _worldMatrix;
    VKViewVolume *_viewVolume;
    VKFootprint *_footprint;
    double _tanHalfHorizFOV;
    double _tanHalfVerticalFOV;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    } _forward;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    } _right;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    } _up;
    double _fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
    double _distanceToGroundAndFarClipPlaneIntersection;
    double _screenHeightOfGroundAndFarClipPlaneIntersection;
    bool_allowDatelineWraparound;
    double _canonicalPitch;
    double _horizontalOffset;
    struct Matrix<double, 3, 1> { 
        double _e[3]; 
    } _gmPosition;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    } _gmViewMatrix;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    } _gmProjectionMatrix;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    } _gmViewProjectionMatrix;
    struct Matrix<double, 4, 4> { 
        double _e[16]; 
    } _gmWorldMatrix;
    double _maxHeightNoPitch;
}

@property(readonly) const /* Warning: unhandled struct encoding: '{Matrix<double' */ struct * gmPosition; /* unknown property attribute:  1>=[3d]} */
@property(readonly) const struct * gmViewProjectionMatrix; /* unknown property attribute:  4>=[16d]} */
@property(readonly) const struct * gmProjectionMatrix; /* unknown property attribute:  4>=[16d]} */
@property(readonly) const struct * gmViewMatrix; /* unknown property attribute:  4>=[16d]} */
@property(readonly) struct  gmUpVector; /* unknown property attribute:  1>=[4d]} */
@property(readonly) struct  gmRightVector; /* unknown property attribute:  1>=[4d]} */
@property(readonly) struct  gmForwardVector; /* unknown property attribute:  1>=[4d]} */
@property(readonly) struct { boolx1; double x2; double x3; double x4; double x5; } frustum;
@property struct VKPoint { double x1; double x2; double x3; } position;
@property struct VKPoint { double x1; double x2; double x3; } puckPosition;
@property const struct { double x1[4][4]; }* orientation;
@property float aspectRatio;
@property(readonly) float horizontalFieldOfView;
@property float verticalFieldOfView;
@property(readonly) double farClipDistance;
@property(readonly) double nearClipDistance;
@property struct VKCameraState { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1[4][4]; } x2; float x3; float x4; } cameraState;
@property(readonly) int updateNumber;
@property double minHeight;
@property double maxHeight;
@property double maxHeightNoPitch;
@property double maxPitch;
@property double terrainHeight;
@property(readonly) const struct { double x1[4][4]; }* viewProjectionMatrix;
@property(readonly) const struct { double x1[4][4]; }* projectionMatrix;
@property(readonly) const struct { double x1[4][4]; }* viewMatrix;
@property(readonly) const struct { double x1[4][4]; }* viewProjectionMatrixUnscaled;
@property(readonly) const struct { double x1[4][4]; }* projectionMatrixUnscaled;
@property(readonly) const struct { double x1[4][4]; }* projectionMatrixUnscaledWithoutOffset;
@property(readonly) const struct { double x1[4][4]; }* viewMatrixUnscaled;
@property(readonly) const struct { double x1[4][4]; }* worldMatrix;
@property(readonly) VKViewVolume * viewVolume;
@property(readonly) VKFootprint * footprint;
@property(readonly) struct  upVector; /* unknown property attribute:  1>=[3d]} */
@property(readonly) struct  rightVector; /* unknown property attribute:  1>=[3d]} */
@property(readonly) struct  forwardVector; /* unknown property attribute:  1>=[3d]} */
@property(readonly) struct VKPoint { double x1; double x2; double x3; } groundPoint;
@property(readonly) double pitch;
@property(readonly) double yaw;
@property(readonly) double tanHalfHorizFOV;
@property(readonly) double tanHalfVerticalFOV;
@property(readonly) double distanceToGroundAndFarClipPlaneIntersection;
@property(readonly) double screenHeightOfGroundAndFarClipPlaneIntersection;
@property <VKCameraDelegate> * delegate;
@property double fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
@property bool allowDatelineWraparound;
@property double canonicalPitch;
@property double horizontalOffset;


- (struct Matrix<double, 3, 1> { double x1[3]; })gmGroundPointFromScreenPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct Matrix<double, 4, 1> { double x1[4]; })gmForwardVector;
- (struct Matrix<double, 4, 1> { double x1[4]; })gmRightVector;
- (struct Matrix<double, 4, 1> { double x1[4]; })gmUpVector;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)gmViewMatrix;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)gmProjectionMatrix;
- (const struct Matrix<double, 4, 4> { double x1[16]; }*)gmViewProjectionMatrix;
- (const struct Matrix<double, 3, 1> { double x1[3]; }*)gmPosition;
- (struct Matrix<double, 3, 1> { double x1[3]; })gmGroundPointFromScreenPoint:(struct CGPoint { double x1; double x2; })arg1 atGroundLevel:(double)arg2;
- (void)setPuckPosition:(struct VKPoint { double x1; double x2; double x3; })arg1;
- (struct VKPoint { double x1; double x2; double x3; })puckPosition;
- (double)horizontalOffset;
- (void)setCanonicalPitch:(double)arg1;
- (double)canonicalPitch;
- (void)setAllowDatelineWraparound:(bool)arg1;
- (bool)allowDatelineWraparound;
- (double)screenHeightOfGroundAndFarClipPlaneIntersection;
- (double)distanceToGroundAndFarClipPlaneIntersection;
- (void)setFractionOfScreenAboveFarClipPlaneAtCanonicalPitch:(double)arg1;
- (double)fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
- (int)updateNumber;
- (void)setTerrainHeight:(double)arg1;
- (double)terrainHeight;
- (void)setMaxPitch:(double)arg1;
- (double)maxPitch;
- (void)setMaxHeightNoPitch:(double)arg1;
- (double)maxHeightNoPitch;
- (float)aspectRatio;
- (struct { boolx1; double x2; double x3; double x4; double x5; })frustum;
- (double)depthForViewWidth:(double)arg1;
- (struct VKPoint { double x1; double x2; double x3; })groundPointFromScreenPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct VKPoint { double x1; double x2; double x3; })groundPlaneIntersectionPoint;
- (bool)isOuterWorldBoundsVisible;
- (float)maximumStyleZForRect:(const struct { double x1; double x2; double x3; double x4; }*)arg1;
- (bool)hasChangedState:(struct VKCameraState { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1[4][4]; } x2; float x3; float x4; }*)arg1;
- (void)setCameraState:(struct VKCameraState { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1[4][4]; } x2; float x3; float x4; })arg1;
- (double)displayZoomLevel;
- (struct VKPoint { double x1; double x2; double x3; })groundPoint;
- (struct Matrix<double, 3, 1> { double x1[3]; })upVector;
- (id)footprint;
- (id)viewVolume;
- (const struct { double x1[4][4]; }*)worldMatrix;
- (const struct { double x1[4][4]; }*)projectionMatrixUnscaled;
- (const struct { double x1[4][4]; }*)projectionMatrixUnscaledWithoutOffset;
- (const struct { double x1[4][4]; }*)viewProjectionMatrixUnscaled;
- (const struct { double x1[4][4]; }*)viewMatrixUnscaled;
- (const struct { double x1[4][4]; }*)viewMatrix;
- (const struct { double x1[4][4]; }*)projectionMatrix;
- (const struct { double x1[4][4]; }*)viewProjectionMatrix;
- (double)tanHalfVerticalFOV;
- (double)nearClipDistance;
- (float)horizontalFieldOfView;
- (void)setVerticalFieldOfView:(float)arg1;
- (void)setAspectRatio:(float)arg1;
- (void)_setPosition:(struct VKPoint { double x1; double x2; double x3; })arg1;
- (void)logCameraState;
- (void)setHorizontalOffset:(double)arg1;
- (double)tanHalfHorizFOV;
- (struct VKPoint { double x1; double x2; double x3; })groundPointFromScreenPoint:(struct CGPoint { double x1; double x2; })arg1 atGroundLevel:(double)arg2;
- (struct Matrix<double, 3, 1> { double x1[3]; })rightVector;
- (double)farClipDistance;
- (float)verticalFieldOfView;
- (void)adjustClipPlanes;
- (id)annotationCoordinateTest;
- (id)annotationRectTest;
- (bool)isWorldSpaceRectVisible:(const struct { double x1; double x2; double x3; double x4; }*)arg1;
- (struct VKCameraState { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct { double x_2_1_1[4][4]; } x2; float x3; float x4; })cameraState;
- (double)widthOfViewAtDepth:(double)arg1;
- (struct Matrix<double, 3, 1> { double x1[3]; })forwardVector;
- (const struct { double x1[4][4]; }*)orientation;
- (void)updateIfNeeded;
- (void)setNeedsUpdate;
- (double)maxHeight;
- (double)minHeight;
- (double)yaw;
- (double)pitch;
- (void)setMinHeight:(double)arg1;
- (void)setMaxHeight:(double)arg1;
- (void)setPosition:(struct VKPoint { double x1; double x2; double x3; })arg1;
- (void)setOrientation:(const struct { double x1[4][4]; }*)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id).cxx_construct;
- (id)description;
- (struct VKPoint { double x1; double x2; double x3; })position;

@end
