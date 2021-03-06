/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSString, DOMHTMLFormElement;

@interface DOMHTMLOptionElement : DOMHTMLElement  {
}

@property bool disabled;
@property(readonly) DOMHTMLFormElement * form;
@property(copy) NSString * label;
@property bool defaultSelected;
@property bool selected;
@property(copy) NSString * value;
@property(copy,readonly) NSString * text;
@property(readonly) int index;


- (int)index;
- (id)value;
- (void)setValue:(id)arg1;
- (void)setDefaultSelected:(bool)arg1;
- (bool)defaultSelected;
- (id)text;
- (void)setDisabled:(bool)arg1;
- (id)label;
- (bool)disabled;
- (bool)selected;
- (id)form;
- (void)setLabel:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)populateCell:(id)arg1;
- (id)createPickerCell;
- (id)createSelectedItem;
- (id)itemTitle;

@end
