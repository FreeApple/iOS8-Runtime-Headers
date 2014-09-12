/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPGraphicsState : NSObject  {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } mPageTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } mWorldTransform;
}


- (void)removeTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })pageTransform;
- (id)initWithGraphicsState:(id)arg1;
- (void)setPageTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)multiplyWorldTransformBy:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 order:(int)arg2;
- (id)initWithDefaults;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })worldTransform;
- (void)setWorldTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)dealloc;
- (id).cxx_construct;

@end
