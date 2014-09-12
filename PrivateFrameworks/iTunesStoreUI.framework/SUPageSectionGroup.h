/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, UIColor;

@interface SUPageSectionGroup : NSObject <NSCopying> {
    long long _defaultSectionIndex;
    NSArray *_sections;
    long long _style;
    UIColor *_tintColor;
    long long _tintStyle;
}

@property long long defaultSectionIndex;
@property(retain) NSArray * sections;
@property long long style;
@property(retain) UIColor * tintColor;
@property long long tintStyle;


- (long long)_sectionStyleForString:(id)arg1;
- (void)setTintStyle:(long long)arg1;
- (long long)tintStyle;
- (long long)defaultSectionIndex;
- (void)setDefaultSectionIndex:(long long)arg1;
- (id)initWithSectionsDictionary:(id)arg1;
- (bool)loadFromDictionary:(id)arg1;
- (id)sections;
- (void)setStyle:(long long)arg1;
- (long long)style;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setSections:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;

@end
