/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColor;

@interface OADAdjustedColor : OADColor  {
    OADColor *mBaseColor;
    int mAdjustmentType;
    unsigned char mAdjustmentParam;
    boolmInvert;
    boolmInvert128;
    boolmGray;
}


- (bool)invert128;
- (unsigned char)adjustmentParam;
- (bool)gray;
- (id)baseColor;
- (id)initWithBaseColor:(id)arg1 adjustmentType:(int)arg2 adjustmentParam:(unsigned char)arg3 invert:(bool)arg4 invert128:(bool)arg5 gray:(bool)arg6;
- (int)adjustmentType;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (bool)invert;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
