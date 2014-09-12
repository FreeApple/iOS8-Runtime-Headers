/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADRelativeRect;

@interface OADPathShade : OADShade  {
    OADRelativeRect *mFillToRect;
    boolmIsFillToRectOverridden;
    int mType;
    boolmIsTypeOverridden;
}

+ (id)defaultProperties;

- (bool)isTypeOverridden;
- (id)initWithDefaults;
- (bool)isFillToRectOverridden;
- (void)setFillToRect:(id)arg1;
- (id)fillToRect;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setType:(int)arg1;
- (int)type;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
