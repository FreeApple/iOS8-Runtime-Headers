/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSArray;

@interface BBBehaviorOverride : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _overrideType;
    unsigned long long _mode;
    NSArray *_effectiveIntervals;
}

@property unsigned long long overrideType;
@property unsigned long long mode;
@property(copy) NSArray * effectiveIntervals;

+ (bool)supportsSecureCoding;

- (id)initWithEffectiveIntervals:(id)arg1 overrideType:(unsigned long long)arg2;
- (void)setEffectiveIntervals:(id)arg1;
- (bool)isActiveForDate:(id)arg1;
- (id)nextOverrideTransitionDateAfterDate:(id)arg1;
- (id)effectiveIntervals;
- (void)setOverrideType:(unsigned long long)arg1;
- (unsigned long long)overrideType;
- (id)initWithOverrideType:(unsigned long long)arg1 mode:(unsigned long long)arg2 effectiveIntervals:(id)arg3;
- (void)setMode:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)mode;

@end
