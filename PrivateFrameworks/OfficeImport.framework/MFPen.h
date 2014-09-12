/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OITSUColor;

@interface MFPen : NSObject <MFObject> {
    int m_penStyle;
    int m_penWidth;
    OITSUColor *m_colour;
    double *m_userStyleArray;
}

+ (id)pen;
+ (id)penWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double*)arg4;

- (id)getColor;
- (int)getStyle;
- (id)initWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double*)arg4;
- (int)getWidth;
- (int)selectInto:(id)arg1;
- (id)init;
- (void)dealloc;

@end
