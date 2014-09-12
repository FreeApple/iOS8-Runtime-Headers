/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, NSString, ABPropertyGroup, ABItemLabelPicker;

@interface ABLabelPickerViewController : ABPickerViewController  {
    NSArray *_additionalLabels;
    NSString *_selectedLabel;
    void *_addressBook;
    ABPropertyGroup *_propertyGroup;
    long long _itemIndex;
    ABItemLabelPicker *_labelPicker;
    bool_didCreateNewLabel;
}

@property(retain) NSString * selectedLabel;
@property bool didCreateNewLabel;


- (id)initWithAddressBook:(void*)arg1 propertyGroup:(id)arg2 itemIndex:(long long)arg3 additionalLabels:(id)arg4;
- (id)labelPicker;
- (struct CGSize { double x1; double x2; })fullScreenContentSize;
- (bool)didCreateNewLabel;
- (void)itemLabelPickerDeletedLastCustomLabel:(id)arg1;
- (void)itemLabelPicker:(id)arg1 deletedCustomLabel:(id)arg2;
- (void)itemLabelPickerDidChangeSelection:(id)arg1;
- (bool)itemLabelPickerShouldDismissKeyboard:(id)arg1;
- (void)setDidCreateNewLabel:(bool)arg1;
- (void)itemLabelPicker:(id)arg1 endedWithSelectionConfirmed:(bool)arg2 animate:(bool)arg3;
- (void)setSelectedLabel:(id)arg1;
- (id)selectedLabel;
- (double)ab_heightToFitForViewInPopoverView;
- (void)setStyleProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)_getRotationContentSettings:(struct { boolx1; boolx2; boolx3; boolx4; double x5; int x6; }*)arg1;
- (bool)_allowsAutorotation;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;

@end
