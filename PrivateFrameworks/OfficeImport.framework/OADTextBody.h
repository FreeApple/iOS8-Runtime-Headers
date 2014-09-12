/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTextBodyProperties, NSMutableArray, OADTextListStyle;

@interface OADTextBody : NSObject  {
    OADTextBodyProperties *mProperties;
    NSMutableArray *mParagraphs;
    OADTextListStyle *mTextListStyle;
}


- (id)findFirstTextRunOfClass:(Class)arg1;
- (void)addParagraphsFromTextBody:(id)arg1;
- (void)propagateActualTextStyleToTextListStyle;
- (void)flattenProperties;
- (void)removeLeadingNewlines;
- (void)removeTrailingNewlines;
- (void)applyTextListStyle:(id)arg1;
- (void)removeAllParagraphs;
- (unsigned long long)nonEmptyParagraphCount;
- (void)setParentTextListStyle:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (id)textListStyle;
- (id)overrideTextListStyle;
- (id)addParagraph;
- (id)plainText;
- (id)paragraphAtIndex:(unsigned long long)arg1;
- (unsigned long long)paragraphCount;
- (void)setProperties:(id)arg1;
- (id)init;
- (bool)isEmpty;
- (id)properties;
- (void)dealloc;

@end
