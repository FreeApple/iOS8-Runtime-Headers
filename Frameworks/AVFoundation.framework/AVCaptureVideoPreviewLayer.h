/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureSession, NSString, AVCaptureVideoPreviewLayerInternal, AVCaptureConnection;

@interface AVCaptureVideoPreviewLayer : CALayer  {
    AVCaptureVideoPreviewLayerInternal *_internal;
}

@property(retain) AVCaptureSession * session;
@property(readonly) AVCaptureConnection * connection;
@property(copy) NSString * videoGravity;
@property(getter=isOrientationSupported,readonly) bool orientationSupported;
@property long long orientation;
@property(getter=isMirroringSupported,readonly) bool mirroringSupported;
@property bool automaticallyAdjustsMirroring;
@property(getter=isMirrored) bool mirrored;

+ (id)layerWithSessionWithNoConnection:(id)arg1;
+ (id)layerWithSession:(id)arg1;
+ (id)alloc;
+ (void)initialize;

- (void)setSinkID:(id)arg1;
- (id)sinkID;
- (long long)orientation;
- (id)transformedMetadataObjectForMetadataObject:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForMetadataObject:(id)arg1;
- (struct CGPoint { double x1; double x2; })pointForCaptureDevicePointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })captureDevicePointOfInterestForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)activeConnections;
- (void)setChromaNoiseReductionEnabled:(bool)arg1;
- (bool)isChromaNoiseReductionEnabled;
- (void)setMirrored:(bool)arg1;
- (bool)isMirrored;
- (void)setAutomaticallyAdjustsMirroring:(bool)arg1;
- (bool)isOrientationSupported;
- (id)_input;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForCaptureDeviceFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setSensorAndEstimatedPreviewSizes;
- (bool)isChromaNoiseReductionSupported;
- (bool)isMirroringSupported;
- (void)_updateCaptureDeviceTransform;
- (bool)_isMirrored;
- (bool)_automaticallyAdjustsMirroring;
- (long long)_orientation;
- (id)videoGravity;
- (void)setSessionWithNoConnection:(id)arg1;
- (void)centerSublayer:(long long)arg1;
- (id)_initWithSession:(id)arg1 makeConnection:(bool)arg2;
- (id)initWithSessionWithNoConnection:(id)arg1;
- (id)initWithSession:(id)arg1;
- (bool)automaticallyAdjustsMirroring;
- (double)previewRotationDegrees;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)removeConnection:(id)arg1;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForMetadataOutputRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })metadataOutputRectOfInterestForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)canAddConnectionForMediaType:(id)arg1;
- (void)setPaused:(bool)arg1;
- (bool)isPaused;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)bumpChangeSeed;
- (int)changeSeed;
- (id)connections;
- (id)connectionMediaTypes;
- (id)liveConnections;
- (void)setVideoGravity:(id)arg1;
- (id)connection;
- (void)layoutSublayers;
- (void)layerDidBecomeVisible:(bool)arg1;
- (id)initWithLayer:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOrientation:(long long)arg1;
- (id)init;
- (void)setSession:(id)arg1;
- (id)session;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
