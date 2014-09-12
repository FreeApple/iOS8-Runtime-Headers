/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class CUIRenditionKey, NSString;

@interface CUINamedImage : NSObject  {
    CUIRenditionKey *_key;
    unsigned long long _storageRef;
    NSString *_name;
}

@property(copy) NSString * name;
@property(readonly) struct CGImage { }* image;
@property(readonly) struct CGSize { double x1; double x2; } size;
@property(readonly) double scale;
@property(readonly) long long imageType;
@property(readonly) struct { double x1; double x2; double x3; double x4; } edgeInsets;
@property(readonly) long long resizingMode;
@property(readonly) double opacity;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } alignmentRect;
@property(readonly) struct { double x1; double x2; double x3; double x4; } alignmentEdgeInsets;
@property(readonly) int blendMode;
@property(readonly) bool hasSliceInformation;
@property(readonly) bool isVectorBased;
@property(readonly) bool isTemplate;
@property(readonly) long long templateRenderingMode;
@property(readonly) bool isStructured;
@property(readonly) int exifOrientation;


- (void)setName:(id)arg1;
- (double)opacity;
- (unsigned long long)subtype;
- (bool)isStructured;
- (long long)graphicsClass;
- (long long)memoryClass;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRect;
- (long long)resizingMode;
- (struct { double x1; double x2; double x3; double x4; })alignmentEdgeInsets;
- (long long)imageType;
- (bool)isTemplate;
- (struct { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)renditionKey;
- (double)positionOfSliceBoundary:(unsigned int)arg1;
- (long long)sizeClassVertical;
- (long long)sizeClassHorizontal;
- (long long)idiom;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;
- (id)_renditionForSpecificKey:(id)arg1;
- (id)_themeStore;
- (id)_rendition;
- (int)exifOrientation;
- (bool)isVectorBased;
- (int)blendMode;
- (long long)templateRenderingMode;
- (struct CGImage { }*)image;
- (id)name;
- (void)dealloc;
- (id)description;
- (struct CGSize { double x1; double x2; })size;
- (double)scale;
- (id)baseKey;
- (bool)hasSliceInformation;
- (id)UIImage;
- (id)traitCollection;

@end
