/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class UIColor, NSString, NSMutableDictionary, NSURL, NSNumber;

@interface IKViewElementStyle : NSObject  {
    NSString *_classSelector;
    NSMutableDictionary *_styleDict;
}

@property(readonly) UIColor * color;
@property(readonly) UIColor * backgroundColor;
@property(readonly) NSString * badgeTreatment;
@property(readonly) UIColor * borderColor;
@property(readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } borderWidths;
@property(readonly) NSString * dividerType;
@property(readonly) double fontSize;
@property(readonly) NSString * fontWeight;
@property(readonly) long long maxTextLines;
@property(readonly) unsigned long long textAlignment;
@property(readonly) unsigned long long elementAlignment;
@property(readonly) unsigned long long elementPosition;
@property(readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } elementPadding;
@property(readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } elementMargin;
@property(readonly) long long columnCount;
@property(readonly) NSString * columnType;
@property(readonly) NSString * columnItemType;
@property(readonly) NSString * rowHeight;
@property(readonly) NSString * itemWidth;
@property(readonly) NSString * itemHeight;
@property(readonly) NSURL * imagePlaceholderURL;
@property(readonly) long long reflectImage;
@property(readonly) long long fillImage;
@property(readonly) unsigned long long imagePosition;
@property(readonly) NSString * imageTreatment;
@property(readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property(readonly) NSString * transition;
@property(readonly) NSNumber * transitionInterval;
@property(readonly) NSString * labelsState;
@property(readonly) unsigned long long ordinalMaxLength;
@property(readonly) NSString * lockupType;
@property(readonly) NSString * visibility;
@property(readonly) NSString * cardType;
@property(retain) NSString * classSelector;
@property(retain) NSMutableDictionary * styleDict;

+ (id)elementStyleWithParentStyle:(id)arg1 elementStyle:(id)arg2 inlineStyle:(id)arg3;
+ (id)elementStyleWithSelector:(id)arg1 aggregatingStyles:(id)arg2;
+ (id)elementStylesFromString:(id)arg1;
+ (unsigned long long)transitionFromString:(id)arg1;
+ (unsigned long long)positionFromString:(id)arg1;
+ (unsigned long long)alignmentFromString:(id)arg1;
+ (void)registerStyle:(id)arg1 withType:(unsigned long long)arg2 inherited:(bool)arg3;
+ (void)initialize;

- (void)setStyleDict:(id)arg1;
- (void)setClassSelector:(id)arg1;
- (id)classSelector;
- (unsigned long long)ordinalMaxLength;
- (id)labelsState;
- (id)transitionInterval;
- (id)itemHeight;
- (id)columnItemType;
- (id)columnType;
- (long long)maxTextLines;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })elementMargin;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsFromString:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformFromString:(id)arg1;
- (id)_urlFromString:(id)arg1;
- (id)_newColorFromString:(id)arg1;
- (id)_fontSizeFromString:(id)arg1;
- (id)_doubleFromString:(id)arg1;
- (id)_numberFromString:(id)arg1;
- (id)styleDict;
- (void)_parse:(id)arg1;
- (void)_addParentStyle:(id)arg1;
- (void)_addElementStyle:(id)arg1;
- (id)initWithClassSelector:(id)arg1;
- (id)initWithStyle:(id)arg1 classSelector:(id)arg2;
- (id)initWithString:(id)arg1 classSelector:(id)arg2;
- (long long)reflectImage;
- (unsigned long long)imagePosition;
- (id)imagePlaceholderURL;
- (unsigned long long)elementAlignment;
- (id)dividerType;
- (id)valueForStyle:(id)arg1;
- (unsigned long long)elementPosition;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })elementPadding;
- (id)lockupType;
- (id)cardType;
- (id)badgeTreatment;
- (id)imageTreatment;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })borderWidths;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (id)visibility;
- (id)fontWeight;
- (double)fontSize;
- (id)borderColor;
- (id)backgroundColor;
- (id)color;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (void).cxx_destruct;
- (id)description;
- (long long)fillImage;
- (long long)columnCount;
- (id)itemWidth;
- (id)transition;
- (unsigned long long)textAlignment;
- (id)rowHeight;

@end
