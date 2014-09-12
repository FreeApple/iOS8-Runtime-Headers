/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSUUID, NSString, NSDate;

@interface BBBehaviorOverrideFixedEffectivePeriod : NSObject <BBBehaviorOverrideEffectivePeriod> {
    NSDate *_startDate;
    double _effectiveInterval;
    NSUUID *_identifier;
}

@property(copy) NSDate * startDate;
@property double effectiveInterval;
@property(copy) NSUUID * identifier;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (bool)supportsSecureCoding;

- (id)initWithStartDate:(id)arg1 effectiveInterval:(double)arg2 identifier:(id)arg3;
- (double)effectiveInterval;
- (void)setEffectiveInterval:(double)arg1;
- (id)nextTransitionDateAfterDate:(id)arg1;
- (bool)containsDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
