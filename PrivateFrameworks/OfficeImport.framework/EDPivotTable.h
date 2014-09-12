/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDResources, NSString, EDCollection, EDReference;

@interface EDPivotTable : NSObject  {
    EDResources *mResources;
    boolmShowLastColumn;
    boolmShowRowHeaders;
    boolmShowColumnHeaders;
    boolmShowRowStripes;
    boolmShowColumnStripes;
    boolmApplyNumberFormats;
    boolmApplyBorderFormats;
    boolmApplyFontFormats;
    boolmApplyPatternFormats;
    boolmApplyAlignmentFormats;
    boolmApplyWidthHeightFormats;
    boolmUseAutoFormatting;
    boolmColGrandTotals;
    boolmRowGrandTotals;
    boolmCustomListSort;
    boolmCompactData;
    boolmCompact;
    boolmDataCaption;
    boolmDataOnRows;
    boolmDisableFieldList;
    boolmMergeItem;
    boolmMultipleFieldFilters;
    boolmOutline;
    boolmOutlineData;
    boolmPageOverThenDown;
    boolmShowCalcMbrs;
    boolmShowDataDropDown;
    boolmShowDropZones;
    boolmShowEmptyCol;
    boolmShowEmptyRow;
    boolmShowHeaders;
    boolmShowMemberPropertyTips;
    boolmShowMissing;
    boolmShowMultipleLabel;
    boolmSubtotalHiddenItems;
    NSString *mName;
    NSString *mStyleName;
    NSString *mColumnHeaderCaption;
    NSString *mRowHeaderCaption;
    NSString *mPageStyleName;
    EDReference *mPivotTableRange;
    unsigned long long mStyleIndex;
    long long mFirstHeaderRow;
    long long mFirstDataRow;
    long long mFirstDataColumn;
    unsigned long long mRowPageCount;
    unsigned long long mColumnPageCount;
    unsigned long long mPageWrap;
    unsigned long long mAutoFormatId;
    unsigned long long mDataPosition;
    EDCollection *mRowFields;
    EDCollection *mColumnFields;
    EDCollection *mRowItems;
    EDCollection *mColumnItems;
    EDCollection *mPivotFields;
    EDCollection *mDataFields;
    EDCollection *mConditionalFields;
    EDCollection *mPivotAreas;
    EDCollection *mPageFields;
}

+ (id)pivotTableWithResources:(id)arg1;

- (void)setColumnPageCount:(unsigned long long)arg1;
- (void)setRowPageCount:(unsigned long long)arg1;
- (void)setFirstDataColumn:(long long)arg1;
- (void)setFirstDataRow:(long long)arg1;
- (void)setFirstHeaderRow:(long long)arg1;
- (void)setPivotTableRange:(id)arg1;
- (void)setShowColumnHeaders:(bool)arg1;
- (void)setShowRowHeaders:(bool)arg1;
- (void)setDataPosition:(unsigned long long)arg1;
- (void)setAutoFormatId:(unsigned long long)arg1;
- (void)setPageWrap:(unsigned long long)arg1;
- (void)setSubtotalHiddenItems:(bool)arg1;
- (void)setShowMissing:(bool)arg1;
- (void)setShowMultipleLabel:(bool)arg1;
- (void)setShowMemberPropertyTips:(bool)arg1;
- (void)setShowHeaders:(bool)arg1;
- (void)setShowEmptyRow:(bool)arg1;
- (void)setShowEmptyCol:(bool)arg1;
- (void)setShowDropZones:(bool)arg1;
- (void)setShowDataDropDown:(bool)arg1;
- (void)setShowCalcMbrs:(bool)arg1;
- (void)setPageOverThenDown:(bool)arg1;
- (void)setOutlineData:(bool)arg1;
- (void)setMultipleFieldFilters:(bool)arg1;
- (void)setDisableFieldList:(bool)arg1;
- (void)setMergeItem:(bool)arg1;
- (void)setDataOnRows:(bool)arg1;
- (void)setDataCaption:(bool)arg1;
- (void)setCompactData:(bool)arg1;
- (void)setCustomListSort:(bool)arg1;
- (void)setRowGrandTotals:(bool)arg1;
- (void)setUseAutoFormatting:(bool)arg1;
- (void)setColGrandTotals:(bool)arg1;
- (void)setApplyWidthHeightFormats:(bool)arg1;
- (void)setApplyAlignmentFormats:(bool)arg1;
- (void)setApplyPatternFormats:(bool)arg1;
- (void)setApplyFontFormats:(bool)arg1;
- (void)setApplyBorderFormats:(bool)arg1;
- (void)setApplyNumberFormats:(bool)arg1;
- (void)setPageStyleName:(id)arg1;
- (void)setRowHeaderCaption:(id)arg1;
- (void)setColumnHeaderCaption:(id)arg1;
- (id)conditionalFormats;
- (id)dataFields;
- (id)pageFields;
- (id)columnItems;
- (id)columnFields;
- (id)rowItems;
- (id)rowFields;
- (id)pivotFields;
- (long long)firstDataColumn;
- (long long)firstDataRow;
- (long long)firstHeaderRow;
- (id)pivotTableRange;
- (bool)showRowHeaders;
- (bool)showColumnHeaders;
- (void)setShowColumnStripes:(bool)arg1;
- (bool)showColumnStripes;
- (void)setShowRowStripes:(bool)arg1;
- (bool)showRowStripes;
- (void)setShowLastColumn:(bool)arg1;
- (bool)showLastColumn;
- (void)setStyleName:(id)arg1;
- (id)pivotAreas;
- (bool)subtotalHiddenItems;
- (bool)showMultipleLabel;
- (bool)showMissing;
- (bool)showMemberPropertyTips;
- (bool)showHeaders;
- (bool)showEmptyRow;
- (bool)showEmptyCol;
- (bool)showDropZones;
- (bool)showDataDropDown;
- (bool)showCalcMbrs;
- (bool)pageOverThenDown;
- (bool)outlineData;
- (bool)multipleFieldFilters;
- (bool)mergeItem;
- (bool)disableFieldList;
- (bool)dataOnRows;
- (bool)dataCaption;
- (bool)compactData;
- (bool)customListSort;
- (bool)rowGrandTotals;
- (bool)useAutoFormatting;
- (bool)colGrandTotals;
- (bool)applyWidthHeightFormats;
- (bool)applyAlignmentFormats;
- (bool)applyPatternFormats;
- (bool)applyFontFormats;
- (bool)applyBorderFormats;
- (bool)applyNumberFormats;
- (unsigned long long)dataPosition;
- (unsigned long long)autoFormatId;
- (unsigned long long)pageWrap;
- (unsigned long long)columnPageCount;
- (unsigned long long)rowPageCount;
- (id)pageStyleName;
- (id)rowHeaderCaption;
- (id)columnHeaderCaption;
- (void)setStyleIndex:(unsigned long long)arg1;
- (id)initWithResources:(id)arg1;
- (unsigned long long)styleIndex;
- (id)styleName;
- (void)setName:(id)arg1;
- (bool)outline;
- (void)setOutline:(bool)arg1;
- (void)setCompact:(bool)arg1;
- (void)setStyle:(id)arg1;
- (id)style;
- (id)name;
- (void)dealloc;
- (bool)compact;

@end
