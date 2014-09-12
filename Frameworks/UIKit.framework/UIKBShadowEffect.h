/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIKBShadowEffect : NSObject <UIKBRenderEffect> {
    NSString *_colorName;
    double _weight;
    struct CGSize { 
        double width; 
        double height; 
    } _offset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _insets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _concaveInsets;
}

@property struct CGSize { double x1; double x2; } offset;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } concaveInsets;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) bool isValid;
@property(readonly) bool renderUnder;
@property(readonly) SEL renderSelector;
@property double weight;

+ (id)effectWithColor:(id)arg1 offset:(struct CGSize { double x1; double x2; })arg2 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 weight:(double)arg4;

- (void)setOffset:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })offset;
- (struct CGColor { }*)CGColor;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })concaveInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (id)initWithColor:(id)arg1 offset:(struct CGSize { double x1; double x2; })arg2 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 weight:(double)arg4;
- (void)setWeight:(double)arg1;
- (SEL)renderSelector;
- (bool)renderUnder;
- (double)weight;
- (void)setConcaveInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
