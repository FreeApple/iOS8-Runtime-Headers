/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKPDFPageNumberIndicator : UIView  {
    struct RetainPtr<UILabel> { 
        void *m_ptr; 
    } _label;
    struct RetainPtr<_UIBackdropView> { 
        void *m_ptr; 
    } _backdropView;
    struct RetainPtr<NSTimer> { 
        void *m_ptr; 
    } _timer;
    bool_hasValidPageCountAndCurrentPage;
    unsigned int _currentPageNumber;
    unsigned int _pageCount;
}

@property unsigned int currentPageNumber;
@property unsigned int pageCount;


- (unsigned int)currentPageNumber;
- (void)hide:(id)arg1;
- (void)moveToPoint:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setCurrentPageNumber:(unsigned int)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_makeRoundedCorners;
- (void)setPageCount:(unsigned int)arg1;
- (unsigned int)pageCount;
- (void)_updateLabel;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)show;

@end
