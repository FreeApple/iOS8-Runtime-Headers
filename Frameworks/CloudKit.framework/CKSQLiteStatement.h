/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKSQLite, NSString;

@interface CKSQLiteStatement : NSObject  {
    bool_reset;
    CKSQLite *_SQLite;
    NSString *_SQL;
    struct sqlite3_stmt { } *_handle;
}

@property(readonly) CKSQLite * SQLite;
@property(readonly) NSString * SQL;
@property(readonly) struct sqlite3_stmt { }* handle;
@property(getter=isReset) bool reset;


- (int)intAtIndex:(unsigned long long)arg1;
- (void)setReset:(bool)arg1;
- (id)SQL;
- (id)SQLite;
- (id)columnNameAtIndex:(unsigned long long)arg1;
- (id)blobAtIndex:(unsigned long long)arg1;
- (double)doubleAtIndex:(unsigned long long)arg1;
- (long long)int64AtIndex:(unsigned long long)arg1;
- (int)columnTypeAtIndex:(unsigned long long)arg1;
- (void)bindValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)bindDouble:(double)arg1 atIndex:(unsigned long long)arg2;
- (void)bindBlob:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)bindInt64:(long long)arg1 atIndex:(unsigned long long)arg2;
- (void)bindInt:(int)arg1 atIndex:(unsigned long long)arg2;
- (void)bindNullAtIndex:(unsigned long long)arg1;
- (id)allObjectsByColumnName;
- (void)bindValues:(id)arg1;
- (void)bindText:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)textAtIndex:(unsigned long long)arg1;
- (id)initWithSQLite:(id)arg1 SQL:(id)arg2 handle:(struct sqlite3_stmt { }*)arg3;
- (bool)isReset;
- (void)finalizeStatement;
- (bool)step;
- (struct sqlite3_stmt { }*)handle;
- (id)allObjects;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)reset;
- (unsigned long long)columnCount;

@end
