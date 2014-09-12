/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface OITSUDateParser : NSObject  {
    NSMutableArray *mFormatCategories;
    struct __CFLocale { } *mLocale;
    boolmIsJapaneseLocale;
    struct __CFDateFormatter { } *mSpecialCaseFormatter;
}

+ (id)parserForDefaultLocale;

- (void)parseFormat:(id)arg1 initialPattern:(id*)arg2 separator:(unsigned short*)arg3;
- (struct __CFDate { }*)newDateFromString:(struct __CFString { }*)arg1 successfulFormatString:(const struct __CFString {}**)arg2;
- (struct __CFDate { }*)newDateFromString:(struct __CFString { }*)arg1 preferredFormatString:(struct __CFString { }*)arg2 successfulFormatString:(const struct __CFString {}**)arg3 tryAggressiveFormats:(bool)arg4;
- (struct __CFDate { }*)newDateFromStringTryingFormats:(struct __CFString { }*)arg1 locale:(struct __CFLocale { }*)arg2 formats:(id)arg3 outSuccessfulFormatString:(const struct __CFString {}**)arg4;
- (struct __CFDateFormatter { }*)specialCaseDateFormatterForLocale:(struct __CFLocale { }*)arg1;
- (void)addFormat:(id)arg1 locale:(struct __CFLocale { }*)arg2 formatCategoryMap:(id)arg3;
- (void)datePreferencesChanged:(id)arg1;
- (id)initWithLocale:(struct __CFLocale { }*)arg1;
- (void)dealloc;

@end
