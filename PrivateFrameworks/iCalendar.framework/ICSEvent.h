/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@class NSString, NSArray, NSURL, ICSTravelDuration, ICSDate, ICSDuration, ICSTravelAdvisoryBehavior, ICSStructuredLocation, ICSUserAddress;

@interface ICSEvent : ICSComponent  {
}

@property(retain) NSArray * attach;
@property(retain) NSArray * attendee;
@property int classification;
@property(retain) ICSDate * created;
@property(retain) NSString * description;
@property(retain) ICSDate * dtend;
@property(retain) ICSDate * dtstamp;
@property(retain) ICSDate * dtstart;
@property(readonly) bool isAllDay;
@property(retain) ICSDuration * duration;
@property(retain) NSArray * exdate;
@property(retain) NSArray * exrule;
@property(retain) ICSDate * last_modified;
@property(retain) NSString * location;
@property(retain) ICSUserAddress * organizer;
@property unsigned long long sequence;
@property(retain) NSArray * rdate;
@property(retain) ICSDate * recurrence_id;
@property(retain) NSArray * rrule;
@property int status;
@property(retain) NSString * summary;
@property int transp;
@property(retain) NSString * uid;
@property(retain) NSURL * url;
@property(retain) NSString * x_apple_dropbox;
@property(retain) NSString * x_apple_ews_changekey;
@property(retain) NSString * x_apple_ews_itemid;
@property bool x_apple_ews_needsserverconfirmation;
@property(retain) NSString * x_apple_ews_permission;
@property int x_apple_ews_busystatus;
@property bool x_apple_dontschedule;
@property bool x_apple_ignore_on_restore;
@property bool x_apple_needs_reply;
@property bool x_wr_itipalreadysent;
@property bool x_wr_itipstatusattendeeml;
@property bool x_wr_itipstatusml;
@property bool x_wr_rsvpneeded;
@property(retain) NSArray * x_calendarserver_attendee_comment;
@property(retain) NSString * x_calendarserver_private_comment;
@property(retain) ICSStructuredLocation * x_apple_structured_location;
@property(retain) NSArray * conferences;
@property(retain) ICSStructuredLocation * x_apple_travel_start;
@property(retain) ICSTravelDuration * x_apple_travel_duration;
@property(retain) ICSTravelAdvisoryBehavior * x_apple_travel_advisory_behavior;
@property bool forcedAllDay;

+ (id)name;

- (bool)validate:(id*)arg1;
- (bool)isDefaultAlarmDeleted;
- (void)setX_apple_ews_busystatus:(int)arg1;
- (int)x_apple_ews_busystatus;
- (bool)x_wr_rsvpneeded;
- (void)setX_wr_rsvpneeded:(bool)arg1;
- (bool)x_wr_itipstatusml;
- (void)setX_wr_itipstatusml:(bool)arg1;
- (bool)x_wr_itipstatusattendeeml;
- (void)setX_wr_itipstatusattendeeml:(bool)arg1;
- (bool)x_wr_itipalreadysent;
- (void)setX_wr_itipalreadysent:(bool)arg1;
- (bool)x_apple_needs_reply;
- (bool)x_apple_dontschedule;
- (void)setX_apple_dontschedule:(bool)arg1;
- (void)setX_calendarserver_attendee_comment:(id)arg1;
- (void)fixComponent;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (void)setX_calendarserver_private_comment:(id)arg1;
- (void)setTransp:(int)arg1;
- (void)setX_apple_needs_reply:(bool)arg1;
- (id)x_calendarserver_attendee_comment;
- (id)x_calendarserver_private_comment;
- (int)transp;

@end
