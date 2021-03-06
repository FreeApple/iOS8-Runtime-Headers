/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString;

@interface MFSQLiteConnection : NSObject  {
    NSString *_path;
    struct sqlite3 { } *_db;
    NSString *_databaseName;
    struct __CFDictionary { } *_statementCache;
    void *_ICUSearchContext;
    void *_CPSearchContext;
    int _transactionType;
    unsigned long long _transactionCount;
}

@property(readonly) struct sqlite3 { }* db;


- (id)initWithPath:(id)arg1 databaseName:(id)arg2;
- (const char *)_vfsModuleName;
- (struct sqlite3_stmt { }*)preparedStatementForPattern:(id)arg1;
- (int)beginTransactionWithType:(int)arg1;
- (struct sqlite3 { }*)db;
- (int)rollbackTransaction;
- (int)commitTransaction;
- (int)beginTransaction;
- (bool)isOpen;
- (void)flush;
- (void)close;
- (int)open;
- (void)dealloc;

@end
