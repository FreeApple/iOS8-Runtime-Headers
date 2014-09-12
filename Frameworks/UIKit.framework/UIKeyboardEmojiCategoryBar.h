/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIImage, UIKeyboardEmojiCategoryController, NSMutableArray;

@interface UIKeyboardEmojiCategoryBar : UIKBKeyView <UIKeyboardEmojiCategoryControl> {
    UIKeyboardEmojiCategoryController *_categoryController;
    int _selected;
    int _total;
    int _dividerTotal;
    UIImage *_darkDivider;
    UIImage *_plainDivider;
    UIImage *_selectedDivider;
    NSMutableArray *_segmentViews;
    NSMutableArray *_dividerViews;
}

@property long long selectedIndex;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForDivider:(int)arg1;
- (void)releaseImagesAndViews;
- (void)setCategory:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)setSelectedIndex:(long long)arg1;
- (long long)selectedIndex;
- (void)sendActionsForControlEvents:(unsigned long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
