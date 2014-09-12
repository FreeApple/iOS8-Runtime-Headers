/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSDictionary, AVCaptureStillImageOutputInternal_FigRecorder, NSArray;

@interface AVCaptureStillImageOutput_FigRecorder : AVCaptureOutput_FigRecorder  {
    AVCaptureStillImageOutputInternal_FigRecorder *_internal;
}

@property(copy) NSDictionary * outputSettings;
@property(readonly) NSArray * availableImageDataCVPixelFormatTypes;
@property(readonly) NSArray * availableImageDataCodecTypes;
@property(getter=isStillImageStabilizationSupported,readonly) bool stillImageStabilizationSupported;
@property bool automaticallyEnablesStillImageStabilizationWhenAvailable;
@property(getter=isStillImageStabilizationActive,readonly) bool stillImageStabilizationActive;
@property(getter=isCapturingStillImage,readonly) bool capturingStillImage;

+ (id)jpegStillImageNSDataRepresentationForBGRASurface:(void*)arg1 size:(unsigned long long)arg2;
+ (struct CGImage { }*)cgImageForBGRASurface:(void*)arg1 size:(unsigned long long)arg2;
+ (id)jpegStillImageNSDataRepresentationForSurface:(void*)arg1 size:(unsigned long long)arg2 metadata:(id)arg3;
+ (id)jpegStillImageNSDataRepresentation:(struct opaqueCMSampleBuffer { }*)arg1;
+ (unsigned long long)maxStillImageJPEGDataSize;
+ (void)initialize;

- (unsigned int)shutterSound;
- (void)handlePhotoTakenForRequest:(id)arg1 info:(id)arg2 imageIsEV0:(bool*)arg3;
- (void)configureAndInitiateCopyStillImageForRequest:(id)arg1;
- (void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)arg1 completionHandler:(id)arg2;
- (void)captureStillImageAsynchronouslyFromConnection:(id)arg1 completionHandler:(id)arg2;
- (id)firstActiveConnection;
- (bool)isCapturingStillImage;
- (bool)resumeVideoProcessing;
- (void)setSuspendsVideoProcessingDuringStillImageCapture:(bool)arg1;
- (bool)suspendsVideoProcessingDuringStillImageCapture;
- (void)setRawCaptureEnabled:(bool)arg1;
- (bool)isNoiseReductionEnabled;
- (void)setAutomaticallyEnablesStillImageStabilizationWhenAvailable:(bool)arg1;
- (bool)isStillImageStabilizationActive;
- (void)setEV0CaptureEnabled:(bool)arg1;
- (bool)isEV0CaptureEnabled;
- (void)setHDRCaptureEnabled:(bool)arg1;
- (bool)isHDRCaptureEnabled;
- (long long)HDRMode;
- (void)setPreviewImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSquareCropEnabled:(bool)arg1;
- (void)setOutputSettings:(id)arg1;
- (void)setHDRMode:(long long)arg1;
- (void)setShutterSound:(unsigned int)arg1;
- (void)setNoiseReductionEnabled:(bool)arg1;
- (bool)isRawCaptureSupported;
- (bool)isStillImageStabilizationSupported;
- (bool)isRawCaptureEnabled;
- (id)availableImageDataCodecTypes;
- (id)availableImageDataCVPixelFormatTypes;
- (bool)automaticallyEnablesStillImageStabilizationWhenAvailable;
- (void)updateSISSupportedForSourceDevice:(id)arg1;
- (id)outputSettings;
- (unsigned int)imageDataFormatType;
- (struct CGSize { double x1; double x2; })previewImageSize;
- (bool)squareCropEnabled;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)removeConnection:(id)arg1;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (bool)isHDRSupported;
- (id)connectionMediaTypes;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (id)init;
- (bool)isKindOfClass:(Class)arg1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
