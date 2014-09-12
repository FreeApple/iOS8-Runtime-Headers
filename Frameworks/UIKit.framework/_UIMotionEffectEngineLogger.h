/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIMotionEffectEngineLogger : NSObject  {
    long long _motionLevelSamples[8];
    long long _sampleCount;
    long long _updateFreqency;
    double _lastUpdateTimeStamp;
}


- (void)_dumpToAggregated;
- (void)recordMotionMagnitude:(double)arg1 atTimestamp:(double)arg2;
- (double)lastRecordedTimestamp;
- (id)initWithFastUpdateInterval:(double)arg1 slowUpdateInterval:(double)arg2;

@end
