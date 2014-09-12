/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIWebSelectedItemPrivate>, NSArray, NSString, DOMHTMLSelectElement;

@interface UIWebSelectSinglePicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {
    DOMHTMLSelectElement *_selectNode;
    NSArray *_optionItems;
    <UIWebSelectedItemPrivate> *_selectedOptionItem;
    long long _selectedIndex;
    <UIWebSelectedItemPrivate> *_optionToSelectWhenDone;
    long long _indexToSelectWhenDone;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)dealloc;
- (id)initWithDOMHTMLSelectElement:(id)arg1 allItems:(id)arg2;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (id)controlView;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;

@end
