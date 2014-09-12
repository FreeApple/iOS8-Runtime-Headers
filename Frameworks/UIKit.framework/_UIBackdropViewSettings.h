/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, _UIBackdropView, _UIBackdropColorSettings, UIImage, NSString;

@interface _UIBackdropViewSettings : NSObject  {
    bool_explicitlySetGraphicsQuality;
    bool_requiresColorStatistics;
    bool_highlighted;
    bool_selected;
    bool_enabled;
    bool_backdropVisible;
    bool_zoomsBack;
    bool_lightenGrayscaleWithSourceOver;
    bool_darkenWithSourceOver;
    bool_designMode;
    bool_usesBackdropEffectView;
    bool_usesGrayscaleTintView;
    bool_usesColorTintView;
    bool_usesColorBurnTintView;
    bool_usesContentView;
    bool_usesDarkeningTintView;
    bool_appliesTintAndBlurSettings;
    _UIBackdropView *_backdrop;
    long long _style;
    long long _graphicsQuality;
    _UIBackdropColorSettings *_colorSettings;
    long long _renderingHint;
    long long _stackingLevel;
    double _grayscaleTintLevel;
    double _grayscaleTintAlpha;
    double _grayscaleTintMaskAlpha;
    UIImage *_grayscaleTintMaskImage;
    UIColor *_colorTint;
    double _colorTintAlpha;
    double _colorTintMaskAlpha;
    UIImage *_colorTintMaskImage;
    double _colorBurnTintLevel;
    double _colorBurnTintAlpha;
    UIImage *_colorBurnTintMaskImage;
    double _darkeningTintAlpha;
    double _darkeningTintHue;
    double _darkeningTintSaturation;
    double _darkeningTintBrightness;
    UIImage *_darkeningTintMaskImage;
    double _blurRadius;
    NSString *_blurQuality;
    long long _blurHardEdges;
    double _saturationDeltaFactor;
    double _filterMaskAlpha;
    UIImage *_filterMaskImage;
    UIColor *_legibleColor;
    UIColor *_combinedTintColor;
    double _scale;
    double _statisticsInterval;
    unsigned long long _version;
    long long _suppressSettingsDidChange;
    struct __CFRunLoopObserver { } *_runLoopObserver;
}

@property _UIBackdropView * backdrop;
@property long long style;
@property long long graphicsQuality;
@property bool explicitlySetGraphicsQuality;
@property bool requiresColorStatistics;
@property(retain) _UIBackdropColorSettings * colorSettings;
@property long long renderingHint;
@property long long stackingLevel;
@property(getter=isHighlighted) bool highlighted;
@property(getter=isSelected) bool selected;
@property(getter=isEnabled) bool enabled;
@property(getter=isBackdropVisible) bool backdropVisible;
@property bool zoomsBack;
@property double grayscaleTintLevel;
@property double grayscaleTintAlpha;
@property double grayscaleTintMaskAlpha;
@property(retain) UIImage * grayscaleTintMaskImage;
@property bool lightenGrayscaleWithSourceOver;
@property(retain) UIColor * colorTint;
@property double colorTintAlpha;
@property double colorTintMaskAlpha;
@property(retain) UIImage * colorTintMaskImage;
@property double colorBurnTintLevel;
@property double colorBurnTintAlpha;
@property(retain) UIImage * colorBurnTintMaskImage;
@property double darkeningTintAlpha;
@property double darkeningTintHue;
@property double darkeningTintSaturation;
@property double darkeningTintBrightness;
@property(retain) UIImage * darkeningTintMaskImage;
@property bool darkenWithSourceOver;
@property double blurRadius;
@property(copy) NSString * blurQuality;
@property long long blurHardEdges;
@property bool blursWithHardEdges;
@property double saturationDeltaFactor;
@property double filterMaskAlpha;
@property(retain) UIImage * filterMaskImage;
@property(retain) UIColor * legibleColor;
@property(retain) UIColor * combinedTintColor;
@property double scale;
@property double statisticsInterval;
@property unsigned long long version;
@property(setter=setDesignMode:) bool designMode;
@property bool usesBackdropEffectView;
@property bool usesGrayscaleTintView;
@property bool usesColorTintView;
@property bool usesColorBurnTintView;
@property bool usesContentView;
@property bool usesDarkeningTintView;
@property bool appliesTintAndBlurSettings;
@property long long suppressSettingsDidChange;
@property struct __CFRunLoopObserver { }* runLoopObserver;

+ (id)settingsForStyle:(long long)arg1 graphicsQuality:(long long)arg2;
+ (id)darkeningTintColor;
+ (id)settingsForPrivateStyle:(long long)arg1;
+ (id)settingsForPrivateStyle:(long long)arg1 graphicsQuality:(long long)arg2;
+ (id)settingsForStyle:(long long)arg1;

- (unsigned long long)version;
- (void)setEnabled:(bool)arg1;
- (bool)isEnabled;
- (void)setStyle:(long long)arg1;
- (double)statisticsInterval;
- (void)setScale:(double)arg1;
- (long long)style;
- (id)init;
- (void)dealloc;
- (id)description;
- (double)scale;
- (void)setVersion:(unsigned long long)arg1;
- (void)setDesignMode:(bool)arg1;
- (bool)designMode;
- (void)setCombinedTintColor:(id)arg1;
- (void)setColorSettings:(id)arg1;
- (void)setBackdrop:(id)arg1;
- (id)combinedTintColor;
- (bool)blursWithHardEdges;
- (void)setUsesColorBurnTintView:(bool)arg1;
- (void)setStackinglevel:(long long)arg1;
- (void)setBlursWithHardEdges:(bool)arg1;
- (id)backdrop;
- (void)setRunLoopObserver:(struct __CFRunLoopObserver { }*)arg1;
- (struct __CFRunLoopObserver { }*)runLoopObserver;
- (void)setSuppressSettingsDidChange:(long long)arg1;
- (long long)suppressSettingsDidChange;
- (bool)zoomsBack;
- (bool)usesContentView;
- (void)setRenderingHint:(long long)arg1;
- (id)legibleColor;
- (void)setLightenGrayscaleWithSourceOver:(bool)arg1;
- (double)grayscaleTintMaskAlpha;
- (double)filterMaskAlpha;
- (bool)explicitlySetGraphicsQuality;
- (void)setDarkenWithSourceOver:(bool)arg1;
- (id)darkeningTintMaskImage;
- (void)setColorBurnTintMaskImage:(id)arg1;
- (id)colorBurnTintMaskImage;
- (void)setColorBurnTintAlpha:(double)arg1;
- (void)setColorBurnTintLevel:(double)arg1;
- (double)colorTintMaskAlpha;
- (bool)isBackdropVisible;
- (bool)appliesTintAndBlurSettings;
- (void)clearRunLoopObserver;
- (void)scheduleSettingsDidChangeIfNeeded;
- (void)setZoomsBack:(bool)arg1;
- (void)setBlurQuality:(id)arg1;
- (void)setDarkeningTintMaskImage:(id)arg1;
- (void)setDarkeningTintBrightness:(double)arg1;
- (void)setDarkeningTintSaturation:(double)arg1;
- (void)setDarkeningTintHue:(double)arg1;
- (void)setStackingLevel:(long long)arg1;
- (void)setAppliesTintAndBlurSettings:(bool)arg1;
- (void)setUsesContentView:(bool)arg1;
- (void)decrementSuppressSettingsDidChange;
- (void)setExplicitlySetGraphicsQuality:(bool)arg1;
- (void)incrementSuppressSettingsDidChange;
- (id)initWithDefaultValuesForGraphicsQuality:(long long)arg1;
- (bool)usesDarkeningTintView;
- (bool)usesColorBurnTintView;
- (bool)darkenWithSourceOver;
- (double)darkeningTintBrightness;
- (double)darkeningTintSaturation;
- (double)darkeningTintHue;
- (double)colorBurnTintAlpha;
- (double)colorBurnTintLevel;
- (bool)lightenGrayscaleWithSourceOver;
- (long long)blurHardEdges;
- (id)blurQuality;
- (void)setStatisticsInterval:(double)arg1;
- (void)setUsesDarkeningTintView:(bool)arg1;
- (void)setGraphicsQuality:(long long)arg1;
- (long long)stackingLevel;
- (long long)renderingHint;
- (void)setLegibleColor:(id)arg1;
- (void)setUsesBackdropEffectView:(bool)arg1;
- (void)setFilterMaskImage:(id)arg1;
- (void)setFilterMaskAlpha:(double)arg1;
- (void)setColorTintMaskImage:(id)arg1;
- (void)setColorTintMaskAlpha:(double)arg1;
- (void)setColorTintAlpha:(double)arg1;
- (void)setGrayscaleTintMaskImage:(id)arg1;
- (void)setGrayscaleTintMaskAlpha:(double)arg1;
- (void)setGrayscaleTintLevel:(double)arg1;
- (void)setBackdropVisible:(bool)arg1;
- (void)setRequiresColorStatistics:(bool)arg1;
- (long long)graphicsQuality;
- (void)restoreDefaultValues;
- (void)removeKeyPathObserver:(id)arg1;
- (void)addKeyPathObserver:(id)arg1;
- (void)setDefaultValues;
- (void)setDarkeningTintAlpha:(double)arg1;
- (double)darkeningTintAlpha;
- (void)setGrayscaleTintAlpha:(double)arg1;
- (void)setSelected:(bool)arg1;
- (bool)isSelected;
- (void)setColorTint:(id)arg1;
- (void)setBlurHardEdges:(long long)arg1;
- (bool)isHighlighted;
- (void)setHighlighted:(bool)arg1;
- (void)setSaturationDeltaFactor:(double)arg1;
- (void)setBlurRadius:(double)arg1;
- (void)setUsesColorTintView:(bool)arg1;
- (void)setUsesGrayscaleTintView:(bool)arg1;
- (double)colorTintAlpha;
- (id)colorTint;
- (bool)usesColorTintView;
- (double)grayscaleTintLevel;
- (double)grayscaleTintAlpha;
- (bool)usesGrayscaleTintView;
- (void)computeOutputSettingsUsingModel:(id)arg1;
- (id)colorSettings;
- (bool)requiresColorStatistics;
- (void)setValuesFromModel:(id)arg1;
- (bool)usesBackdropEffectView;
- (double)saturationDeltaFactor;
- (double)blurRadius;
- (id)filterMaskImage;
- (id)colorTintMaskImage;
- (id)grayscaleTintMaskImage;
- (id)initWithDefaultValues;

@end
