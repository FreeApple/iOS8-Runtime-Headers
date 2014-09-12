/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSTimer, NSMutableArray, NSArray;

@interface MKPlaceHeaderBackgroundView_Slideshow : MKPlaceHeaderBackgroundView  {
    NSTimer *_timer;
    NSMutableArray *_images;
    long long _nextImageIndex;
    unsigned long long _iteration;
    NSArray *_slides;
    struct { 
        unsigned int hasMultiplePhotos; 
        unsigned int isFirstImageRequested; 
        unsigned int isFirstImagePreloaded; 
    } _slideShowFlags;
}

+ (bool)canDisplayImagesForMapItem:(id)arg1;

- (id)currentSlide;
- (id)nextSlide;
- (void)startBackgroundAnimation;
- (void)loadBackgroundContent;
- (void)preloadBackgroundContent;
- (void)clearSlideShowImages;
- (void)showNextImage;
- (void)loadBusinessImages:(unsigned long long)arg1;
- (void)addSlideShowImage:(id)arg1;
- (void)pauseBackgroundAnimation;
- (void)prepareForPresentation;
- (void)resume;
- (void)pause;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (void)present;

@end
