/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIFont, NSArray, UIColor, NSString;

@interface UITableViewIndex : UIControl  {
    NSArray *_titles;
    UIFont *_font;
    long long _selectedSection;
    bool_pastTop;
    bool_pastBottom;
    struct CGSize { 
        double width; 
        double height; 
    } _cachedSize;
    struct CGSize { 
        double width; 
        double height; 
    } _cachedSizeToFit;
    UIColor *_indexColor;
    UIColor *_indexBackgroundColor;
    UIColor *_indexTrackingBackgroundColor;
    double _topPadding;
    double _bottomPadding;
    double _verticalTextHeightEstimate;
    NSArray *_entries;
}

@property(retain) NSArray * titles;
@property(retain) UIFont * font;
@property(retain) UIColor * indexColor;
@property(retain) UIColor * indexBackgroundColor;
@property(retain) UIColor * indexTrackingBackgroundColor;
@property(readonly) long long selectedSection;
@property(readonly) NSString * selectedSectionTitle;
@property(readonly) bool pastTop;
@property(readonly) bool pastBottom;


- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)font;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)indexBackgroundColor;
- (id)indexTrackingBackgroundColor;
- (id)_externalDotImage;
- (void)_selectSectionForTouch:(id)arg1 withEvent:(id)arg2;
- (id)indexColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleBoundsForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 stride:(double*)arg2;
- (id)_dotImage;
- (id)_displayTitles;
- (double)_minLineSpacingForIdiom:(long long)arg1;
- (long long)_idiom;
- (void)_cacheAndMeasureTitles;
- (id)_fontForIdiom:(long long)arg1;
- (id)titles;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (unsigned long long)maximumNumberOfTitlesWithoutTruncationForHeight:(double)arg1;
- (id)selectedSectionTitle;
- (bool)pastBottom;
- (bool)pastTop;
- (long long)selectedSection;
- (void)setIndexTrackingBackgroundColor:(id)arg1;
- (void)setIndexBackgroundColor:(id)arg1;
- (void)setIndexColor:(id)arg1;
- (void)setTitles:(id)arg1;
- (void)tintColorDidChange;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (void)setFont:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
