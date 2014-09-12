/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADColorTransform : NSObject <NSCopying> {
    int mType;
}

+ (id)applyHSLTransform:(id)arg1 toColor:(id)arg2;
+ (id)applyRGBTransform:(id)arg1 toColor:(id)arg2 skipGamma:(bool)arg3;
+ (id)applyExpTransformWithValue:(float)arg1 toColor:(id)arg2;
+ (float)applyAlphaTransform:(id)arg1 toAlpha:(float)arg2;
+ (float)alphaByApplyingTransforms:(id)arg1 toAlpha:(float)arg2;
+ (id)colorByApplyingTransforms:(id)arg1 toColor:(id)arg2;

- (id)initWithType:(int)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (int)type;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
