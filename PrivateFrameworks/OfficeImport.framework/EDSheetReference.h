/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDSheetReference : EDReference  {
    unsigned long long mSheetIndex;
}

+ (id)referenceWithSheetIndex:(unsigned long long)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5;

- (void)unionWithReference:(id)arg1;
- (bool)fullyAdjacentToReference:(id)arg1;
- (bool)isEqualToTableReference:(id)arg1;
- (id)initWithSheetIndex:(unsigned long long)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5;
- (bool)isSheedIndexValid;
- (unsigned long long)sheetIndex;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
