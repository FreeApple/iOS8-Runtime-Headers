/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSDate;

@interface GEOAlmanacRiseTransitSet : NSObject  {
    double _julianDay;
    struct CAARiseTransitSetDetails { 
        boolbRiseValid; 
        double Rise; 
        boolbTransitAboveHorizon; 
        double Transit; 
        boolbSetValid; 
        double Set; 
    } _riseTransitSet;
    NSDate *_sunrise;
    NSDate *_sunset;
}

@property(readonly) double julianDay;
@property(readonly) struct CAARiseTransitSetDetails { boolx1; double x2; boolx3; double x4; boolx5; double x6; } riseTransitSet;
@property(readonly) NSDate * sunrise;
@property(readonly) NSDate * sunset;


- (struct CAARiseTransitSetDetails { boolx1; double x2; boolx3; double x4; boolx5; double x6; })riseTransitSet;
- (double)julianDay;
- (id)sunset;
- (id)sunrise;
- (id)initWithJulianDay:(double)arg1 riseTransitSet:(struct CAARiseTransitSetDetails { boolx1; double x2; boolx3; double x4; boolx5; double x6; })arg2;
- (void)dealloc;
- (id).cxx_construct;

@end
