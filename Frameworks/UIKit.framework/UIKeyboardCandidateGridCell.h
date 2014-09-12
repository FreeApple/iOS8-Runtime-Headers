/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UILabel;

@interface UIKeyboardCandidateGridCell : UICollectionViewCell  {
    bool_dummy;
    bool_usesGroupHeaderAppearance;
    bool_shouldShowCandidateNumber;
    bool_secondaryCandidateAppearance;
    bool_emphasizedAppearance;
    int _candidatesVisualStyle;
    NSString *_text;
    NSString *_alternativeText;
    unsigned long long _candidateNumber;
    unsigned long long _edges;
    double _rowHeight;
    double _rightPadding;
    struct { 
        unsigned int idiom : 6; 
        unsigned int landscape : 1; 
        unsigned int split : 1; 
        unsigned int appearance : 8; 
        unsigned int rendering : 16; 
    } _visualStyling;
    long long _textAlignment;
    double _cellPadding;
    double _minimumWidth;
    UILabel *_textLabel;
    UILabel *_alternativeTextLabel;
    UILabel *_candidateNumberLabel;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
    struct CGSize { 
        double width; 
        double height; 
    } _candidateNumberSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _visibleBounds;
}

@property bool dummy;
@property bool usesGroupHeaderAppearance;
@property(copy) NSString * text;
@property(copy) NSString * alternativeText;
@property unsigned long long candidateNumber;
@property bool shouldShowCandidateNumber;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleBounds;
@property bool secondaryCandidateAppearance;
@property bool emphasizedAppearance;
@property unsigned long long edges;
@property double rowHeight;
@property double rightPadding;
@property struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; } visualStyling;
@property int candidatesVisualStyle;
@property long long textAlignment;
@property struct CGSize { double x1; double x2; } size;
@property struct CGSize { double x1; double x2; } candidateNumberSize;
@property double cellPadding;
@property double minimumWidth;
@property(readonly) bool canShowCandidateNumber;
@property(retain) UILabel * textLabel;
@property(retain) UILabel * alternativeTextLabel;
@property(retain) UILabel * candidateNumberLabel;

+ (double)widthForCandidate:(id)arg1 candidateNumber:(unsigned long long)arg2 visualStyle:(int)arg3;
+ (struct CGSize { double x1; double x2; })sizeForGroupHeader:(id)arg1 visualStyle:(int)arg2;
+ (double)rightPaddingForIndex;
+ (bool)drawsSideBorders;
+ (struct CGColor { }*)legacy_outlineShadowColorForVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1 candidatesVisualStyle:(int)arg2;
+ (struct CGColor { }*)legacy_outlineColorForVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1 candidatesVisualStyle:(int)arg2;
+ (id)reuseIdentifier;

- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)text;
- (id)alternativeText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)cellPadding;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })size;
- (void)setCandidateNumberSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })candidateNumberSize;
- (void)updateGroupHeaderLabelPosition;
- (void)updateLabelColors;
- (void)setCandidateNumberLabel:(id)arg1;
- (void)setAlternativeTextLabel:(id)arg1;
- (bool)canShowCandidateNumber;
- (double)rightPadding;
- (void)setTextLabel:(id)arg1;
- (id)candidateNumberLabel;
- (id)alternativeTextLabel;
- (void)drawBackgroundAndBorders;
- (void)setEmphasizedAppearance:(bool)arg1;
- (bool)emphasizedAppearance;
- (void)setSecondaryCandidateAppearance:(bool)arg1;
- (bool)secondaryCandidateAppearance;
- (void)setCandidateNumber:(unsigned long long)arg1;
- (void)setCellPadding:(double)arg1;
- (void)setRightPadding:(double)arg1;
- (unsigned long long)edges;
- (void)setUsesGroupHeaderAppearance:(bool)arg1;
- (void)setDummy:(bool)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)updateLabels;
- (void)setVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)usesGroupHeaderAppearance;
- (unsigned long long)candidateNumber;
- (bool)shouldShowCandidateNumber;
- (void)setShouldShowCandidateNumber:(bool)arg1;
- (void)setAlternativeText:(id)arg1;
- (bool)dummy;
- (int)candidatesVisualStyle;
- (void)setCandidatesVisualStyle:(int)arg1;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })visualStyling;
- (void)setVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1;
- (long long)textAlignment;
- (id)textLabel;
- (void)setSelected:(bool)arg1;
- (void)prepareForReuse;
- (double)minimumWidth;
- (void)setMinimumWidth:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBounds;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setEdges:(unsigned long long)arg1;
- (double)rowHeight;
- (void)setRowHeight:(double)arg1;

@end
