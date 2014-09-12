/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, UIAlertView, UIPrintingProgressViewController;

@interface UIPrintingProgress : NSObject  {
    NSString *_printerName;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _cancelHandler;

    double _startTime;
    double _displayTime;
    UIAlertView *_alert;
    UIPrintingProgressViewController *_viewController;
    bool_donePrinting;
    bool_forceDisplayAsAlert;
}


- (void)endProgress;
- (void)dealloc;
- (void)showProgress:(id)arg1 immediately:(bool)arg2;
- (void)progressCancel;
- (bool)progressVisible;
- (void)hideProgressAnimated:(bool)arg1;
- (double)nextPrintDelay;
- (void)setPage:(long long)arg1 ofPage:(long long)arg2;
- (void)setPrintInfoState:(int)arg1;
- (id)initWithPrinterName:(id)arg1 forceDisplayAsAlert:(bool)arg2 cancelHandler:(id)arg3;
- (void)didPresentAlertView:(id)arg1;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;

@end
