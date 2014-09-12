/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary;

@interface OADFontScheme : NSObject  {
    NSMutableDictionary *mMajorFont;
    NSMutableDictionary *mMinorFont;
}

+ (void)addFontEntry:(id)arg1 script:(id)arg2 typeface:(id)arg3;

- (id)minorFont;
- (unsigned long long)minorFontCount;
- (id)majorFont;
- (unsigned long long)majorFontCount;
- (id)minorTypefaceForScript:(id)arg1;
- (id)majorTypefaceForScript:(id)arg1;
- (id)fontForFontSchemeRef:(id)arg1;
- (bool)isFontSchemeRef:(id)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;

@end
