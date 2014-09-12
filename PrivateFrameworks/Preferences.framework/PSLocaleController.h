/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIView, NSString, NSArray, PSRegion, PSLocaleSelector, UISearchBar, UITableView;

@interface PSLocaleController : PSViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate> {
    UITableView *_tableView;
    UIView *_contentView;
    UISearchBar *_searchBar;
    bool_searchMode;
    PSLocaleSelector *_localeSelector;
    NSArray *_filteredListContent;
    NSArray *_sections;
    NSArray *_regionsList;
    PSRegion *_currentRegion;
}

@property(retain) PSLocaleSelector * localeSelector;
@property(retain) NSArray * filteredListContent;
@property(retain) NSArray * sections;
@property(retain) NSArray * regionsList;
@property(retain) PSRegion * currentRegion;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)filteredRegionsForRegionList:(id)arg1 searchString:(id)arg2;
- (id)currentRegion;
- (id)filteredListContent;
- (void)reloadSections;
- (void)loadRegions;
- (void)reloadDataAndScrollToCheckedRegionAnimated:(bool)arg1;
- (id)regionsList;
- (void)setCurrentRegion:(id)arg1;
- (void)setRegionsList:(id)arg1;
- (void)setFilteredListContent:(id)arg1;
- (void)updateChecked:(id)arg1;
- (id)localeSelector;
- (id)_mainContentView;
- (void)setLocaleSelector:(id)arg1;
- (id)sections;
- (id)init;
- (void)dealloc;
- (void)setSections:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
