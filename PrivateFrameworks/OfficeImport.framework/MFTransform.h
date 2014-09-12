/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSObject<MFDeviceDriver>;

@interface MFTransform : NSObject <NSCopying> {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } m_world;
    struct CGPoint { 
        double x; 
        double y; 
    } m_windowOrg;
    struct CGPoint { 
        double x; 
        double y; 
    } m_windowExt;
    struct CGPoint { 
        double x; 
        double y; 
    } m_viewportOrg;
    struct CGPoint { 
        double x; 
        double y; 
    } m_viewportExt;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    } m_combinedTransform;
    int m_mapMode;
    NSObject<MFDeviceDriver> *m_deviceDriver;
}


- (struct CGPoint { double x1; double x2; })LPtoDP:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })DPtoLP:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isUpsideDown;
- (int)getMapMode;
- (void)setTransformMatrix:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setViewportExt:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })getViewportExtent;
- (void)setViewportOrg:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })getViewportOrg;
- (void)setWindowExt:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })getWindowExtent;
- (void)setWindowOrg:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })getWindowOrg;
- (void)setWorldMatrix:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })getWorldMatrix;
- (int)updateTransform;
- (int)modifyWorldTransform:(const struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg1 :(int)arg2;
- (int)scaleWindowExt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4;
- (int)scaleViewportExt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4;
- (int)setViewportOrg:(int)arg1 :(int)arg2;
- (int)offsetViewportOrg:(int)arg1 :(int)arg2;
- (int)offsetWindowOrg:(int)arg1 :(int)arg2;
- (int)setViewportExt:(int)arg1 :(int)arg2;
- (int)setWindowOrg:(int)arg1 :(int)arg2;
- (int)setWindowExt:(int)arg1 :(int)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })getTransformMatrix;
- (id)initWithDriver:(id)arg1;
- (int)setWorldTransform:(const struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg1;
- (int)setMapMode:(int)arg1;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
