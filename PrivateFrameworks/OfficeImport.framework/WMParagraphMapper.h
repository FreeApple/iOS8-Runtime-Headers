/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDParagraph, WMParagraphMapper, OIXMLElement;

@interface WMParagraphMapper : CMMapper  {
    WDParagraph *wdParagraph;
    WMParagraphMapper *mCurrentMapper;
    OIXMLElement *mActiveNode;
    boolmIsDeleted;
}

+ (void)mapPlaceholderAt:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withState:(id)arg3;

- (id)initWithBlock:(id)arg1 parent:(id)arg2;
- (bool)isCollapsable:(id)arg1;
- (void)mapParagraphBodyWithState:(id)arg1;
- (bool)containsOfficeArt;
- (bool)isTextFrame;
- (id)runAtIndex:(unsigned long long)arg1;
- (void)mapFieldMarkerAt:(id)arg1 marker:(id)arg2 withState:(id)arg3;
- (void)mapRunAt:(id)arg1 run:(id)arg2 withState:(id)arg3;
- (id)activeNode;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)dealloc;

@end
