/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIFont, NSString, NSArray, _UIDatePickerView, NSDate, NSNumberFormatter, NSDateComponents, UIColor;

@interface _UIDatePickerMode : NSObject  {
    NSDateComponents *_selectedDateComponents;
    NSDateComponents *_baseDateComponents;
    unsigned long long *_elements;
    long long _yearsSinceBaseDate;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _maxDayRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _maxMonthRange;
    NSString *_localizedFormatString;
    NSArray *_dateFormatters;
    UIColor *_todayTextColor;
    UIFont *_amPmFont;
    UIFont *_font;
    UIFont *_defaultTimeFont;
    NSString *_amString;
    NSString *_pmString;
    NSDateComponents *_todayDateComponents;
    NSNumberFormatter *_formatter;
    _UIDatePickerView *_datePickerView;
    bool_isUsingJapaneseCalendar;
    unsigned long long _numberOfComponents;
    long long _minuteInterval;
    double _todaySinceReferenceDate;
    NSDate *_minimumDate;
    NSDateComponents *_minimumDateComponents;
    NSDate *_maximumDate;
    NSDateComponents *_maximumDateComponents;
    NSDate *_baseDate;
    NSDate *_originatingDate;
}

@property(readonly) long long datePickerMode;
@property(readonly) double rowHeight;
@property unsigned long long numberOfComponents;
@property(readonly) long long displayedCalendarUnits;
@property(readonly) UIColor * todayTextColor;
@property long long minuteInterval;
@property(retain) NSDateComponents * todayDateComponents;
@property double todaySinceReferenceDate;
@property(readonly) NSDate * minimumDate;
@property(readonly) NSDateComponents * minimumDateComponents;
@property(readonly) NSDate * maximumDate;
@property(readonly) NSDateComponents * maximumDateComponents;
@property(retain) NSDateComponents * selectedDateComponents;
@property(readonly) double totalComponentWidth;
@property(getter=is24Hour,readonly) bool is24Hour;
@property(getter=isTimeIntervalMode,readonly) bool isTimeIntervalMode;
@property _UIDatePickerView * datePickerView;
@property(readonly) UIFont * amPmFont;
@property(readonly) UIFont * font;
@property(readonly) UIFont * defaultTimeFont;
@property(readonly) UIFont * sizedFont;
@property(readonly) NSString * amString;
@property(readonly) NSString * pmString;
@property unsigned long long* elements;
@property(retain) NSString * localizedFormatString;
@property(retain) NSDate * baseDate;
@property(retain) NSDateComponents * baseDateComponents;
@property long long yearsSinceBaseDate;
@property(retain) NSDate * originatingDate;

+ (void)initialize;
+ (id)_datePickerModeWithFormatString:(id)arg1 datePickerView:(id)arg2;
+ (id)newDateFromGregorianYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 timeZone:(id)arg4;
+ (unsigned long long)extractableCalendarUnits;
+ (id)_datePickerModeWithMode:(long long)arg1 datePickerView:(id)arg2;
+ (long long)datePickerMode;

- (id)font;
- (unsigned long long*)elements;
- (void)setElements:(unsigned long long*)arg1;
- (id)init;
- (id)calendar;
- (id)timeZone;
- (id)locale;
- (void)dealloc;
- (id)maximumDateComponents;
- (id)minimumDateComponents;
- (long long)validateValue:(long long)arg1 forCalendarUnit:(unsigned long long)arg2;
- (id)defaultTimeFont;
- (long long)yearsSinceBaseDate;
- (double)todaySinceReferenceDate;
- (double)componentWidthForTwoDigitCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (bool)_scrollingAnyColumnExcept:(int)arg1;
- (bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;
- (bool)_isComponentScrolling:(long long)arg1;
- (id)todayTextColor;
- (bool)_shouldEnableValueForRow:(long long)arg1 column:(long long)arg2;
- (id)titleForRow:(long long)arg1 inComponent:(long long)arg2;
- (long long)titleAlignmentForCalendarUnit:(unsigned long long)arg1;
- (long long)_numberOfDaysInDateComponents:(id)arg1;
- (bool)_monthExists:(long long)arg1 inYear:(long long)arg2;
- (id)originatingDate;
- (void)_updateSelectedDateComponentsWithNewValueInComponent:(long long)arg1 usingSelectionBarValue:(bool)arg2;
- (void)setSelectedDateComponents:(id)arg1;
- (long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4;
- (long long)rowForValue:(long long)arg1 forCalendarUnit:(unsigned long long)arg2 currentRow:(long long)arg3;
- (long long)valueForDate:(id)arg1 dateComponents:(id)arg2 calendarUnit:(unsigned long long)arg3;
- (id)dateForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2;
- (id)_dateByEnsuringValue:(long long)arg1 forCalendarUnit:(unsigned long long)arg2;
- (long long)valueForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2;
- (long long)eraForYearRow:(long long)arg1;
- (long long)yearForRow:(long long)arg1;
- (long long)monthForRow:(long long)arg1;
- (long long)dayForRow:(long long)arg1;
- (long long)secondForRow:(long long)arg1;
- (id)_dateForYearRow:(long long)arg1;
- (long long)_incrementForStaggeredTimeIntervals;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForCalendarUnit:(unsigned long long)arg1;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;
- (long long)_yearlessYearForMonth:(long long)arg1;
- (void)setLocalizedFormatString:(id)arg1;
- (void)clearBaseDate;
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;
- (id)localizedFormatString;
- (void)setNumberOfComponents:(unsigned long long)arg1;
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (double)totalComponentWidthWithFont:(id)arg1;
- (id)sizedFont;
- (id)amPmFont;
- (id)baseDate;
- (id)baseDateComponents;
- (void)setYearsSinceBaseDate:(long long)arg1;
- (void)setBaseDate:(id)arg1;
- (void)setBaseDateComponents:(id)arg1;
- (void)setOriginatingDate:(id)arg1;
- (id)todayDateComponents;
- (void)setTodaySinceReferenceDate:(double)arg1;
- (id)dateFormatForCalendarUnit:(unsigned long long)arg1;
- (id)calendarForFormatters;
- (id)dateFormatterForCalendarUnit:(unsigned long long)arg1;
- (id)datePickerView;
- (void)_shouldReset:(id)arg1;
- (void)setDatePickerView:(id)arg1;
- (void)resetSelectedDateComponentsWithValuesUnderSelectionBars;
- (void)resetComponentWidths;
- (double)widthForComponent:(long long)arg1 maxWidth:(double)arg2;
- (double)totalComponentWidth;
- (void)updateEnabledStateOfViewForRow:(long long)arg1 inComponent:(long long)arg2;
- (unsigned long long)calendarUnitForComponent:(long long)arg1;
- (id)viewForRow:(long long)arg1 inComponent:(long long)arg2 reusingView:(id)arg3;
- (id)fontForCalendarUnit:(unsigned long long)arg1;
- (id)selectedDateComponents;
- (id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(long long)arg2;
- (bool)areValidDateComponents:(id)arg1 comparingUnits:(long long)arg2;
- (long long)minuteForRow:(long long)arg1;
- (void)loadDate:(id)arg1 animated:(bool)arg2;
- (void)updateSelectedDateComponentsWithNewValueInComponent:(long long)arg1;
- (long long)hourForRow:(long long)arg1;
- (bool)is24Hour;
- (long long)componentForCalendarUnit:(unsigned long long)arg1;
- (long long)displayedCalendarUnits;
- (void)takeExtremesFromMinimumDate:(id)arg1 maximumDate:(id)arg2;
- (void)noteCalendarChanged;
- (bool)isTimeIntervalMode;
- (void)setTodayDateComponents:(id)arg1;
- (long long)minuteInterval;
- (id)maximumDate;
- (id)minimumDate;
- (long long)datePickerMode;
- (void)setMinuteInterval:(long long)arg1;
- (id)pmString;
- (id)amString;
- (double)rowHeight;
- (long long)numberOfRowsInComponent:(long long)arg1;
- (unsigned long long)numberOfComponents;

@end
