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

@interface SCNPhysicsCustomField : SCNPhysicsField  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _block;

}

@property id block;

+ (id)SCNJSExportProtocol;

- (struct c3dPhysicsField { int (**x1)(); struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_1_1[4]; } x2; float x3; float x4; float x5; unsigned int x6; boolx7; boolx8; boolx9; boolx10; float x11; }*)_createField;
     /* Encoded args for previous method: ^{c3dPhysicsField=^^?{?=[4]}{?=[4]}fffIBBBBf}16@0:8 */

- (void)setBlock:(id)arg1;
- (void)dealloc;
- (id)block;

@end
