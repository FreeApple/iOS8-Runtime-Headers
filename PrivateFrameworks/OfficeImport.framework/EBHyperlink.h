/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface EBHyperlink : NSObject  {
}

+ (int)xlTypeFromEDHyperlinkType:(int)arg1;
+ (void)addToolTip:(struct XlHLinkToolTip { int (**x1)(); struct XlHeader { unsigned int x_2_1_1; short x_2_1_2; unsigned char x_2_1_3; } x2; struct XlRef {} *x3; struct XlString {} *x4; }*)arg1 toEdHyperLink:(id)arg2 edResources:(id)arg3;
+ (id)edHyperlinkFromXlHLink:(struct XlHLink { int (**x1)(); struct XlHeader { unsigned int x_2_1_1; short x_2_1_2; unsigned char x_2_1_3; } x2; struct XlRef {} *x3; int x4; boolx5; boolx6; struct XlString {} *x7; struct XlString {} *x8; struct XlString {} *x9; struct XlString {} *x10; struct XlString {} *x11; unsigned short x12; }*)arg1 edResources:(id)arg2;
+ (int)edTypeFromXlHyperlinkType:(int)arg1;


@end
