/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSString, NSURL, UILabel, <RUITableFooterDelegate>, UIButton;

@interface RemoteUISectionFooter : UIView <RemoteUITableFooter> {
    UIButton *_linkButton;
    UILabel *_textLabel;
    long long _textAlignment;
    bool_usesCustomTextAlignment;
    <RUITableFooterDelegate> *_delegate;
    NSURL *_linkURL;
}

@property <RUITableFooterDelegate> * delegate;
@property(retain) NSURL * linkURL;
@property(readonly) UIButton * linkButton;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)linkURL;
- (void)_linkPressed;
- (double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (void)setLinkURL:(id)arg1;
- (id)linkButton;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)layoutSubviews;

@end
