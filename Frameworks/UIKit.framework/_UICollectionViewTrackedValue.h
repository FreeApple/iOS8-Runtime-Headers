/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;

@interface _UICollectionViewTrackedValue : NSObject  {
    double _trackedValue;
    NSArray *_values;
    long long _valuesCount;
    long long _currentIndex;
    bool_isAccumulating;
}

@property double trackedValue;
@property bool isAccumulating;


- (double)speed;
- (id)init;
- (void)setTrackedValue:(double)arg1;
- (void)setIsAccumulating:(bool)arg1;
- (bool)isAccumulating;
- (double)trackedValue;
- (void)addValue:(double)arg1;

@end
