/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class SKRange;

@interface SKSizeConstraint : SKConstraint  {
    SKRange *_widthRange;
    SKRange *_heightRange;
}

@property(copy) SKRange * widthRange;
@property(copy) SKRange * heightRange;

+ (id)constraintWithWidthRange:(id)arg1 heightRange:(id)arg2;
+ (id)constraintWithHeightRange:(id)arg1;
+ (id)constraintWithWidthRange:(id)arg1;

- (id)initWithWidthRange:(id)arg1 heightRange:(id)arg2;
- (void)setHeightRange:(id)arg1;
- (void)setWidthRange:(id)arg1;
- (id)heightRange;
- (id)widthRange;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
