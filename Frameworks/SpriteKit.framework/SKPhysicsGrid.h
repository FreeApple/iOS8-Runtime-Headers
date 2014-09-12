/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPhysicsGrid : NSObject  {
    float _width;
    float _height;
}

@property(readonly) float width;
@property(readonly) float height;

+ (id)gridFromTexture:(id)arg1 alphaThreshold:(float)arg2 accuracy:(float)arg3;
+ (id)gridFromOccupancyArray:(const char *)arg1 width:(int)arg2 height:(int)arg3;
+ (id)vectorGridFromTexture:(id)arg1 accuracy:(float)arg2;

- (void)spritesFromGrid:(id)arg1 xDivisions:(int)arg2 zPosition:(double)arg3 spriteSize:(struct CGSize { double x1; double x2; })arg4 texture:(id)arg5 physicsBody:(id)arg6;
- (void)spritesFromGrid:(id)arg1 gridSize:(struct CGSize { double x1; double x2; })arg2 zPosition:(double)arg3 edgeColor:(id)arg4 interiorColor:(id)arg5 spriteSize:(struct CGSize { double x1; double x2; })arg6 physicsBody:(id)arg7;
- (float)height;
- (float)width;

@end
