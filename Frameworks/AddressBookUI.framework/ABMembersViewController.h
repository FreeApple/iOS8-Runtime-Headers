/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class CNContact, ABMembersController, NSString, _UIAccessDeniedView;

@interface ABMembersViewController : ABAbstractViewController <ABNewPersonViewControllerDelegate, ABMembersControllerDelegate, ABViewControllerBannerViewProtocol, ABPersonEditDelegate> {
    ABMembersController *_membersController;
    int _insertionProperty;
    id _insertionValue;
    id _insertionLabel;
    int _rightButtonBehavior;
    int _leftButtonBehavior;
    bool_shouldHandleExternalChangeOnPersonViewControllers;
    _UIAccessDeniedView *_accessDeniedView;
}

@property(readonly) bool allowsCancel;
@property(readonly) bool allowsCardEditing;
@property(readonly) bool shouldShowGroups;
@property(readonly) CNContact * unsavedContact;
@property(readonly) _UIAccessDeniedView * accessDeniedView;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)model:(id)arg1 localChangeWithInfo:(struct __CFDictionary { }*)arg2;
- (void)peoplePickerNavigationControllerNavigationBarStoppedAnimating:(id)arg1;
- (bool)showCardForPerson:(void*)arg1 animate:(bool)arg2 selectAndScrollToPerson:(bool)arg3;
- (id)indexPathForMember:(void*)arg1;
- (id)unsavedContact;
- (bool)isNavigationButtonEnabled:(int)arg1;
- (bool)personViewController:(id)arg1 shouldContinueAfterEditingConfirmed:(bool)arg2 forPerson:(void*)arg3;
- (void)insertProperty:(int*)arg1 insertValue:(id*)arg2 insertLabel:(id*)arg3;
- (void)preferredPersonDidChangeToPerson:(void*)arg1;
- (void)linksUpdatedForPerson:(void*)arg1;
- (void)nameUpdatedForPerson:(void*)arg1;
- (void)personWasDeleted;
- (void)handleExternalChangeOnPersonViewControllers;
- (void)reallyHandleExternalChangeOnPersonViewControllers;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 informDelegate:(bool)arg3;
- (void)updateNavigationButtonsInSearchMode:(bool)arg1;
- (void)resetInsertionData;
- (bool)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(bool)arg3 selectAndScrollToPerson:(bool)arg4;
- (void)presentAddPersonViewController:(id)arg1 animated:(bool)arg2;
- (id)addPersonPresentationTarget;
- (void)addPersonWithContact:(id)arg1 animated:(bool)arg2;
- (id)membersController;
- (void)updateNavigationButtonsInSearchMode:(bool)arg1 animated:(bool)arg2;
- (void)updateLeftNavigationButtonAnimated:(bool)arg1;
- (void)addPerson:(id)arg1;
- (id)accessDeniedView;
- (void)presentGroupsViewController;
- (bool)allowsCardEditing;
- (void)cancelRefreshingAccount;
- (void)startRefreshingAccount;
- (void)updateNavigationButtonsAnimated:(bool)arg1;
- (void)_updateForModel;
- (void)_applicationEnteringBackground;
- (void)_applicationEnteringForeground;
- (void)updateTitle;
- (void)setBannerTitle:(id)arg1 value:(id)arg2;
- (void)cancelSearching:(id)arg1;
- (void)resetStateForDisplayedFilterChange;
- (void)scrollMemberToTop:(void*)arg1;
- (bool)allowsShowingPersonsCards;
- (bool)membersController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (void)personWasSelected:(void*)arg1;
- (void)showInsertEditorForPerson:(void*)arg1 animate:(bool)arg2;
- (bool)showCardForPerson:(void*)arg1 animate:(bool)arg2;
- (bool)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(bool)arg3;
- (bool)selectAndScrollMemberVisible:(void*)arg1;
- (void)membersControllerDidEndSearching:(id)arg1;
- (void)membersControllerWillEndSearching:(id)arg1;
- (void)membersControllerDidEndServerSearch:(id)arg1;
- (void)membersControllerWillStartSearching:(id)arg1;
- (bool)shouldShowGroups;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
- (bool)allowsCancel;
- (void)modelDatabaseChange:(id)arg1;
- (int)abViewControllerType;
- (void)refreshEverythingNow;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)loadState;
- (id)model;
- (void)setAddressBook:(void*)arg1;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (id)initWithModel:(id)arg1;
- (id)tableView;
- (void)updateView;
- (bool)canHandleSnapbackIdentifier:(id)arg1 animated:(bool)arg2;
- (id)defaultPNGName;
- (void)_getRotationContentSettings:(struct { boolx1; boolx2; boolx3; boolx4; double x5; int x6; }*)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)applicationDidResume;

@end
