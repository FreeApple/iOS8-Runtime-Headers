/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface SCNActionRotate : SCNAction  {

  /* Error parsing encoded ivar type info: ^{SCNCActionRotate=^^?f@?@BdddddBB@?^{__CFString}qddddf{__C3DQuaternion=ffff}{__C3DQuaternion=ffff}BBBB} */
    struct SCNCActionRotate { int (**x1)(); float x2; id x3; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x4; id x5; boolx6; double x7; double x8; double x9; double x10; double x11; boolx12; boolx13; id x14; void*x15; struct __CFString {} *x16; long long x17; double x18; double x19; double x20; double x21; float x22; struct __C3DQuaternion { float x_23_1_1; float x_23_1_2; float x_23_1_3; float x_23_1_4; } x23; struct __C3DQuaternion { float x_24_1_1; float x_24_1_2; float x_24_1_3; float x_24_1_4; } x24; boolx25; boolx26; boolx27; boolx28; } *_mycaction;

}

+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 shortestUnitArc:(bool)arg5;
+ (id)rotateToAxisAngle:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1 duration:(double)arg2;
+ (id)rotateByAngle:(double)arg1 aroundAxis:(struct SCNVector3 { float x1; float x2; float x3; })arg2 duration:(double)arg3;
+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)rotateByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (bool)supportsSecureCoding;

- (id)reversedAction;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
