/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class SCNNode, CAAnimation, NSString;

@interface SCNParticlePropertyController : NSObject <NSSecureCoding, NSCopying> {
    id _reserved;
    CAAnimation *_animation;
    long long _inputMode;
    double _inputScale;
    double _inputBias;
    SCNNode *_inputOrigin;
    NSString *_inputProperty;
    id _c3dAnimation;
}

@property(retain) CAAnimation * animation;
@property long long inputMode;
@property double inputScale;
@property double inputBias;
@property SCNNode * inputOrigin;
@property(copy) NSString * inputProperty;

+ (id)particlePropertyControllerWithAnimation:(id)arg1;
+ (id)controllerWithAnimation:(id)arg1;
+ (id)SCNJSExportProtocol;
+ (bool)supportsSecureCoding;

- (void)_customDecodingOfSCNParticlePropertyController:(id)arg1;
- (void)_customEncodingOfSCNParticlePropertyController:(id)arg1;
- (void)setInputProperty:(id)arg1;
- (void)setInputOrigin:(id)arg1;
- (id)c3dAnimation;
- (id)inputProperty;
- (id)inputOrigin;
- (void)setC3dAnimation:(id)arg1;
- (long long)inputMode;
- (void)setAnimation:(id)arg1;
- (void)setInputBias:(double)arg1;
- (double)inputBias;
- (double)inputScale;
- (void)setInputScale:(double)arg1;
- (id)animation;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setInputMode:(long long)arg1;

@end
