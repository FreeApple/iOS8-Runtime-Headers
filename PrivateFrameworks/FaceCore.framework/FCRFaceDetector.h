/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSObject;

@interface FCRFaceDetector : NSObject  {
    void *api;
    NSObject *lock;
}

+ (id)keypointTrackingDetector;
+ (id)standardTrackingDetector;
+ (id)preciseFaceDetector;
+ (id)fastFaceDetector;
+ (id)faceDetector;
+ (id)faceDetectorWithOptions:(id)arg1;
+ (int)findProfileInParameters:(id)arg1;

- (float)compareFace:(id)arg1 toFace:(id)arg2 error:(id*)arg3;
- (id)extractDetailsForFaces:(id)arg1 inCGImage:(struct CGImage { }*)arg2 options:(id)arg3 error:(id*)arg4;
- (id)detectFacesInCGImage:(struct CGImage { }*)arg1 options:(id)arg2 error:(id*)arg3;
- (id)transformROIs:(id)arg1 image:(id)arg2 usingBlock:(id)arg3;
- (id)parseNumericOrBoolValue:(id)arg1;
- (id)parseOption:(id)arg1 value:(id)arg2;
- (void)addLandmarkOfType:(id)arg1 fromMesh:(struct vector<vision::lib::coord, std::__1::allocator<vision::lib::coord> > { struct coord {} *x1; struct coord {} *x2; struct __compressed_pair<vision::lib::coord *, std::__1::allocator<vision::lib::coord> > { struct coord {} *x_3_1_1; } x3; }*)arg2 indexes:(id)arg3 to:(id)arg4 image:(id)arg5;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })makeYFlippedRectFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 image:(id)arg2;
- (struct CGPoint { double x1; double x2; })makeYFlippedPointFromCoord:(struct coord { int x1; int x2; }*)arg1 image:(id)arg2;
- (float)interpretAsFloat:(id)arg1 withDefault:(float)arg2;
- (struct coord { int x1; int x2; })makeYFlippedCoordFromPoint:(struct CGPoint { double x1; double x2; })arg1 image:(id)arg2;
- (void)updateFCRFace:(id)arg1 from:(struct face { int x1; struct coord { int x_2_1_1; int x_2_1_2; } x2; struct coord { int x_3_1_1; int x_3_1_2; } x3; struct coord { int x_4_1_1; int x_4_1_2; } x4; struct coord { int x_5_1_1; int x_5_1_2; } x5; float x6; int x7; int x8; struct vector<double, std::__1::allocator<double> > { double *x_9_1_1; double *x_9_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_9_1_3; } x9; int x10; struct vector<vision::lib::coord, std::__1::allocator<vision::lib::coord> > { struct coord {} *x_11_1_1; struct coord {} *x_11_1_2; struct __compressed_pair<vision::lib::coord *, std::__1::allocator<vision::lib::coord> > { struct coord {} *x_3_2_1; } x_11_1_3; } x11; int x12; boolx13; boolx14; float x15; float x16; boolx17; float x18; boolx19; float x20; struct naturalSmileData {} *x21; }*)arg2 image:(id)arg3;
- (struct face { int x1; struct coord { int x_2_1_1; int x_2_1_2; } x2; struct coord { int x_3_1_1; int x_3_1_2; } x3; struct coord { int x_4_1_1; int x_4_1_2; } x4; struct coord { int x_5_1_1; int x_5_1_2; } x5; float x6; int x7; int x8; struct vector<double, std::__1::allocator<double> > { double *x_9_1_1; double *x_9_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_9_1_3; } x9; int x10; struct vector<vision::lib::coord, std::__1::allocator<vision::lib::coord> > { struct coord {} *x_11_1_1; struct coord {} *x_11_1_2; struct __compressed_pair<vision::lib::coord *, std::__1::allocator<vision::lib::coord> > { struct coord {} *x_3_2_1; } x_11_1_3; } x11; int x12; boolx13; boolx14; float x15; float x16; boolx17; float x18; boolx19; float x20; struct naturalSmileData {} *x21; })createFace:(id)arg1 image:(id)arg2;
- (struct image { char *x1; int x2; int x3; })createImage:(id)arg1;
- (void)updateExtractionParamsValues:(id)arg1;
- (id)extractDetailsForFaces:(id)arg1 inImage:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)createFCRImage:(struct CGImage { }*)arg1;
- (id)createFCRFace:(struct face { int x1; struct coord { int x_2_1_1; int x_2_1_2; } x2; struct coord { int x_3_1_1; int x_3_1_2; } x3; struct coord { int x_4_1_1; int x_4_1_2; } x4; struct coord { int x_5_1_1; int x_5_1_2; } x5; float x6; int x7; int x8; struct vector<double, std::__1::allocator<double> > { double *x_9_1_1; double *x_9_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_9_1_3; } x9; int x10; struct vector<vision::lib::coord, std::__1::allocator<vision::lib::coord> > { struct coord {} *x_11_1_1; struct coord {} *x_11_1_2; struct __compressed_pair<vision::lib::coord *, std::__1::allocator<vision::lib::coord> > { struct coord {} *x_3_2_1; } x_11_1_3; } x11; int x12; boolx13; boolx14; float x15; float x16; boolx17; float x18; boolx19; float x20; struct naturalSmileData {} *x21; }*)arg1 image:(id)arg2;
- (void)updateDetectionParamsValues:(id)arg1 image:(id)arg2;
- (id)convertRectsToString:(id)arg1;
- (id)parseRegionOfInterestParam:(id)arg1;
- (void)setParam:(id)arg1 toValue:(id)arg2 withDefaultValue:(id)arg3 usingApi:(struct FaceCoreAPI { int (**x1)(); struct FaceCoreAPIInternal {} *x2; struct FaceCoreContext {} *x3; void *x4; }*)arg4;
- (id)detectFacesInImage:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)createFaceCoreLightApiWithProfile:(int)arg1 parameters:(id)arg2;
- (id)initWithProfile:(int)arg1 parameters:(id)arg2;
- (id)version;
- (id)extractDetailsForFaces:(id)arg1 inData:(id)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5 options:(id)arg6 error:(id*)arg7;
- (id)detectFacesInData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 options:(id)arg5 error:(id*)arg6;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;

@end
