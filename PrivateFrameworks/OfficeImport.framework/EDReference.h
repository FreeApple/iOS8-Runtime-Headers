/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDReference : NSObject <NSCopying> {
    struct EDAreaReference { 
        int firstRow; 
        int firstColumn; 
        int lastRow; 
        int lastColumn; 
    } mAreaReference;
}

+ (id)referenceWithAreaReference:(struct EDAreaReference { int x1; int x2; int x3; int x4; }*)arg1;
+ (id)referenceWithReference:(id)arg1;
+ (id)referenceWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4;
+ (id)reference;

- (void)unionWithReference:(id)arg1;
- (id)initWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4;
- (id)initWithAreaReference:(struct EDAreaReference { int x1; int x2; int x3; int x4; }*)arg1;
- (struct EDAreaReference { int x1; int x2; int x3; int x4; })areaReference;
- (bool)fullyAdjacentToReference:(id)arg1;
- (bool)isEqualToReference:(id)arg1;
- (void)unionWithRow:(int)arg1 column:(int)arg2;
- (bool)isColumnReference;
- (bool)isRowReference;
- (bool)isValidCellReference;
- (void)unionWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4;
- (bool)containsRow:(int)arg1 column:(int)arg2;
- (bool)isValidAreaReference;
- (bool)isCellReference;
- (id)initWithReference:(id)arg1;
- (unsigned long long)countOfCellsBeingReferenced;
- (void)setLastRow:(int)arg1;
- (void)setFirstRow:(int)arg1;
- (void)setFirstColumn:(int)arg1;
- (void)setLastColumn:(int)arg1;
- (int)lastRow;
- (int)firstRow;
- (int)lastColumn;
- (int)firstColumn;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
