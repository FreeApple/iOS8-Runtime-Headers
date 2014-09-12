/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString, NSMutableArray, OADBlip;

@interface OADBlipRef : NSObject <NSCopying> {
    int mIndex;
    NSString *mName;
    NSMutableArray *mEffects;
    OADBlip *mBlip;
}

+ (id)inflatedExtensionForGzippedExtension:(id)arg1;
+ (int)blipTypeForImageData:(id)arg1;
+ (int)blipTypeForExtension:(id)arg1;
+ (id)blipRefWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3 effects:(id)arg4;
+ (int)blipTypeForContentType:(id)arg1;
+ (id)blipRefWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3;

- (void)removeEffectAtIndex:(unsigned long long)arg1;
- (void)setBlip:(id)arg1;
- (id)initWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3 effects:(id)arg4;
- (id)initWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3;
- (void)setEffects:(id)arg1;
- (id)effectAtIndex:(unsigned long long)arg1;
- (void)addEffect:(id)arg1;
- (id)effects;
- (id)blip;
- (void)setIndex:(int)arg1;
- (int)index;
- (bool)isNull;
- (void)setName:(id)arg1;
- (unsigned long long)effectCount;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
