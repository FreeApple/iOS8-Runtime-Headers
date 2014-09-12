/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class CUIPSDGradient;

@interface CUIPSDLayerEffectGradientOverlay : CUIPSDLayerEffectComponent  {
    CUIPSDGradient *_gradient;
}

@property(retain) CUIPSDGradient * gradient;


- (unsigned int)effectType;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (bool)updateLayerEffectPreset:(id)arg1 error:(id*)arg2;
- (void)setGradient:(id)arg1;
- (id)gradient;
- (id)init;
- (void)dealloc;

@end
