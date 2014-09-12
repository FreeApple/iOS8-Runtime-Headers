/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDStyle, EDWorkbook;

@interface EMCellNumberMapper : CMMapper  {
    double edValue;
    EDStyle *edStyle;
    EDWorkbook *workbook;
}


- (id)insertRedSpanIfNegativeAt:(id)arg1;
- (id)formatValueAsNumber;
- (id)initWithDoubleValue:(double)arg1 style:(id)arg2 workbook:(id)arg3 parent:(id)arg4;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end
