/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface VKPolygonDrawStyle : VKRenderStyle  {
    NSString *_name;
}

@property(retain) NSString * name;
@property(readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  casingColor; /* unknown property attribute:  1>=[4f]} */

+ (int)renderStyleID;

- (bool)fancyCasingsVisibleAtZoom:(float)arg1;
- (struct Matrix<float, 4, 1> { float x1[4]; })outerStrokeColorAtZoom:(float)arg1;
- (float)outerStrokeWidthAtZoom:(float)arg1;
- (int)thirdTextureBlendModeAtZoom:(float)arg1;
- (id)thirdTextureVariantAtZoom:(float)arg1;
- (float)thirdTextureOpacityAtZoom:(float)arg1;
- (id)thirdTextureAtZoom:(float)arg1;
- (int)secondTextureBlendModeAtZoom:(float)arg1;
- (id)secondTextureVariantAtZoom:(float)arg1;
- (float)secondTextureOpacityAtZoom:(float)arg1;
- (id)secondTextureAtZoom:(float)arg1;
- (int)textureBlendModeAtZoom:(float)arg1;
- (float)textureOpacityAtZoom:(float)arg1;
- (struct Matrix<float, 4, 1> { float x1[4]; })sourceFillColorAtZoom:(float)arg1;
- (bool)hasFillTextureVariant;
- (bool)isTargetNotDrawn;
- (bool)isSourceNotDrawn;
- (struct Matrix<float, 4, 1> { float x1[4]; })casingColor;
- (id)preferredTargetTextureNameAtZoom:(float)arg1;
- (struct Matrix<float, 4, 1> { float x1[4]; })targetFillColorAtZoom:(float)arg1;
- (bool)hasFillColorVariant;
- (struct Matrix<float, 4, 1> { float x1[4]; })strokeColorAtZoom:(float)arg1;
- (unsigned int)zIndexAtZoom:(float)arg1;
- (float)strokeWidthAtZoom:(float)arg1;
- (bool)visibleAtZoom:(float)arg1;
- (bool)isNotDrawn;
- (struct Matrix<float, 4, 1> { float x1[4]; })fillColorAtZoom:(float)arg1;
- (id)preferredSourceTextureNameAtZoom:(float)arg1;
- (bool)casingsVisibleAtZoom:(float)arg1;
- (int)polygonType;
- (bool)hasStrokeColor;
- (id)sourceTextureAtZoom:(float)arg1;
- (id)targetTextureAtZoom:(float)arg1;
- (bool)hasFillColor;
- (bool)hasFillTexture;
- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;

@end
