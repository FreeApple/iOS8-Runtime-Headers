/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMParagraphStyle : WMStyle  {
    boolmIsInTextFrame;
}

+ (bool)isShadingNull:(id)arg1;

- (id)initWithWDParagraphProperties:(id)arg1 isInTextFrame:(bool)arg2;
- (void)mapBorders:(id)arg1;
- (id)leadingMarginPropertyNameWithOverridesFromProperties:(id)arg1;
- (bool)isRTLWithOverridesFromProperties:(id)arg1;
- (void)addParagraphStyleCharacterProperties:(id)arg1;
- (id)initWithWDStyle:(id)arg1 isInTextFrame:(bool)arg2;
- (void)addParagraphProperties:(id)arg1 fromListLevelProperties:(bool)arg2;

@end
