/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADStroke, OADTableCell3DProperties, OADFill;

@interface OADTableCellProperties : NSObject  {
    OADStroke *mLeftStroke;
    boolmIsLeftStrokeOverridden;
    OADStroke *mRightStroke;
    boolmIsRightStrokeOverridden;
    OADStroke *mTopStroke;
    boolmIsTopStrokeOverridden;
    OADStroke *mBottomStroke;
    boolmIsBottomStrokeOverridden;
    OADStroke *mTopLeftToBottomRightStroke;
    boolmIsTopLeftToBottomRightStrokeOverridden;
    OADStroke *mBottomLeftToTopRightStroke;
    boolmIsBottomLeftToTopRightStrokeOverridden;
    OADTableCell3DProperties *mThreeDProperties;
    boolmIsThreeDPropertiesOverridden;
    OADFill *mFill;
    boolmIsFillOverridden;
    float mLeftMargin;
    boolmIsLeftMarginOverridden;
    float mRightMargin;
    boolmIsRightMarginOverridden;
    float mTopMargin;
    boolmIsTopMarginOverridden;
    float mBottomMargin;
    boolmIsBottomMarginOverridden;
    int mTextFlow;
    boolmIsTextFlowOverridden;
    int mTextAnchor;
    boolmIsTextAnchorOverridden;
    boolmTextAnchorCenter;
    boolmIsTextAnchorCenterOverridden;
    int mTextHorizontalOverflow;
    boolmIsTextHorizontalOverflowOverridden;
}


- (bool)isTextHorizontalOverflowOverridden;
- (int)textHorizontalOverflow;
- (bool)isTextAnchorCenterOverridden;
- (bool)textAnchorCenter;
- (bool)isTextFlowOverridden;
- (bool)isThreeDPropertiesOverridden;
- (void)setThreeDProperties:(id)arg1;
- (id)threeDProperties;
- (id)strokeNormalToDir:(int)arg1 bound:(int)arg2;
- (bool)isBottomLeftToTopRightStrokeOverridden;
- (bool)isTopLeftToBottomRightStrokeOverridden;
- (id)stroke:(int)arg1;
- (id)bottomLeftToTopRightStroke;
- (id)topLeftToBottomRightStroke;
- (void)setTextHorizontalOverflow:(int)arg1;
- (void)setTextAnchorCenter:(bool)arg1;
- (void)setTextAnchor:(int)arg1;
- (void)setBottomLeftToTopRightStroke:(id)arg1;
- (void)setTopLeftToBottomRightStroke:(id)arg1;
- (void)setBottomStroke:(id)arg1;
- (void)setTopStroke:(id)arg1;
- (void)setRightStroke:(id)arg1;
- (void)setLeftStroke:(id)arg1;
- (bool)isTextAnchorOverridden;
- (id)rightStroke;
- (bool)isRightStrokeOverridden;
- (id)leftStroke;
- (bool)isLeftStrokeOverridden;
- (id)bottomStroke;
- (bool)isBottomStrokeOverridden;
- (id)topStroke;
- (bool)isTopStrokeOverridden;
- (int)textAnchor;
- (void)setFill:(id)arg1;
- (bool)isFillOverridden;
- (bool)isBottomMarginOverridden;
- (bool)isTopMarginOverridden;
- (bool)isRightMarginOverridden;
- (bool)isLeftMarginOverridden;
- (float)rightMargin;
- (float)leftMargin;
- (float)bottomMargin;
- (float)topMargin;
- (int)textFlow;
- (void)setTextFlow:(int)arg1;
- (void)setBottomMargin:(float)arg1;
- (void)setTopMargin:(float)arg1;
- (void)setRightMargin:(float)arg1;
- (void)setLeftMargin:(float)arg1;
- (void)dealloc;
- (id)fill;

@end
