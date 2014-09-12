/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDTableProperties, WDCharacterProperties;

@interface WDTableRowProperties : NSObject <NSCopying> {
    WDTableProperties *mTableProperties;
    WDCharacterProperties *mCharacterProperties;
    unsigned int mOriginal : 1;
    unsigned int mTracked : 1;
    unsigned int mResolved : 1;
    struct { 
        short widthBefore; 
        int widthBeforeType; 
        short widthAfter; 
        int widthAfterType; 
        long long height; 
        int heightType; 
        unsigned int widthBeforeOverridden : 1; 
        unsigned int widthBeforeTypeOverridden : 1; 
        unsigned int widthAfterOverridden : 1; 
        unsigned int widthAfterTypeOverridden : 1; 
        unsigned int heightOverridden : 1; 
        unsigned int heightTypeOverridden : 1; 
        unsigned int header : 1; 
        unsigned int headerOverridden : 1; 
    } mOriginalProperties;
    struct { 
        short widthBefore; 
        int widthBeforeType; 
        short widthAfter; 
        int widthAfterType; 
        long long height; 
        int heightType; 
        unsigned int widthBeforeOverridden : 1; 
        unsigned int widthBeforeTypeOverridden : 1; 
        unsigned int widthAfterOverridden : 1; 
        unsigned int widthAfterTypeOverridden : 1; 
        unsigned int heightOverridden : 1; 
        unsigned int heightTypeOverridden : 1; 
        unsigned int header : 1; 
        unsigned int headerOverridden : 1; 
    } mTrackedProperties;
}


- (void)addPropertiesValues:(struct { short x1; int x2; short x3; int x4; long long x5; int x6; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; }*)arg1 to:(struct { short x1; int x2; short x3; int x4; long long x5; int x6; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; }*)arg2;
- (int)heightType;
- (bool)isHeightTypeOverridden;
- (bool)isHeaderOverridden;
- (int)widthAfterType;
- (bool)isWidthAfterTypeOverridden;
- (short)widthAfter;
- (bool)isWidthAfterOverridden;
- (int)widthBeforeType;
- (bool)isWidthBeforeTypeOverridden;
- (short)widthBefore;
- (bool)isWidthBeforeOverridden;
- (void)setHeightType:(int)arg1;
- (void)setWidthAfterType:(int)arg1;
- (void)setWidthAfter:(short)arg1;
- (void)setWidthBeforeType:(int)arg1;
- (void)setWidthBefore:(short)arg1;
- (int)resolveMode;
- (void)setResolveMode:(int)arg1;
- (id)tableProperties;
- (bool)isHeightOverridden;
- (id)characterProperties;
- (void)setHeader:(bool)arg1;
- (void)addProperties:(id)arg1;
- (void)setHeight:(long long)arg1;
- (long long)height;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithDocument:(id)arg1;
- (bool)header;

@end
