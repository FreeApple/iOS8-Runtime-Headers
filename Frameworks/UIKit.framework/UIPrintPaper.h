/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintPaper : NSObject  {
    int _paperOrientation;
    id _internal;
}

@property(readonly) struct CGSize { double x1; double x2; } paperSize;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } printableRect;

+ (id)_defaultPaperListForOutputType:(long long)arg1;
+ (id)_readyPaperListForPrinter:(id)arg1 withDuplexMode:(long long)arg2 forContentType:(long long)arg3 contentSize:(struct CGSize { double x1; double x2; })arg4;
+ (id)bestPaperForPageSize:(struct CGSize { double x1; double x2; })arg1 withPapersFromArray:(id)arg2;
+ (id)_defaultPKPaperForOuptutType:(long long)arg1;
+ (id)_defaultPaperForOutputType:(long long)arg1;
+ (id)bestPaperForPageSize:(struct CGSize { double x1; double x2; })arg1 andContentType:(long long)arg2 withPapersFromArray:(id)arg3;

- (struct CGSize { double x1; double x2; })paperSize;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })printRect;
- (int)_paperOrientation;
- (void)_setPaperOrientation:(int)arg1;
- (id)_localizedMediaTypeName;
- (id)_localizedName;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_printableRectForDuplex:(bool)arg1;
- (id)_initWithPrintKitPaper:(id)arg1;
- (void)_updatePKPaper:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })printableRect;
- (id)_pkPaper;

@end
