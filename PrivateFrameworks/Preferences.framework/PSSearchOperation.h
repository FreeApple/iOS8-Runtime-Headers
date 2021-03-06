/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, NSSet, PSSearchResults, <PSSearchOperationDelegate>;

@interface PSSearchOperation : NSOperation  {
    bool_newQuery;
    NSString *_query;
    NSSet *_rootEntries;
    PSSearchResults *_currentResults;
    <PSSearchOperationDelegate> *_delegate;
}

@property(copy,readonly) NSString * query;
@property(copy,readonly) NSSet * rootEntries;
@property(copy,readonly) PSSearchResults * currentResults;
@property(getter=isNewQuery) bool newQuery;
@property <PSSearchOperationDelegate> * delegate;

+ (struct __CFStringTokenizer { }*)_wordBoundaryTokenizer;

- (id)_filterEntriesMatchingQuery:(id)arg1 forQuery:(id)arg2;
- (bool)_searchEntries:(id)arg1 forQuery:(id)arg2;
- (void)_didCancel;
- (id)rootEntries;
- (void)setNewQuery:(bool)arg1;
- (id)initWithSearchQuery:(id)arg1 rootEntries:(id)arg2;
- (bool)isNewQuery;
- (id)currentResults;
- (void)main;
- (id)debugDescription;
- (id)query;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)description;

@end
