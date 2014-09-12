/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPeoplePickerNavigationController, NSString, ABAccountsAndGroupDataSource, UIRefreshControl;

@interface ABAccountsAndGroupsViewController : ABAbstractViewController <UITableViewDelegate> {
    UIRefreshControl *_refreshControl;
    ABAccountsAndGroupDataSource *_dataSource;
    bool_needsReload;
    bool_tableViewNeedsReloadAfterResume;
    bool_showsRefreshButton;
    ABPeoplePickerNavigationController *_peoplePickerNavigationController;
}

@property(readonly) ABAccountsAndGroupDataSource * dataSource;
@property ABPeoplePickerNavigationController * peoplePickerNavigationController;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setPeoplePickerNavigationController:(id)arg1;
- (void)modelDatabaseChange:(id)arg1;
- (int)abViewControllerType;
- (void)_updateDisplayedContactsFilterFromSelection;
- (void)refreshEverythingNow;
- (void)updateRefreshButton;
- (void)setHidesGlobalGroupWrapper:(bool)arg1;
- (void)setHidesSearchableSources:(bool)arg1;
- (bool)hidesGlobalGroupWrapper;
- (bool)hidesSearchableSources;
- (id)peoplePickerNavigationController;
- (id)model;
- (id)dataSource;
- (void)dealloc;
- (id)initWithModel:(id)arg1;
- (void)done:(id)arg1;
- (void)setModel:(id)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (void)applicationDidResume;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)reloadData;

@end
