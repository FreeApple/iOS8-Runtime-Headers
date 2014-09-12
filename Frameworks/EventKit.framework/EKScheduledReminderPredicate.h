/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate;

@interface EKScheduledReminderPredicate : EKPredicate  {
    NSDate *_day;
}

@property(retain) NSDate * day;

+ (id)predicateForScheduledRemindersInCalendars:(id)arg1 onDay:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)day;
- (void)setDay:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
