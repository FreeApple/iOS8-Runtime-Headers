/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLEntity, NSManagedObjectContext, NSSQLCore, NSSQLConnection, NSMutableArray;

@interface NSSQLChannel : NSObject  {
    NSSQLConnection *_connection;
    NSSQLCore *_sqlCore;
    NSSQLEntity *_currentEntity;
    NSMutableArray *_fetchProperties;
    NSManagedObjectContext *_currentMOCon;
}


- (id)currentContext;
- (void)_setCurrentEntityAndRelationshipWithFetchRequest:(id)arg1;
- (void)_closeChannel;
- (void)_openChannel;
- (bool)selectCountWithFetchRequest:(id)arg1;
- (void)selectRowsWithCachedStatement:(id)arg1;
- (void)selectRowsWithStatement:(id)arg1;
- (void)selectRowsWithFetchRequest:(id)arg1;
- (void)setCurrentContext:(id)arg1;
- (id)_propertiesToFetch;
- (void)setCurrentEntity:(id)arg1;
- (void)endFetchAndRecycleStatement:(bool)arg1;
- (void)bindTempTablesForStatementIfNecessary:(id)arg1;
- (bool)isFetchInProgress;
- (void)endFetch;
- (id)initWithSQLCore:(id)arg1;
- (id)sqlCore;
- (id)connection;
- (void)finalize;
- (void)dealloc;

@end
