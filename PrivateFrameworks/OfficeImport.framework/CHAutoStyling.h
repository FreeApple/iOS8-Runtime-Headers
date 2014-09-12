/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADDrawingTheme, CHDChart;

@interface CHAutoStyling : NSObject  {
    CHDChart *mChart;
    OADDrawingTheme *mDrawingTheme;
}

+ (id)autoStylingWithChart:(id)arg1 drawingTheme:(id)arg2;

- (void)replaceStrokeAndFillInEmptyMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2;
- (int)defaultMarkerStyleForSeriesIndex:(unsigned long long)arg1;
- (id)initWithChart:(id)arg1 drawingTheme:(id)arg2;
- (id)drawingTheme;
- (void)dealloc;

@end
