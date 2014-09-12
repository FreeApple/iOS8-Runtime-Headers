/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSRecursiveLock, NSArray, ABContactsFilter, NSMutableArray;

@interface ABModel : NSObject  {
    void *_addressBook;
    struct { struct { /* ? */ } *x1; unsigned long long x2; unsigned long long x3; } *_sectionLists;
    struct __CFDictionary { } *_headerSortKeyToHeaderString;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _displayedMemberPreparedRange;
    unsigned long long _numberOfDisplayedMembers;
    bool_displayedMembersAreSearchResults;
    void *_selectedPerson;
    unsigned int _displayOrdering;
    struct __CFArray { } *_databaseChangeDelegates;
    void *_backgroundAddressBook;
    bool_backgroundAddressBookInvalidated;
    NSMutableArray *_cachedModelRecords;
    NSRecursiveLock *_memberLock;
    bool_loadingInBackground;
    NSRecursiveLock *_backgroundLoadingLock;
    bool_backgroundInvalidated;
    id _delayedNotificationHandler;
    bool_autoInvalidateOnDatabaseChange;
    NSArray *_lastSeenSources;
    NSArray *_lastSeenGroups;
    int _meID;
    ABContactsFilter *_displayedContactsFilter;
    ABContactsFilter *_selectedContactsFilter;
    ABContactsFilter *_lastSelectedContactsFilter;
}

@property(retain) ABContactsFilter * displayedContactsFilter;
@property(readonly) ABContactsFilter * selectedContactsFilter;
@property(readonly) ABContactsFilter * lastSelectedContactsFilter;
@property(readonly) void* sourceForNewRecords;
@property(readonly) void* groupForNewRecords;
@property void* addressBook;

+ (unsigned int)sortOrdering;
+ (void)initialize;

- (id)allSources;
- (void)stopDelayingNotificationsForDatabaseChangeDelegate:(id)arg1 andDeliverDelayedNotifications:(bool)arg2;
- (void)startDelayingNotificationsForDatabaseChangeDelegate:(id)arg1;
- (struct __CFArray { }*)_databaseChangeDelegates;
- (void)_modelDatabaseChangedExternally:(struct __CFDictionary { }*)arg1;
- (void)_modelDatabaseChangedLocally:(struct __CFDictionary { }*)arg1;
- (int)meID;
- (void)invalidateLastSelectedContactsFilter;
- (void)copyDisplayedNamePieces:(id*)arg1 isGroup:(bool*)arg2 highlightIndex:(long long*)arg3 forMemberID:(int*)arg4 atindex:(long long)arg5;
- (id)allCachedModelRecords;
- (void)setFilteredDisplayedMembers:(struct __CFArray { }*)arg1;
- (void)resetSortKeyToHeaderStringDictionary;
- (void)_notifyDelegatesOfExternalDatabaseChangeWithDeletedGroup:(bool)arg1 deletedPerson:(bool)arg2;
- (void)_updateForMajorAddressBookChange:(bool)arg1;
- (void)setDisplayedContactsFilter:(id)arg1;
- (void)setLastSelectedContactsFilter:(id)arg1;
- (long long)_indexOfMember:(void*)arg1 inDisplayedMembers:(id)arg2;
- (id)_displayedGroupMembersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_partialDisplayedGroupMembersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_startBackgroundThreadIfNecessaryScanningForward:(bool)arg1;
- (void)_loadMembersInBackground:(id)arg1;
- (struct __CFArray { }*)_copyArrayOfPeopleInDisplayedContactsFilterForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inBackground:(bool)arg2;
- (id)_newModelRecordFromRecord:(void*)arg1;
- (id)displayedMembersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_cachePeople:(struct __CFArray { }*)arg1 atEnd:(bool)arg2;
- (long long)resetFullSectionList:(struct __CFDictionary { }*)arg1 maximumSectionCount:(int)arg2;
- (long long)resetPartialSectionListWithMaximumCount:(int)arg1 headerSortKeyToHeaderString:(struct __CFDictionary { }*)arg2;
- (bool)shouldUsePartialLoadingForContactsFilter:(id)arg1;
- (struct __CFDictionary { }*)headerSortKeyToHeaderStringDictionary;
- (void)_waitUntilBackgroundThreadFinished;
- (void)prepareDisplayedMembersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setAutoInvalidateOnDatabaseChange:(bool)arg1;
- (void)_cacheMeID;
- (void)resetSectionList;
- (id)lastSelectedContactsFilter;
- (void)invalidateDisplayedMembers;
- (void)setSelectedPerson:(void*)arg1;
- (void)updateForMajorAddressBookChange;
- (void*)displayedMemberAtIndex:(long long)arg1;
- (unsigned long long)displayedMemberSectionListsCount;
- (struct { struct { /* ? */ } *x1; unsigned long long x2; unsigned long long x3; }*)displayedMemberSectionLists;
- (void)setDisplayNameOrdering:(unsigned int)arg1;
- (long long)indexForDisplayedMember:(void*)arg1;
- (unsigned long long)numberOfDisplayedMembers;
- (void*)selectedPerson;
- (id)displayedContactsFilter;
- (void*)sourceForNewRecords;
- (void*)groupForNewRecords;
- (void)setSelectedContactsFilter:(id)arg1;
- (void)addDatabaseChangeDelegate:(id)arg1;
- (id)selectedContactsFilter;
- (void)removeDatabaseChangeDelegate:(id)arg1;
- (void)setSortOrdering:(unsigned int)arg1;
- (void*)addressBook;
- (void)setAddressBook:(void*)arg1;
- (id)initWithAddressBook:(void*)arg1;
- (id)allGroups;
- (void)dealloc;

@end
