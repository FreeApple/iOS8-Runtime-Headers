/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;

@interface UITextViewPrintFormatter : UIViewPrintFormatter  {
    struct { 
        unsigned int initializedUsedRects : 1; 
    } _textViewPrintFormatterFlags;
    NSArray *_pageData;
}


- (id)text;
- (id)font;
- (id)color;
- (void)setColor:(id)arg1;
- (void)dealloc;
- (id)_pageData;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forPageAtIndex:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForPageAtIndex:(long long)arg1;
- (long long)_recalcPageCount;
- (id)_textView;
- (long long)textAlignment;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setFont:(id)arg1;

@end
