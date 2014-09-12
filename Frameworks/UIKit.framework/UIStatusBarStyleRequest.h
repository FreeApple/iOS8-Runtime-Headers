/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, NSNumber;

@interface UIStatusBarStyleRequest : NSObject <NSMutableCopying, NSCopying> {
    long long _style;
    bool_legacy;
    long long _legibilityStyle;
    UIColor *_foregroundColor;
    NSNumber *_overrideHeight;
}

@property(readonly) long long style;
@property(getter=isLegacy,readonly) bool legacy;
@property(readonly) long long legibilityStyle;
@property(retain,readonly) UIColor * foregroundColor;
@property(retain,readonly) NSNumber * overrideHeight;


- (id)foregroundColor;
- (long long)style;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)_copyWithZone:(struct _NSZone { }*)arg1 class:(Class)arg2;
- (id)initWithStyle:(long long)arg1 legacy:(bool)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4;
- (id)initWithStyle:(long long)arg1 legacy:(bool)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 overrideHeight:(id)arg5;
- (bool)isLegacy;
- (id)overrideHeight;
- (long long)legibilityStyle;
- (bool)isDoubleHeight;
- (bool)isTranslucent;

@end
