/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderConfig : NSObject <NSCopying> {
    bool_lightKeyboard;
    double _blurRadius;
    double _blurSaturation;
    double _keycapOpacity;
    double _lightLatinKeycapOpacity;
}

@property bool lightKeyboard;
@property double blurRadius;
@property double blurSaturation;
@property double keycapOpacity;
@property double lightLatinKeycapOpacity;
@property(readonly) bool whiteText;
@property(readonly) long long backdropStyle;

+ (id)configForAppearance:(long long)arg1;
+ (id)darkConfig;
+ (id)defaultConfig;
+ (long long)backdropStyleForStyle:(long long)arg1;

- (bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)blurSaturation;
- (double)lightLatinKeycapOpacity;
- (double)keycapOpacity;
- (bool)lightKeyboard;
- (bool)whiteText;
- (void)setLightLatinKeycapOpacity:(double)arg1;
- (void)setKeycapOpacity:(double)arg1;
- (void)setLightKeyboard:(bool)arg1;
- (void)setBlurSaturation:(double)arg1;
- (long long)backdropStyle;
- (void)setBlurRadius:(double)arg1;
- (double)blurRadius;

@end
