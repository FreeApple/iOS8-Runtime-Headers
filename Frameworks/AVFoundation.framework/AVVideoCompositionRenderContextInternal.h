/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, NSDictionary, NSObject<OS_dispatch_queue>, AVVideoComposition;

@interface AVVideoCompositionRenderContextInternal : NSObject  {
    NSDictionary *_basisProperties;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } _renderTransform;
    float _renderScale;
    struct { 
        long long horizontalSpacing; 
        long long verticalSpacing; 
    } _pixelAspectRatio;
    struct { 
        double left; 
        double top; 
        double right; 
        double bottom; 
    } _edgeWidths;
    bool_highQualityRendering;
    NSDictionary *_clientRequiredPixelBufferAttributes;
    NSDictionary *_destinationDesiredPixelBufferAttributes;
    NSString *_destinationDesiredPixelBufferYCbCrMatrix;
    NSString *_destinationDesiredPixelBufferColorPrimaries;
    NSString *_destinationDesiredPixelBufferTransferFunction;
    int pixelFormatFamily;
    struct __CFDictionary { } *_pixelAspectRatioDict;
    struct __CFDictionary { } *_cleanApertureDict;
    struct { 
        int width; 
        int height; 
    } _destinationPixelBufferDimensions;
    NSObject<OS_dispatch_queue> *_pixelBufferPoolQ;
    struct __CVPixelBufferPool { } *_pixelBufferPool;
    AVVideoComposition *_videoComposition;
}


- (void)_willDeallocOrFinalize;
- (void)finalize;
- (void)dealloc;

@end
