/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, ABHighlightingTextField;

@interface ABMultiCellContentView_Simple : ABMultiCellContentView <UITextFieldDelegate> {
    ABHighlightingTextField *_textField;
    NSString *_previousValue;
}

@property(readonly) NSString * text;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (struct CGSize { double x1; double x2; })layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize { double x1; double x2; })arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(bool)arg6;

- (id)pickerView;
- (void)textFieldTextDidChange:(id)arg1;
- (void)setPropertyGroup:(id)arg1 andInfo:(id)arg2;
- (bool)tabToNextResponder:(bool)arg1 fromView:(id)arg2;
- (bool)shouldSendTouchesToSuperviewForHitView:(id)arg1;
- (id)hitTestForTouches:(id)arg1 withEvent:(id)arg2;
- (id)viewForFirstResponder;
- (void)updateSubviewsForNewStateAnimated:(bool)arg1;
- (bool)canHandleProperty:(int)arg1;
- (bool)wantsLabelDivider;
- (bool)isValidValue:(id)arg1;
- (void)setAbCellStyle:(int)arg1;
- (void)reloadFromModel;
- (void)reload;
- (id)text;
- (void)dealloc;
- (struct { id x1; unsigned long long x2; })suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;
- (bool)textFieldShouldReturn:(id)arg1;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;

@end
