/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSTimeZone, NSDate;

@interface MKDate : NSDate  {
    NSDate *_date;
    NSTimeZone *_tz;
}

@property(retain) NSTimeZone * timeZone;
@property(readonly) NSDate * nsDate;

+ (id)dateWithNSDate:(id)arg1;

- (id)nsDate;
- (id)initWithNSDate:(id)arg1;
- (id)timeZone;
- (void)setTimeZone:(id)arg1;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (double)timeIntervalSinceReferenceDate;
- (id)descriptionWithLocale:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (long long)dayOfCommonEra;

@end
