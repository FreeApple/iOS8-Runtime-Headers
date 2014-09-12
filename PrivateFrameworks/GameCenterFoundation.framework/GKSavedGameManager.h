/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSMutableDictionary, NSURL, NSMetadataQuery, NSMutableArray;

@interface GKSavedGameManager : NSObject  {
    bool_ubiquityUnavailable;
    NSURL *_ubiquityURL;
    NSMetadataQuery *_query;
    NSMutableDictionary *_documents;
    long long _queryDisableCount;
    NSMutableArray *_fetchHandlers;
}

@property(retain) NSURL * ubiquityURL;
@property bool ubiquityUnavailable;
@property(retain) NSMetadataQuery * query;
@property(retain) NSMutableDictionary * documents;
@property long long queryDisableCount;
@property(retain) NSMutableArray * fetchHandlers;

+ (id)sharedManager;

- (id)documents;
- (id)fetchHandlers;
- (void)setQueryDisableCount:(long long)arg1;
- (long long)queryDisableCount;
- (void)setUbiquityUnavailable:(bool)arg1;
- (bool)ubiquityUnavailable;
- (id)ubiquityURL;
- (void)resolveConflictingSavedGames:(id)arg1 withData:(id)arg2 completionHandler:(id)arg3;
- (void)deleteSavedGamesWithName:(id)arg1 completionHandler:(id)arg2;
- (void)saveGameData:(id)arg1 withName:(id)arg2 completionHandler:(id)arg3;
- (void)loadDataForSavedGame:(id)arg1 completionHandler:(id)arg2;
- (void)fetchSavedGamesWithCompletionHandler:(id)arg1;
- (void)startSavedGameQuery;
- (void)setUbiquityURL:(id)arg1;
- (void)removeDocument:(id)arg1;
- (id)savedGamesWithName:(id)arg1;
- (void)setDocuments:(id)arg1;
- (void)updateSavedGameDocumentsForQueryWithHandler:(id)arg1;
- (void)queryDidUpdate:(id)arg1;
- (void)queryDidFinishGathering:(id)arg1;
- (id)currentDocumentWithName:(id)arg1;
- (void)addDocument:(id)arg1;
- (id)errorForNoUbiquity;
- (id)fileURLForName:(id)arg1;
- (id)documentToSaveWithName:(id)arg1;
- (void)enableQueryUpdates;
- (id)documentForSavedGame:(id)arg1;
- (void)disableQueryUpdates;
- (id)savedGameForDocument:(id)arg1;
- (id)savedGameForDocuments:(id)arg1;
- (void)callFetchHandlers;
- (void)setFetchHandlers:(id)arg1;
- (void)setupUbiquity;
- (void)ubiquityAvailabilityChanged:(id)arg1;
- (void)documentConflictStateChanged:(id)arg1;
- (void)documentModified:(id)arg1;
- (id)init;
- (id)query;
- (void)dealloc;
- (void)setQuery:(id)arg1;

@end
