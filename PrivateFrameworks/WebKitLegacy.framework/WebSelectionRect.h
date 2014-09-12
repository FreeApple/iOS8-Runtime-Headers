/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebSelectionRect : NSObject <NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } m_rect;
    int m_writingDirection;
    boolm_isLineBreak;
    boolm_isFirstOnLine;
    boolm_isLastOnLine;
    boolm_containsStart;
    boolm_containsEnd;
    boolm_isInFixedPosition;
    boolm_isHorizontal;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;
@property int writingDirection;
@property bool isLineBreak;
@property bool isFirstOnLine;
@property bool isLastOnLine;
@property bool containsStart;
@property bool containsEnd;
@property bool isInFixedPosition;
@property bool isHorizontal;

+ (id)selectionRect;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endEdge:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })startEdge:(id)arg1;

- (bool)isInFixedPosition;
- (bool)isLastOnLine;
- (bool)isFirstOnLine;
- (bool)isLineBreak;
- (void)setIsHorizontal:(bool)arg1;
- (void)setIsInFixedPosition:(bool)arg1;
- (void)setContainsEnd:(bool)arg1;
- (void)setContainsStart:(bool)arg1;
- (void)setIsLastOnLine:(bool)arg1;
- (void)setIsFirstOnLine:(bool)arg1;
- (void)setIsLineBreak:(bool)arg1;
- (void)setWritingDirection:(int)arg1;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)containsEnd;
- (int)writingDirection;
- (bool)isHorizontal;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (bool)containsStart;
- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
