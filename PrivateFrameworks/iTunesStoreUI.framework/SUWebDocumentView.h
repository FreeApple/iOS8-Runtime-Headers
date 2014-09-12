/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString;

@interface SUWebDocumentView : UIWebDocumentView  {
    id _loadDelegate;
    NSString *_stylesheet;
    unsigned int _adjustHeightToFit : 1;
}

@property id loadDelegate;
@property(retain) NSString * stylesheet;


- (void)setLoadDelegate:(id)arg1;
- (void)setHTMLFragment:(id)arg1;
- (void)setPlaintextString:(id)arg1;
- (id)loadDelegate;
- (void)setStylesheet:(id)arg1;
- (id)stylesheet;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
