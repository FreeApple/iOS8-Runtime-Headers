/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@class NSDataDetector, NSDateFormatter, NSNumberFormatter;

@interface CUIKEventDescriptionGenerator : NSObject  {
    NSDateFormatter *_dateFormatter;
    NSNumberFormatter *_numberFormatter;
    NSDataDetector *_addressDetector;
}


- (void)meCardChanged:(id)arg1;
- (id)tomorrowSnippetForUpcomingEvents:(id)arg1 withTodayEvents:(id)arg2;
- (id)naturalLanguageDescriptionForUpcomingEvents:(id)arg1 firstInDay:(bool)arg2;
- (id)naturalLanguageDescriptionForBirthdayEvents:(id)arg1;
- (id)_addressDetector;
- (bool)_startTimeRequiresSingularForEvent:(id)arg1 withTimeString:(id)arg2;
- (id)_adjustedMinutesTillEventStarts:(id)arg1;
- (id)_noonDateForEvents:(id)arg1;
- (bool)_prepareToUseMessageWithID:(id)arg1 shouldAllowWeekendUsage:(bool)arg2;
- (bool)_prependEarlyStartMessageToEventSummaryIfPossible:(id)arg1;
- (bool)_doesEventStartEarly:(id)arg1;
- (bool)_appendFreeAfternoonMessageToEventSummaryIfPossible:(id)arg1;
- (bool)_arrayHasAfternoonEvents:(id)arg1;
- (bool)_prependFreeMorningMessageToEventSummaryIfPossible:(id)arg1;
- (bool)_arrayHasMorningEvents:(id)arg1;
- (bool)_prependBusyDayMessageToEventSummaryIfPossible:(id)arg1;
- (bool)_eventIsAlreadyLate:(id)arg1;
- (id)_randomNumberBetween1And3;
- (id)_locationStringForEvent:(id)arg1;
- (id)_timeStringForEvent:(id)arg1 forBeginningOfSentence:(bool)arg2 useExplicitTimes:(bool)arg3 followingComma:(bool)arg4;
- (id)_sharedDateFormatter;
- (id)_naturalLanguageDescriptionForEvent:(id)arg1 isFirstInDay:(bool)arg2;
- (id)_sharedNumberFormatter;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
