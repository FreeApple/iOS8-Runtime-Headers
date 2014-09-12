/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIViewElement, NSMutableArray;

@interface SKUIProductLockupLayout : NSObject  {
    long long _bottomLeftLayoutStyle;
    NSMutableArray *_bottomLeftViewElements;
    NSMutableArray *_bottomRightViewElements;
    NSMutableArray *_middleLeftViewElements;
    SKUIViewElement *_productImageElement;
    NSMutableArray *_topLeftViewElements;
    NSMutableArray *_topRightViewElements;
}

@property(readonly) long long bottomLeftLayoutStyle;


- (struct CGSize { double x1; double x2; })_sizeForSegmentedControl:(id)arg1 width:(double)arg2;
- (struct CGSize { double x1; double x2; })_sizeForVerticalViewElements:(id)arg1 width:(double)arg2 context:(id)arg3;
- (double)bottomPaddingForViewElement:(id)arg1;
- (double)topPaddingForViewElement:(id)arg1;
- (long long)bottomLeftLayoutStyle;
- (void)enumerateViewElementsForWidth:(double)arg1 context:(id)arg2 usingBlock:(id)arg3;
- (struct SKUIProductLockupLayoutSizing { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; })sizingToFitWidth:(double)arg1 context:(id)arg2;
- (struct SKUIProductLockupLayoutSizing { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; })layoutWidthsForWidth:(double)arg1 context:(id)arg2;
- (id)viewElementsForSection:(long long)arg1;
- (double)metadataWidthForWidth:(double)arg1 context:(id)arg2;
- (id)initWithLockup:(id)arg1 width:(double)arg2 context:(id)arg3;
- (struct CGSize { double x1; double x2; })_sizeForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void).cxx_destruct;

@end
