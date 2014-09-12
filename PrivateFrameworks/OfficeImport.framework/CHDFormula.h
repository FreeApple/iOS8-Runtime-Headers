/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDReferenceCollection, EDWorkbook;

@interface CHDFormula : EDFormula  {
    EDReferenceCollection *mReferences;
    EDWorkbook *mWorkbook;
}

+ (id)formulaWithReference:(id)arg1;
+ (id)formulaWithReferences:(id)arg1;

- (id)initWithWorkbook:(id)arg1;
- (void)prepareTokens;
- (bool)isConstantStringFormula;
- (id)referencesFromFormula;
- (id)initWithReferences:(id)arg1;
- (id)initWithReference:(id)arg1;
- (unsigned long long)countOfCellsBeingReferenced;
- (void)setWorkbook:(id)arg1;
- (id)references;
- (void)setReferences:(id)arg1;
- (void)dealloc;

@end
