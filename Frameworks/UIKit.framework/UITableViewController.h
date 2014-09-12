/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIFilteredDataSource, UIRefreshControl, NSString, UITableViewDataSource, UITableView;

@interface UITableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    long long _tableViewStyle;
    id _keyboardSupport;
    id _staticDataSource;
    struct { 
        unsigned int clearsSelectionOnViewWillAppear : 1; 
        unsigned int insetsApplied : 1; 
        unsigned int adjustingInsets : 1; 
    } _tableViewControllerFlags;
    _UIFilteredDataSource *_filteredDataSource;
    long long _filteredDataType;
}

@property(getter=_staticDataSource,setter=_setStaticDataSource:,retain) UITableViewDataSource * staticDataSource;
@property(retain) UITableView * tableView;
@property bool clearsSelectionOnViewWillAppear;
@property(retain) UIRefreshControl * refreshControl;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)init;
- (bool)respondsToSelector:(SEL)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)_setStaticDataSource:(id)arg1;
- (id)_staticDataSource;
- (void)_setFilteredDataType:(long long)arg1;
- (long long)_filteredDataType;
- (id)refreshControl;
- (void)setRefreshControl:(id)arg1;
- (bool)clearsSelectionOnViewWillAppear;
- (long long)_resolvedDataSourceFilterTypeForScreen:(id)arg1;
- (void)_refreshFilteredDataSourceFilterTypeForScreen:(id)arg1;
- (void)_applyDefaultDataSourceToTable:(id)arg1;
- (id)_existingTableView;
- (void)setClearsSelectionOnViewWillAppear:(bool)arg1;
- (void)_adjustTableForKeyboardInfo:(id)arg1;
- (id)tableView;
- (bool)_viewControllerWasSelected;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setTableView:(id)arg1;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
