/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString, NSNumber, NSDate;

@interface EKCalendarResourceChangeNotification : EKCalendarNotification  {
    NSString *_location;
    NSString *_calendarName;
    NSDate *_startDate;
    NSDate *_endDate;
    bool_allDay;
    NSString *_eventID;
    unsigned int _changeType;
    bool_dateChanged;
    bool_timeChanged;
    bool_locationChanged;
    bool_titleChanged;
    NSNumber *_createCount;
    NSNumber *_updateCount;
    NSNumber *_deleteCount;
    NSDate *_startDateForNextOccurrence;
}

@property(retain) NSString * location;
@property(retain) NSString * calendarName;
@property(retain) NSDate * startDate;
@property(retain) NSDate * startDateForNextOccurrence;
@property(retain) NSDate * endDate;
@property bool allDay;
@property(retain) NSString * eventID;
@property unsigned int changeType;
@property bool dateChanged;
@property bool timeChanged;
@property bool locationChanged;
@property bool titleChanged;
@property(retain) NSNumber * createCount;
@property(retain) NSNumber * updateCount;
@property(retain) NSNumber * deleteCount;


- (id)eventID;
- (void)setEndDate:(id)arg1;
- (id)startDateForNextOccurrence;
- (void)setStartDateForNextOccurrence:(id)arg1;
- (void)setTitleChanged:(bool)arg1;
- (void)setLocationChanged:(bool)arg1;
- (void)setTimeChanged:(bool)arg1;
- (void)setDateChanged:(bool)arg1;
- (void)setDeleteCount:(id)arg1;
- (void)setUpdateCount:(id)arg1;
- (id)updateCount;
- (void)setCreateCount:(id)arg1;
- (id)createCount;
- (void)setEventID:(id)arg1;
- (void)setCalendarName:(id)arg1;
- (id)calendarName;
- (bool)needsAlert;
- (bool)allDay;
- (bool)locationChanged;
- (bool)titleChanged;
- (bool)timeChanged;
- (bool)dateChanged;
- (id)resourceChangeFromEventStore:(id)arg1;
- (void)setAllDay:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (id)location;
- (id)endDate;
- (id)startDate;
- (void)setChangeType:(unsigned int)arg1;
- (unsigned int)changeType;
- (id)deleteCount;
- (id)initWithType:(long long)arg1;
- (void)setLocation:(id)arg1;
- (void)dealloc;

@end
