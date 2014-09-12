/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection, EDReference;

@interface EDPivotArea : NSObject  {
    boolmGrandCol;
    boolmGrandRow;
    boolmOutline;
    int mType;
    EDCollection *mReferences;
    EDReference *mOffset;
}

+ (id)pivotArea;

- (void)setGrandCol:(bool)arg1;
- (bool)grandCol;
- (void)setGrandRow:(bool)arg1;
- (bool)grandRow;
- (id)references;
- (bool)outline;
- (void)setOutline:(bool)arg1;
- (void)setOffset:(id)arg1;
- (id)offset;
- (id)init;
- (void)setType:(int)arg1;
- (int)type;
- (void)dealloc;

@end
