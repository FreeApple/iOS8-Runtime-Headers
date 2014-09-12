/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableArray, NSString, ABPropertyGroup, ABStyleProvider, NSIndexPath, UITableView;

@interface ABItemLabelPicker : UIView <UITableViewDataSource, UITableViewDelegate, ABSimpleTextInputViewControllerDelegate> {
    id _delegate;
    id _editedItem;
    NSString *_savedLabel;
    NSString *_selectedLabel;
    NSIndexPath *_selectedPath;
    UITableView *_tableView;
    NSMutableArray *_additionalLabels;
    struct __CFArray { } *_sortedCustomItemLabelInfos;
    struct __CFArray { } *_sortedDefaultItemLabelInfos;
    void *_sortedCustomItemLabelInfosMemory;
    void *_sortedDefaultItemLabelInfosMemory;
    ABPropertyGroup *_propertyGroup;
    int _property;
    long long _itemIndex;
    void *_addressBook;
    bool_addLabelDisabled;
    bool_didCreateNewLabel;
    ABStyleProvider *_styleProvider;
}

@property(readonly) UITableView * tableView;
@property(getter=isAddLabelDisabled) bool addLabelDisabled;
@property(retain) ABStyleProvider * styleProvider;
@property void* addressBook;
@property bool didCreateNewLabel;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)defaultLabelForProperty:(int)arg1 person:(id)arg2 addressBook:(void*)arg3;
+ (id)defaultLabelsForPropertyGroup:(id)arg1 index:(long long)arg2 addressBook:(void*)arg3 outBestLabelIndex:(long long*)arg4 forceIncludeLabels:(id)arg5;
+ (id)defaultLabelsForProperty:(int)arg1 person:(id)arg2 addressBook:(void*)arg3 outBestLabelIndex:(long long*)arg4 forceIncludeLabels:(id)arg5;
+ (id)_defaultLabelsForProperty:(int)arg1 person:(id)arg2 propertyGroup:(id)arg3 index:(long long)arg4 addressBook:(void*)arg5 outBestLabelIndex:(long long*)arg6 forceIncludeLabels:(id)arg7;
+ (id)defaultLabelsForProperty:(int)arg1 policy:(void*)arg2;
+ (struct __CFDictionary { }*)copyLabelUsageForProperty:(int)arg1 person:(id)arg2;
+ (struct __CFDictionary { }*)copyLabelUsageForPropertyGroup:(id)arg1 person:(id)arg2;
+ (id)builtInLabelsForProperty:(int)arg1;

- (bool)didCreateNewLabel;
- (void)setAddLabelDisabled:(bool)arg1;
- (bool)isAddLabelDisabled;
- (bool)shouldPopItem;
- (void)toggleEditing;
- (bool)canEdit;
- (id)savedLabel;
- (void)setSavedLabel:(id)arg1;
- (void)setAdditionalLabels:(id)arg1;
- (void)setPropertyGroup:(id)arg1 itemIndex:(long long)arg2;
- (bool)simpleTextInputViewControllerShouldDismissKeyboard:(id)arg1;
- (void)simpleTextInputViewController:(id)arg1 didCompleteWithValue:(id)arg2;
- (void)_setSelectedLabel:(id)arg1 atPath:(id)arg2;
- (void)createNewCustomLabel;
- (void)_didEndPickingAndConfirmed:(bool)arg1 animate:(bool)arg2;
- (void)setDidCreateNewLabel:(bool)arg1;
- (void)setIsEditing:(bool)arg1 animate:(bool)arg2;
- (void)reloadItemLabels;
- (void)setSelectedLabel:(id)arg1;
- (id)selectedLabel;
- (bool)allowsCustomLabels;
- (void)_matchSelectedPathWithSelectedLabel;
- (void)_setSelectedPath:(id)arg1;
- (void)_setSelectedLabel:(id)arg1;
- (void)resetLabelCaches;
- (void)buildUI;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (bool)isEditing;
- (void)setBackgroundColor:(id)arg1;
- (void*)addressBook;
- (void)setAddressBook:(void*)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)tableView;
- (void)displayScrollerIndicators;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)reloadData;

@end
