/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSDictionary;

@interface NSStringDrawingContext : NSObject  {
    double _minimumScaleFactor;
    double _minimumTrackingAdjustment;
    double _actualScaleFactor;
    double _actualTrackingAdjustment;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _totalBounds;
    NSDictionary *_linkAttributes;
    unsigned long long _numberOfLineFragments;
    unsigned long long _maximumNumberOfLines;
    double _baselineOffset;
    double _scaledBaselineOffset;
    double _scaledLineHeight;
    double _firstBaselineOffset;
    id _layout;
    struct { 
        unsigned int _wantsNumberOfLineFragments : 1; 
        unsigned int _wrapsForTruncationMode : 1; 
        unsigned int _wantsBaselineOffset : 1; 
        unsigned int _wantsScaledBaselineOffset : 1; 
        unsigned int _wantsScaledLineHeight : 1; 
        unsigned int _drawsDebugBaselines : 1; 
        unsigned int _cachesLayout : 1; 
        unsigned int _usesSimpleTextEffects : 1; 
    } _sdcFlags;
}

@property double minimumScaleFactor;
@property double minimumTrackingAdjustment;
@property double actualScaleFactor;
@property double actualTrackingAdjustment;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } totalBounds;
@property bool wantsNumberOfLineFragments;
@property unsigned long long numberOfLineFragments;
@property bool wrapsForTruncationMode;
@property unsigned long long maximumNumberOfLines;
@property bool wantsBaselineOffset;
@property double baselineOffset;
@property bool wantsScaledBaselineOffset;
@property double scaledBaselineOffset;
@property bool wantsScaledLineHeight;
@property double scaledLineHeight;
@property double firstBaselineOffset;
@property bool drawsDebugBaselines;
@property bool cachesLayout;
@property(retain) id layout;
@property bool usesSimpleTextEffects;


- (void)setFirstBaselineOffset:(double)arg1;
- (void)setScaledLineHeight:(double)arg1;
- (void)setScaledBaselineOffset:(double)arg1;
- (void)setBaselineOffset:(double)arg1;
- (double)baselineOffset;
- (void)setNumberOfLineFragments:(unsigned long long)arg1;
- (unsigned long long)numberOfLineFragments;
- (void)setTotalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setActualTrackingAdjustment:(double)arg1;
- (double)actualTrackingAdjustment;
- (void)setActualScaleFactor:(double)arg1;
- (void)setUsesSimpleTextEffects:(bool)arg1;
- (bool)usesSimpleTextEffects;
- (void)setLayout:(id)arg1;
- (id)layout;
- (void)setCachesLayout:(bool)arg1;
- (bool)cachesLayout;
- (void)setDrawsDebugBaselines:(bool)arg1;
- (bool)drawsDebugBaselines;
- (void)setWantsScaledLineHeight:(bool)arg1;
- (bool)wantsScaledLineHeight;
- (void)setWantsScaledBaselineOffset:(bool)arg1;
- (bool)wantsScaledBaselineOffset;
- (void)setWantsBaselineOffset:(bool)arg1;
- (bool)wantsBaselineOffset;
- (void)setMaximumNumberOfLines:(unsigned long long)arg1;
- (unsigned long long)maximumNumberOfLines;
- (void)setWrapsForTruncationMode:(bool)arg1;
- (bool)wrapsForTruncationMode;
- (void)setWantsNumberOfLineFragments:(bool)arg1;
- (bool)wantsNumberOfLineFragments;
- (void)setMinimumTrackingAdjustment:(double)arg1;
- (double)minimumTrackingAdjustment;
- (void)setMinimumScaleFactor:(double)arg1;
- (double)minimumScaleFactor;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)firstBaselineOffset;
- (double)scaledLineHeight;
- (double)scaledBaselineOffset;
- (double)actualScaleFactor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })totalBounds;

@end
