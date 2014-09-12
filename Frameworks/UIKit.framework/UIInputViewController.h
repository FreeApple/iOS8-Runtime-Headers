/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSObject<UITextDocumentProxy>, NSString, UIKeyboard, UIInputView;

@interface UIInputViewController : UIViewController <_UITextDocumentInterfaceDelegate, UITextInputDelegate> {
    bool_alignsToContentViewController;
    NSObject<UITextDocumentProxy> *_textDocumentProxy;
    NSString *_primaryLanguage;
}

@property(retain) UIInputView * inputView;
@property(readonly) NSObject<UITextDocumentProxy> * textDocumentProxy;
@property(copy) NSString * primaryLanguage;
@property(readonly) UIKeyboard * _keyboard;
@property bool _alignsToContentViewController;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (bool)_requiresProxyInterface;

- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)set_alignsToContentViewController:(bool)arg1;
- (bool)_alignsToContentViewController;
- (void)requestSupplementaryLexiconWithCompletion:(id)arg1;
- (void)returnToPreviousInputMode;
- (void)advanceToNextInputMode;
- (bool)_shouldForwardSystemLayoutFittingSizeChanges;
- (id)_extensionContext;
- (void)_setTextDocumentProxy:(id)arg1;
- (id)textDocumentProxy;
- (id)_textDocumentInterface;
- (id)_proxyInterface;
- (void)_setupInputController;
- (void)_didResetDocumentState;
- (void)_willResetDocumentState;
- (id)_keyboard;
- (void)dismissKeyboard;
- (void)setPrimaryLanguage:(id)arg1;
- (id)primaryLanguage;
- (void)selectionDidChange:(id)arg1;
- (void)selectionWillChange:(id)arg1;
- (id)_compatibilityController;
- (void)setInputView:(id)arg1;
- (id)inputView;
- (struct CGSize { double x1; double x2; })_systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)_setExtensionContext:(id)arg1;
- (void)viewDidLoad;
- (void)textDidChange:(id)arg1;
- (void)textWillChange:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setView:(id)arg1;
- (void)didReceiveMemoryWarning;

@end
