/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface SKMove : SKAction  {

  /* Error parsing encoded ivar type info: ^{SKCMove=^^?If@?@BddffdBB@?qfffff{?=ff}{?=ff}{?=ff}BBBB} */
    struct SKCMove { int (**x1)(); unsigned int x2; float x3; id x4; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x5; id x6; boolx7; double x8; double x9; float x10; float x11; double x12; boolx13; boolx14; id x15; void*x16; long long x17; float x18; float x19; float x20; float x21; float x22; struct { float x_23_1_1; float x_23_1_2; } x23; struct { float x_24_1_1; float x_24_1_2; } x24; struct { float x_25_1_1; float x_25_1_2; } x25; boolx26; boolx27; boolx28; boolx29; } *_mycaction;

}

+ (id)moveByY:(double)arg1 duration:(double)arg2;
+ (id)moveByX:(double)arg1 duration:(double)arg2;
+ (id)moveToX:(double)arg1 y:(double)arg2 duration:(double)arg3;
+ (id)moveBy:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2;
+ (id)moveToY:(double)arg1 duration:(double)arg2;
+ (id)moveToX:(double)arg1 duration:(double)arg2;
+ (id)moveTo:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2;
+ (id)moveByX:(double)arg1 y:(double)arg2 duration:(double)arg3;

- (id)reversedAction;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
