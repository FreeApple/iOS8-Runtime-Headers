/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSMutableDictionary, NSOrderedSet, NSOperationQueue, NSObject<OS_dispatch_queue>, NSArray, NSString;

@interface MFContactsSearchManager : NSObject <DASearchQueryConsumer> {
    struct __CFDictionary { } *_taskIDsBySearchQuery;
    NSMutableDictionary *_taskContextsByTaskID;
    void *_addressBook;
    NSOperationQueue *_queue;
    unsigned int _genNumber;
    NSOrderedSet *_properties;
    unsigned long long _searchTypes;
    NSObject<OS_dispatch_queue> *_serverSearchQueue;
    NSArray *_explicitSearchAccountIDs;
    NSArray *_searchAccounts;
    int _contactSearchAccountChangedToken;
    bool_registeredForAddressBookChanges;
    bool_includeUpcomingEventMembers;
    NSString *_recentsBundleIdentifier;
    NSString *_sendingAddress;
    unsigned long long _implicitGroupCreationThreshold;
}

@property(retain) NSArray * searchAccountIDs;
@property(copy) NSString * sendingAddress;
@property(copy) NSString * recentsBundleIdentifier;
@property unsigned long long implicitGroupCreationThreshold;
@property bool includeUpcomingEventMembers;
@property(readonly) NSArray * searchAccounts;


- (void)cancelTaskWithID:(id)arg1;
- (void)setIncludeUpcomingEventMembers:(bool)arg1;
- (bool)includeUpcomingEventMembers;
- (void)setImplicitGroupCreationThreshold:(unsigned long long)arg1;
- (unsigned long long)implicitGroupCreationThreshold;
- (void)setSearchAccountIDs:(id)arg1;
- (void)setRecentsBundleIdentifier:(id)arg1;
- (id)recentsBundleIdentifier;
- (void)_handleAddressBookChangeNotification;
- (id)searchForCorecipientsWithRecipients:(id)arg1 consumer:(id)arg2;
- (id)searchForText:(id)arg1 consumer:(id)arg2;
- (void)_handleSearchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)_handleSearchQuery:(id)arg1 returnedResults:(id)arg2;
- (void)_handleSearchQueryFinished:(id)arg1 context:(id)arg2;
- (id)_serverSearchQueue;
- (void)_handleTaskFinished:(id)arg1 context:(id)arg2;
- (void)_invalidateSearchAccounts;
- (void)_performLazySetup;
- (void)_registerForAddressBookChanges;
- (id)initWithAddressBook:(void*)arg1 properties:(int*)arg2 propertyCount:(unsigned int)arg3 recentsBundleIdentifier:(id)arg4;
- (id)searchAccountIDs;
- (void)_handleSearchQueriesByAccountID:(id)arg1 operation:(id)arg2 taskID:(id)arg3;
- (id)searchAccounts;
- (void)_handleLocalSearchResults:(id)arg1 type:(unsigned long long)arg2 operation:(id)arg3 taskID:(id)arg4;
- (void)_handleCorecipientSearchResults:(id)arg1 operation:(id)arg2 taskID:(id)arg3;
- (void)_handleRecentsSearchFrequentResults:(id)arg1 infrequentResults:(id)arg2 operation:(id)arg3 taskID:(id)arg4;
- (void)setSendingAddress:(id)arg1;
- (id)sendingAddress;
- (void)setSearchTypes:(unsigned long long)arg1;
- (id)initWithAddressBook:(void*)arg1 properties:(int*)arg2 propertyCount:(unsigned int)arg3;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;
- (void)dealloc;

@end
