/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, NSArray, PSSearchResults, NSOperationQueue, <PSSearchModelDataSource>, NSMutableSet, NSMutableArray, NSObject<OS_dispatch_queue>, NSMapTable, PSSearchOperation;

@interface PSSearchModel : NSObject <PSSearchIndexOperationDelegate, PSSearchOperationDelegate, PSSpecifierObserver> {
    NSMutableSet *_delegates;
    NSMapTable *_specifierDataSources;
    NSMutableArray *_rootEntries;
    NSMutableSet *_entriesBeingIndexed;
    NSMutableSet *_indexingEntriesWithLoadedDataSources;
    NSMutableSet *_removedEntriesStillIndexing;
    NSMutableArray *_deferredSpecifierUpdates;
    PSSearchResults *_currentResults;
    NSString *_queryForCurrentResults;
    NSMutableSet *_entriesPendingSearch;
    NSMutableSet *_removedEntriesStillSearching;
    NSObject<OS_dispatch_queue> *_searchStateAccessQueue;
    bool_hasLoadedRootEntries;
    bool_hasStartedIndexing;
    NSOperationQueue *_indexOperationQueue;
    NSOperationQueue *_searchOperationQueue;
    bool_indexing;
    <PSSearchModelDataSource> *_dataSource;
    NSString *_currentQuery;
    PSSearchOperation *_activeSearchOperation;
}

@property <PSSearchModelDataSource> * dataSource;
@property(readonly) PSSearchResults * currentResults;
@property(copy) NSString * currentQuery;
@property(getter=isLoadingResults,readonly) bool loadingResults;
@property(getter=isIndexing,readonly) bool indexing;
@property(readonly) bool hasCompletedIndexing;
@property(readonly) NSArray * rootEntries;
@property(retain) PSSearchOperation * activeSearchOperation;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) long long observerType;

+ (id)sharedInstance;

- (bool)isIndexing;
- (void)searchForQuery:(id)arg1;
- (bool)isLoadingResults;
- (bool)hasCompletedIndexing;
- (void)reloadRootSpecifier:(id)arg1;
- (void)searchOperationDidCancel:(id)arg1;
- (void)searchOperationDidFinish:(id)arg1 withResults:(id)arg2;
- (void)searchOperation:(id)arg1 configureSearchResults:(id)arg2;
- (id)searchOperation:(id)arg1 filteredEntriesForEntries:(id)arg2;
- (void)searchOperationDidBegin:(id)arg1;
- (void)searchIndexOperationDidCancel:(id)arg1;
- (void)searchIndexOperationDidFinish:(id)arg1 searchEntries:(id)arg2;
- (void)searchIndexOperation:(id)arg1 didFindSpecifierDataSource:(id)arg2;
- (id)_searchEntriesForSpecifierDataSource:(id)arg1;
- (id)_defaultSearchResultsSectionComparator;
- (id)rootEntries;
- (void)_updateWithNewSearchResults:(id)arg1 forQuery:(id)arg2 newSearch:(bool)arg3;
- (void)_cancelAllSearchOperations;
- (void)setActiveSearchOperation:(id)arg1;
- (void)setCurrentQuery:(id)arg1;
- (id)activeSearchOperation;
- (void)_finishedIndexingEntry:(id)arg1;
- (void)_addSpecifierDataSource:(id)arg1 forSearchEntry:(id)arg2;
- (void)_performDeferredUpdatesForEntry:(id)arg1;
- (void)_performSpecifierUpdates:(id)arg1 forSearchEntries:(id)arg2;
- (void)_reloadSearchEntries:(id)arg1;
- (void)_loadChildrenForEntry:(id)arg1;
- (void)_enumerateDelegatesUsingBlock:(id)arg1;
- (id)currentResults;
- (void)_removeSearchEntries:(id)arg1 usingBlock:(id)arg2 forReload:(bool)arg3;
- (void)_updatedEntry:(id)arg1 withChildren:(id)arg2;
- (void)_beginSearchingEntriesForCurrentQuery:(id)arg1 newSearch:(bool)arg2;
- (id)currentQuery;
- (void)_removeSearchEntries:(id)arg1 usingBlock:(id)arg2;
- (void)addRootSpecifier:(id)arg1;
- (void)removeRootSpecifier:(id)arg1;
- (void)_addSearchEntries:(id)arg1 parent:(id)arg2 usingBlock:(id)arg3;
- (void)_beginIndexingIfNecessary;
- (id)_rootSpecifiers;
- (long long)observerType;
- (void)invalidateSpecifiersForDataSource:(id)arg1;
- (void)dataSource:(id)arg1 performUpdates:(id)arg2;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (id)init;
- (void)dealloc;
- (void)preheat;

@end
