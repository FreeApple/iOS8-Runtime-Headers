/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class CUIColor;

@interface CUIPSDLayerEffectOuterGlow : CUIPSDLayerEffectComponent  {
    int _blendMode;
    double _opacity;
    CUIColor *_color;
    unsigned long long _blurSize;
    unsigned long long _spread;
}

@property int blendMode;
@property double opacity;
@property(retain) CUIColor * color;
@property unsigned long long blurSize;
@property unsigned long long spread;


- (void)setOpacity:(double)arg1;
- (double)opacity;
- (id)color;
- (unsigned int)effectType;
- (unsigned long long)spread;
- (unsigned long long)blurSize;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (bool)updateLayerEffectPreset:(id)arg1 error:(id*)arg2;
- (void)setSpread:(unsigned long long)arg1;
- (void)setBlurSize:(unsigned long long)arg1;
- (void)setColor:(id)arg1;
- (void)setBlendMode:(int)arg1;
- (int)blendMode;
- (id)init;
- (void)dealloc;

@end
