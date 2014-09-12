/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADStroke, NSArray, NSString, OADFill, OADScene3D, OADShape3D;

@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
    OADFill *mFill;
    NSArray *mEffects;
    NSArray *mExts;
    OADScene3D *mScene3D;
    OADShape3D *mShape3D;
    OADStroke *mStroke;
    unsigned int mHasIsBehindText : 1;
    unsigned int mIsBehindText : 1;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)hasEffects;
- (id)initWithDefaults;
- (void)removeUnnecessaryOverrides;
- (id)shape3D;
- (id)scene3D;
- (bool)hasShape3D;
- (bool)hasScene3D;
- (bool)isBehindText;
- (id)exts;
- (bool)hasIsBehindText;
- (bool)hasExts;
- (void)setExts:(id)arg1;
- (void)setIsBehindText:(bool)arg1;
- (void)setShape3D:(id)arg1;
- (void)setScene3D:(id)arg1;
- (void)setEffects:(id)arg1;
- (id)effects;
- (void)setStroke:(id)arg1;
- (void)setFill:(id)arg1;
- (bool)hasFill;
- (bool)hasStroke;
- (void)setParent:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)stroke;
- (id)fill;

@end
