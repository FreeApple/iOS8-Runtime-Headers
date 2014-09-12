/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIColor, NSMutableDictionary;

@interface SUToolbarAppearance : NSObject <NSCopying> {
    NSMutableDictionary *_backgroundImages;
    NSMutableDictionary *_shadowImages;
    UIColor *_tintColor;
}

@property(retain) UIColor * tintColor;

+ (id)defaultToolbarAppearance;

- (id)shadowImageForPosition:(long long)arg1;
- (void)setShadowImage:(id)arg1 forPosition:(long long)arg2;
- (id)backgroundImageForPosition:(long long)arg1 barMetrics:(long long)arg2;
- (void)enumerateShadowImagesUsingBlock:(id)arg1;
- (void)enumerateBackgroundImagesUsingBlock:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)styleToolbar:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;

@end
