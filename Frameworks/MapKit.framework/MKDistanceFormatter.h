/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSLocale;

@interface MKDistanceFormatter : NSFormatter  {
    NSLocale *_locale;
    unsigned long long _units;
    unsigned long long _unitStyle;
}

@property(copy) NSLocale * locale;
@property unsigned long long units;
@property unsigned long long unitStyle;


- (double)distanceFromString:(id)arg1;
- (id)stringFromDistance:(double)arg1;
- (bool)_useMetric;
- (unsigned long long)units;
- (void)setUnits:(unsigned long long)arg1;
- (id)init;
- (id)locale;
- (void)setLocale:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (bool)isPartialStringValid:(id*)arg1 proposedSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 errorDescription:(id*)arg5;
- (id)stringForObjectValue:(id)arg1;
- (bool)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3;
- (void)setUnitStyle:(unsigned long long)arg1;
- (unsigned long long)unitStyle;

@end
