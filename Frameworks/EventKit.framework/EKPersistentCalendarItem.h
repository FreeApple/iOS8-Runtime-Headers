/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate, NSString, NSURL, NSData, NSSet, EKPersistentAttendee, EKPersistentCalendar, EKPersistentCalendarItem, NSTimeZone, EKPersistentLocation, EKPersistentOrganizer;

@interface EKPersistentCalendarItem : EKPersistentObject  {
}

@property(readonly) NSString * UUID;
@property(retain) EKPersistentCalendar * calendar;
@property(copy) NSString * title;
@property(copy) EKPersistentLocation * location;
@property(copy) EKPersistentLocation * startLocation;
@property(copy) NSString * notes;
@property(copy) NSDate * lastModifiedDate;
@property(copy) NSDate * creationDate;
@property(copy) NSDate * startDate;
@property(copy) NSTimeZone * timeZone;
@property(copy) NSTimeZone * startTimeZone;
@property(copy) NSTimeZone * endTimeZone;
@property(copy) NSString * calendarScale;
@property(getter=isAllDay) bool allDay;
@property int priority;
@property int sequence;
@property(copy) NSURL * URL;
@property(copy) NSURL * action;
@property(copy) NSString * externalID;
@property(copy) NSData * externalData;
@property(copy) NSString * uniqueID;
@property(retain) EKPersistentOrganizer * organizer;
@property(readonly) bool hasAlarms;
@property(readonly) bool hasRecurrenceRules;
@property(readonly) bool hasAttendees;
@property(readonly) bool hasNotes;
@property(readonly) int selfParticipantStatus;
@property(copy) NSSet * alarms;
@property(getter=isDefaultAlarmRemoved) bool defaultAlarmRemoved;
@property(copy) NSSet * recurrenceRules;
@property(copy) NSSet * attendees;
@property(retain) EKPersistentAttendee * selfAttendee;
@property(copy) NSDate * participationStatusModifiedDate;
@property(copy) NSSet * exceptionDates;
@property(copy) NSSet * attachments;
@property(copy) NSString * sharedItemCreatedByDisplayName;
@property(copy) NSString * sharedItemCreatedByEmailAddress;
@property(copy) NSString * sharedItemCreatedByFirstName;
@property(copy) NSString * sharedItemCreatedByLastName;
@property(copy) NSDate * sharedItemCreatedDate;
@property(copy) NSTimeZone * sharedItemCreatedTimeZone;
@property(copy) NSString * sharedItemModifiedByDisplayName;
@property(copy) NSString * sharedItemModifiedByEmailAddress;
@property(copy) NSString * sharedItemModifiedByFirstName;
@property(copy) NSString * sharedItemModifiedByLastName;
@property(copy) NSDate * sharedItemModifiedDate;
@property(copy) NSTimeZone * sharedItemModifiedTimeZone;
@property(getter=isDetached,readonly) bool detached;
@property(retain) EKPersistentCalendarItem * originalItem;
@property(copy) NSSet * detachedItems;

+ (id)relations;
+ (id)defaultPropertiesToLoad;

- (bool)hasAttachments;
- (bool)validate:(id*)arg1;
- (id)organizer;
- (bool)isAllDay;
- (void)setSharedItemCreatedByEmailAddress:(id)arg1;
- (int)attendeeCount;
- (void)removeDetachedItem:(id)arg1;
- (void)removeExceptionDate:(id)arg1;
- (void)setParticipationStatusModifiedDate:(id)arg1;
- (void)primitiveValueChangedForKey:(id)arg1;
- (void)setSharedItemModifiedTimeZone:(id)arg1;
- (id)sharedItemModifiedTimeZone;
- (void)setSharedItemModifiedDate:(id)arg1;
- (id)sharedItemModifiedDate;
- (void)setSharedItemModifiedByLastName:(id)arg1;
- (void)setSharedItemModifiedByFirstName:(id)arg1;
- (void)setSharedItemModifiedByEmailAddress:(id)arg1;
- (id)sharedItemModifiedByEmailAddress;
- (void)setSharedItemModifiedByDisplayName:(id)arg1;
- (id)sharedItemModifiedByDisplayName;
- (void)setSharedItemCreatedTimeZone:(id)arg1;
- (id)sharedItemCreatedTimeZone;
- (void)setSharedItemCreatedDate:(id)arg1;
- (id)sharedItemCreatedDate;
- (void)setSharedItemCreatedByLastName:(id)arg1;
- (void)setSharedItemCreatedByFirstName:(id)arg1;
- (id)sharedItemCreatedByEmailAddress;
- (void)setSharedItemCreatedByDisplayName:(id)arg1;
- (id)sharedItemCreatedByDisplayName;
- (void)removeAttendee:(id)arg1;
- (void)setAttendees:(id)arg1;
- (void)setAlarms:(id)arg1;
- (bool)hasAlarms;
- (void)setDefaultAlarmRemoved:(bool)arg1;
- (bool)isDefaultAlarmRemoved;
- (void)setEndTimeZone:(id)arg1;
- (void)setStartTimeZone:(id)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setExternalData:(id)arg1;
- (void)removeAttachment:(id)arg1;
- (id)sharedItemModifiedByLastName;
- (id)sharedItemModifiedByFirstName;
- (id)sharedItemCreatedByLastName;
- (id)sharedItemCreatedByFirstName;
- (int)selfParticipantStatus;
- (id)externalData;
- (void)setCalendarScale:(id)arg1;
- (bool)hasNotes;
- (id)notes;
- (id)endTimeZone;
- (id)startTimeZone;
- (void)addDetachedItem:(id)arg1;
- (void)removeAlarm:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (void)setOriginalItem:(id)arg1;
- (void)addRecurrenceRule:(id)arg1;
- (void)addAttachment:(id)arg1;
- (void)setSelfAttendee:(id)arg1;
- (void)addAttendee:(id)arg1;
- (void)setOrganizer:(id)arg1;
- (void)removeRecurrenceRule:(id)arg1;
- (id)exceptionDates;
- (void)deleteSelfAndDetached;
- (void)addExceptionDate:(id)arg1;
- (id)detachedItems;
- (id)alarms;
- (void)setDetachedItems:(id)arg1;
- (void)setExceptionDates:(id)arg1;
- (void)addAlarm:(id)arg1;
- (id)attendees;
- (id)participationStatusModifiedDate;
- (bool)isDetached;
- (bool)hasAttendees;
- (id)startLocation;
- (void)setRecurrenceRules:(id)arg1;
- (id)recurrenceRules;
- (bool)hasRecurrenceRules;
- (id)originalItem;
- (id)selfAttendee;
- (id)calendarScale;
- (void)setExternalModificationTag:(id)arg1;
- (id)externalModificationTag;
- (id)externalID;
- (void)setExternalID:(id)arg1;
- (void)setAllDay:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (id)location;
- (void)setCreationDate:(id)arg1;
- (id)creationDate;
- (id)action;
- (void)setAction:(id)arg1;
- (id)startDate;
- (id)UUID;
- (id)attachments;
- (id)lastModifiedDate;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)uniqueID;
- (void)setLocation:(id)arg1;
- (id)init;
- (void)setCalendar:(id)arg1;
- (id)calendar;
- (id)timeZone;
- (void)setTimeZone:(id)arg1;
- (void)setPriority:(int)arg1;
- (int)priority;
- (void)setURL:(id)arg1;
- (id)URL;
- (void)setSequence:(int)arg1;
- (int)sequence;
- (void)setAttachments:(id)arg1;
- (void)setStartLocation:(id)arg1;

@end
