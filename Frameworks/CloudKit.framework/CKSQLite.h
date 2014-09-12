/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSString, NSMutableDictionary, NSDateFormatter;

@interface CKSQLite : NSObject  {
    bool_corrupt;
    NSString *_path;
    NSString *_schemaPath;
    unsigned long long _schemaVersion;
    NSString *_objectClassPrefix;
    struct sqlite3 { } *_db;
    unsigned long long _openCount;
    NSMutableDictionary *_statementsBySQL;
    NSDateFormatter *_dateFormatter;
}

@property(readonly) NSString * path;
@property(readonly) NSString * schemaPath;
@property(readonly) unsigned long long schemaVersion;
@property(retain) NSString * objectClassPrefix;
@property(readonly) bool isOpen;
@property struct sqlite3 { }* db;
@property unsigned long long openCount;
@property bool corrupt;
@property(readonly) NSMutableDictionary * statementsBySQL;
@property(retain) NSDateFormatter * dateFormatter;


- (id)selectAllObjectsOfClass:(Class)arg1;
- (void)setDateProperty:(id)arg1 forKey:(id)arg2;
- (id)datePropertyForKey:(id)arg1;
- (id)select:(id)arg1 from:(id)arg2;
- (void)setObjectClassPrefix:(id)arg1;
- (id)selectObjectOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3;
- (long long)insertOrReplaceObject:(id)arg1;
- (void)deleteFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (void)vacuum;
- (struct sqlite3 { }*)db;
- (void)setDateFormatter:(id)arg1;
- (id)statementsBySQL;
- (void)setCorrupt:(bool)arg1;
- (bool)corrupt;
- (void)setOpenCount:(unsigned long long)arg1;
- (unsigned long long)openCount;
- (void)setDb:(struct sqlite3 { }*)arg1;
- (id)objectClassPrefix;
- (id)schemaPath;
- (unsigned long long)selectCountFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (void)analyze;
- (id)initWithPath:(id)arg1 schemaFilename:(id)arg2 schemaVersion:(unsigned long long)arg3;
- (id)_boxedValue:(id)arg1 forObjcCProperty:(id)arg2;
- (id)_boxedPropertyDictionary:(id)arg1 forObjCClass:(id)arg2;
- (id)selectAllFrom:(id)arg1 where:(id)arg2 bindings:(id)arg3;
- (id)selectAllObjectsOfClass:(Class)arg1 where:(id)arg2 bindings:(id)arg3;
- (long long)insertOrReplaceInto:(id)arg1 values:(id)arg2;
- (id)_tableNameForClass:(Class)arg1;
- (long long)lastInsertRowID;
- (id)select:(id)arg1 from:(id)arg2 where:(id)arg3 bindings:(id)arg4;
- (void)removePropertyForKey:(id)arg1;
- (id)allTableNames;
- (id)statementForSQL:(id)arg1;
- (void)executeSQL:(id)arg1 arguments:(struct __va_list_tag { unsigned int x1; unsigned int x2; void *x3; void *x4; }[1])arg2;
- (void)raise:(id)arg1;
- (id)_schemaString;
- (void)dropAllTables;
- (void)removeAllStatements;
- (id)_schemaVersionString;
- (id)initWithPath:(id)arg1 bundle:(id)arg2 schemaFilename:(id)arg3 schemaVersion:(unsigned long long)arg4;
- (id)initWithPath:(id)arg1 schemaPath:(id)arg2 schemaVersion:(unsigned long long)arg3;
- (bool)openWithError:(id*)arg1;
- (void)executeSQL:(id)arg1;
- (bool)isOpen;
- (void)rollback;
- (id)creationDate;
- (id)dateFormatter;
- (id)path;
- (unsigned long long)schemaVersion;
- (void)begin;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)close;
- (void)open;
- (void)dealloc;
- (void).cxx_destruct;
- (void)remove;
- (void)end;

@end
