/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CoreDAVLeafItem, CalDAVCalendarServerActionItem;

@interface CalDAVCalendarServerScheduleChangesItem : CoreDAVItem  {
    CoreDAVLeafItem *_dtstamp;
    CalDAVCalendarServerActionItem *_action;
}

@property(retain) CoreDAVLeafItem * dtstamp;
@property(retain) CalDAVCalendarServerActionItem * action;


- (id)copyParseRules;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)dtstamp;
- (void)setDtstamp:(id)arg1;
- (id)action;
- (void)setAction:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;

@end
