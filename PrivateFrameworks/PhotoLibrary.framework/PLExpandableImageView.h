/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString, PLManagedAsset, PLImageView, PLVideoView;

@interface PLExpandableImageView : PLExpandableView  {
    PLImageView *_imageView;
    int _imageID;
    struct CGSize { 
        double width; 
        double height; 
    } _originalSize;
    double _originalWidth;
    double _originalAngle;
    struct CGPoint { 
        double x; 
        double y; 
    } _anchorPoint;
    double _imageRotationAngle;
    double _pinchWidth;
    double _pinchAngle;
    double _pinchScale;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _initialExpandingFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _originalBounds;
    float _currentAngle;
    struct CGSize { 
        double width; 
        double height; 
    } _centerOffset;
    PLManagedAsset *_photo;
    struct { 
        unsigned int isRotating : 1; 
        unsigned int didTrack : 1; 
        unsigned int updateFrame : 1; 
        unsigned int didLayout : 1; 
        unsigned int alwaysDoLayout : 1; 
        unsigned int didComputeCenterOffset : 1; 
        unsigned int imageIsFullScreen : 1; 
    } _exImageFlags;
}

@property(copy) NSString * name;
@property(readonly) struct CGSize { double x1; double x2; } imageSize;
@property(retain) PLVideoView * videoView;
@property(readonly) bool showsPlaceholder;
@property(getter=isBorderAndAccessoriesVisible) bool borderAndAccessoriesVisible;
@property(retain) PLManagedAsset * photo;

+ (double)imageBorderWidth;

- (bool)isBeingManipulated;
- (double)imageRotationAngle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfImage;
- (void)renderSnapshotInContext:(struct CGContext { }*)arg1;
- (void)setTextBadgeString:(id)arg1;
- (bool)isShadowEnabled;
- (void)setShadowEnabled:(bool)arg1;
- (void)setShowsPlaceholder:(bool)arg1;
- (bool)showsPlaceholder;
- (void)setFullSizeImageJPEGData:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 orientation:(long long)arg3;
- (void)setPosterImage:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setImage:(id)arg1 isFullscreen:(bool)arg2;
- (bool)isBorderAndAccessoriesVisible;
- (void)setTransformAndCenterForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_bounceBack:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_bounceToPlace:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_snappedExpandedFrame;
- (float)_expandedScale;
- (float)_currentScale;
- (struct CGSize { double x1; double x2; })_newSizeFromSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1 angle:(float)arg2;
- (void)_updateBorderAndAccessoriesAlpha;
- (void)_updatePinchWidthAndScaleWithLeftPoint:(struct CGPoint { double x1; double x2; })arg1 rightPoint:(struct CGPoint { double x1; double x2; })arg2;
- (float)_borderAlphaForExpansionFraction:(float)arg1;
- (void)_setOriginalSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 frameStyle:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 frameStyle:(int)arg2 withBorder:(bool)arg3;
- (void)setBorderAndAccessoriesVisible:(bool)arg1;
- (float)_expansionFraction;
- (void)finishTransition;
- (float)completeTrackingPinch:(id)arg1 toState:(int)arg2 duration:(double)arg3;
- (float)continueTrackingPinch:(id)arg1;
- (void)beginTrackingPinch:(id)arg1;
- (void)stateDidChangeFrom:(int)arg1;
- (void)setPhoto:(id)arg1;
- (void)setVideoView:(id)arg1;
- (id)videoView;
- (void)setName:(id)arg1;
- (id)photo;
- (id)_contentView;
- (struct CGSize { double x1; double x2; })imageSize;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (id)name;
- (void)dealloc;
- (double)transitionProgress;
- (void)setTransitionProgress:(double)arg1;
- (id)imageView;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
