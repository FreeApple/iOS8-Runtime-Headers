/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface OADTextListStyle : NSObject  {
    NSMutableArray *mParagraphProperties;
}


- (void)setPropertiesForListLevel:(unsigned long long)arg1 properties:(id)arg2;
- (void)flatten;
- (void)overrideWithTextStyle:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (id)initWithDefaults;
- (void)removeUnnecessaryOverrides;
- (id)propertiesForListLevel:(unsigned long long)arg1;
- (id)defaultProperties;
- (id)init;
- (void)dealloc;

@end
