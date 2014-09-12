/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDSheet, EDWorkbook;

@interface EMState : CMState  {
    EDWorkbook *_workbook;
    EDSheet *_currentSheet;
}

@property(retain) EDWorkbook * workbook;
@property EDSheet * currentSheet;


- (void)setCurrentSheet:(id)arg1;
- (void)setWorkbook:(id)arg1;
- (id)workbook;
- (id)currentSheet;
- (void)dealloc;

@end
