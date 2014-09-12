/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, NSDateFormatter;

@interface SUScriptDateFormatter : SUScriptObject  {
    NSDateFormatter *_dateFormatter;
}

@property(copy) NSString * dateFormat;
@property unsigned long long dateStyle;
@property(copy) NSString * localeIdentifier;
@property unsigned long long timeStyle;
@property(readonly) unsigned long long dateFormatterFullStyle;
@property(readonly) unsigned long long dateFormatterLongStyle;
@property(readonly) unsigned long long dateFormatterMediumStyle;
@property(readonly) unsigned long long dateFormatterNoStyle;
@property(readonly) unsigned long long dateFormatterShortStyle;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (unsigned long long)dateFormatterShortStyle;
- (unsigned long long)dateFormatterNoStyle;
- (unsigned long long)dateFormatterMediumStyle;
- (unsigned long long)dateFormatterLongStyle;
- (unsigned long long)dateFormatterFullStyle;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setDateFormat:(id)arg1;
- (id)attributeKeys;
- (id)stringFromDate:(id)arg1;
- (id)init;
- (id)localeIdentifier;
- (void)dealloc;
- (unsigned long long)timeStyle;
- (unsigned long long)dateStyle;
- (void)setTimeStyle:(unsigned long long)arg1;
- (void)setDateStyle:(unsigned long long)arg1;
- (id)dateFormat;
- (double)dateFromString:(id)arg1;

@end
