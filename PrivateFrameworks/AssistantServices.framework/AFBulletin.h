/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSString, NSDate;

@interface AFBulletin : NSObject <NSSecureCoding> {
    bool_read;
    bool_allDay;
    NSString *_bulletinID;
    NSDate *_date;
    NSDate *_endDate;
    NSString *_message;
    NSString *_modalAlertContentMessage;
    NSDate *_recencyDate;
    NSString *_sectionID;
    NSString *_subtitle;
    NSString *_timeZone;
    NSString *_title;
    NSString *_displayName;
}

@property(getter=isRead) bool read;
@property(copy,readonly) NSString * bulletinID;
@property(copy,readonly) NSDate * date;
@property(copy,readonly) NSDate * endDate;
@property(getter=isAllDay,readonly) bool allDay;
@property(copy,readonly) NSString * message;
@property(copy,readonly) NSString * modalAlertContentMessage;
@property(copy,readonly) NSDate * recencyDate;
@property(copy,readonly) NSString * sectionID;
@property(copy,readonly) NSString * subtitle;
@property(copy,readonly) NSString * timeZone;
@property(copy,readonly) NSString * title;
@property(copy) NSString * displayName;

+ (bool)supportsSecureCoding;

- (void)setBulletin:(id)arg1;
- (id)modalAlertContentMessage;
- (id)recencyDate;
- (id)bulletinID;
- (bool)isAllDay;
- (id)sectionID;
- (id)endDate;
- (id)message;
- (void)setDisplayName:(id)arg1;
- (id)title;
- (void)setRead:(bool)arg1;
- (id)timeZone;
- (id)date;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)displayName;
- (bool)isRead;
- (id)subtitle;

@end
