/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIFlowLayoutRow, _UIFlowLayoutSection;

@interface _UIFlowLayoutItem : NSObject  {
    _UIFlowLayoutSection *_section;
    _UIFlowLayoutRow *_rowObject;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _itemFrame;
    struct { 
        unsigned int positionEstimated : 1; 
    } _itemFlags;
}

@property _UIFlowLayoutSection * section;
@property _UIFlowLayoutRow * rowObject;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } itemFrame;
@property(getter=isPositionEstimated) bool positionEstimated;


- (id)copy;
- (void)setRowObject:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setPositionEstimated:(bool)arg1;
- (bool)isPositionEstimated;
- (id)rowObject;
- (void)setItemFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })itemFrame;
- (id)section;

@end
