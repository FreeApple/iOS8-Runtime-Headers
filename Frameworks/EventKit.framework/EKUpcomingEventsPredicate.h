/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKUpcomingEventsPredicate : NSPredicate <NSSecureCoding> {
    int _limit;
}

@property(readonly) int limit;

+ (id)predicateWithLimit:(int)arg1;
+ (bool)supportsSecureCoding;

- (int)limit;
- (id)initWithLimit:(int)arg1;
- (bool)evaluateWithObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
