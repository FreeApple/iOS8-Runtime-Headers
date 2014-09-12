/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSCalendar;

@interface _UIDatePickerChineseCalendar : NSCalendar  {
    NSCalendar *realCalendar;
}

@property NSCalendar * realCalendar;

+ (id)relatedFromCyclical:(id)arg1;
+ (id)cyclicalFromRelated:(id)arg1;

- (id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })maximumRangeOfUnit:(unsigned long long)arg1;
- (id)calendarIdentifier;
- (id)dateFromComponents:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)realCalendar;
- (id)initWithCalendar:(id)arg1;
- (void)setRealCalendar:(id)arg1;

@end
