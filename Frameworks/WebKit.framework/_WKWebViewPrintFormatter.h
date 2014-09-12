/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

@class _WKFrameHandle, WKWebView;

@interface _WKWebViewPrintFormatter : UIViewPrintFormatter  {
    double _totalScaleFactor;
    struct PrintInfo { 
        float pageSetupScaleFactor; 
        float availablePaperWidth; 
        float availablePaperHeight; 
    } _printInfo;
    _WKFrameHandle *_frameToPrint;
}

@property(retain) _WKFrameHandle * frameToPrint;
@property(readonly) WKWebView * webView;


- (void)setFrameToPrint:(id)arg1;
- (id)frameToPrint;
- (id)webView;
- (void)dealloc;
- (id).cxx_construct;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forPageAtIndex:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForPageAtIndex:(long long)arg1;
- (long long)_recalcPageCount;

@end
