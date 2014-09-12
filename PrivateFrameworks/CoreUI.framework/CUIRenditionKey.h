/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIRenditionKey : NSObject <NSCopying, NSCoding> {
    struct _renditionkeytoken { 
        unsigned short identifier; 
        unsigned short value; 
    } _stackKey[16];
    struct _renditionkeytoken { unsigned short x1; unsigned short x2; } *_key;
    unsigned short _highwaterKeyCount;
}

+ (id)renditionKeyWithKeyList:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
+ (id)_placeHolderKey;
+ (id)renditionKey;
+ (void)initialize;

- (id)descriptionBasedOnKeyFormat:(const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)arg1;
- (void)setThemeIdentifier:(long long)arg1;
- (long long)themeGraphicsClass;
- (void)setThemeGraphicsClass:(long long)arg1;
- (long long)themeMemoryClass;
- (void)setThemeMemoryClass:(long long)arg1;
- (void)setThemeSizeClassVertical:(long long)arg1;
- (void)setThemeSizeClassHorizontal:(long long)arg1;
- (void)setThemeSubtype:(long long)arg1;
- (void)setThemeIdiom:(long long)arg1;
- (long long)themePresentationState;
- (void)setThemePresentationState:(long long)arg1;
- (long long)themePreviousState;
- (void)setThemePreviousState:(long long)arg1;
- (long long)themeDimension2;
- (void)setThemeDimension2:(long long)arg1;
- (long long)themeDimension1;
- (void)setThemeDimension1:(long long)arg1;
- (long long)themePreviousValue;
- (void)setThemePreviousValue:(long long)arg1;
- (long long)themeDirection;
- (void)setThemeDirection:(long long)arg1;
- (void)setThemePart:(long long)arg1;
- (void)setThemeElement:(long long)arg1;
- (void)removeValueForKeyTokenIdentifier:(long long)arg1;
- (id)nameOfAttributeName:(int)arg1;
- (long long)themeSubtype;
- (long long)themeIdiom;
- (long long)themeSizeClassVertical;
- (long long)themeSizeClassHorizontal;
- (long long)themeIdentifier;
- (long long)themePart;
- (long long)themeElement;
- (unsigned short)_systemTokenCount;
- (void)_expandKeyIfNecessaryForCount:(long long)arg1;
- (void)setThemeValue:(long long)arg1;
- (void)setThemeState:(long long)arg1;
- (void)setThemeSize:(long long)arg1;
- (long long)themeScale;
- (long long)themeSize;
- (long long)themeValue;
- (long long)themeState;
- (void)setValuesFromKeyList:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (void)copyValuesFromKeyList:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (long long)themeLayer;
- (void)setThemeLayer:(long long)arg1;
- (void)setThemeScale:(long long)arg1;
- (id)initWithKeyList:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)keyList;
- (id)initWithThemeElement:(long long)arg1 themePart:(long long)arg2 themeSize:(long long)arg3 themeDirection:(long long)arg4 themeValue:(long long)arg5 themeDimension1:(long long)arg6 themeDimension2:(long long)arg7 themeState:(long long)arg8 themePresentationState:(long long)arg9 themeLayer:(long long)arg10 themeScale:(long long)arg11 themeIdentifier:(long long)arg12;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
