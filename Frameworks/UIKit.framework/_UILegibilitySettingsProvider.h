/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor;

@interface _UILegibilitySettingsProvider : NSObject  {
    bool_hasContrast;
    bool_accumulatorIsPrimed;
    double _mostRecentSaturation;
    double _accumulatedSaturation;
    double _mostRecentBrightness;
    double _accumulatedBrightness;
    UIColor *_contentColor;
    double _mostRecentContrast;
    double _accumulatedContrast;
    double _mostRecentLuminance;
    double _accumulatedLuminance;
    double _nextChangeBarrier;
    long long _currentStyle;
}

@property double mostRecentSaturation;
@property double accumulatedSaturation;
@property double mostRecentBrightness;
@property double accumulatedBrightness;
@property(retain) UIColor * contentColor;
@property double mostRecentContrast;
@property double accumulatedContrast;
@property double mostRecentLuminance;
@property double accumulatedLuminance;
@property bool hasContrast;
@property bool accumulatorIsPrimed;
@property double nextChangeBarrier;
@property long long currentStyle;

+ (long long)styleForContentColor:(id)arg1;
+ (long long)styleForContentColor:(id)arg1 contrast:(double)arg2;

- (id)settings;
- (void)dealloc;
- (double)mostRecentLuminance;
- (double)mostRecentContrast;
- (double)mostRecentBrightness;
- (double)mostRecentSaturation;
- (bool)accumulateChangesToContentColor:(id)arg1;
- (id)contentColor;
- (double)nextChangeBarrier;
- (void)setNextChangeBarrier:(double)arg1;
- (void)setCurrentStyle:(long long)arg1;
- (double)accumulatedContrast;
- (void)setAccumulatorIsPrimed:(bool)arg1;
- (void)setAccumulatedSaturation:(double)arg1;
- (void)setAccumulatedLuminance:(double)arg1;
- (void)setAccumulatedBrightness:(double)arg1;
- (bool)accumulatorIsPrimed;
- (bool)hasContrast;
- (void)setHasContrast:(bool)arg1;
- (void)setAccumulatedContrast:(double)arg1;
- (void)setMostRecentSaturation:(double)arg1;
- (void)setMostRecentLuminance:(double)arg1;
- (void)setMostRecentContrast:(double)arg1;
- (void)setMostRecentBrightness:(double)arg1;
- (void)setContentColor:(id)arg1;
- (double)accumulatedSaturation;
- (double)accumulatedLuminance;
- (double)accumulatedBrightness;
- (bool)accumulateChangesToContentColor:(id)arg1 contrast:(double)arg2;
- (void)clearContentColorAccumulator;
- (long long)currentStyle;
- (void)pl_primeForUseWithCameraOverlays;
- (void)pl_primeForUseWithCameraOverlays;

@end
