/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, NSDictionary, NSPredicate, NSEntityDescription;

@interface NSBatchUpdateRequest : NSPersistentStoreRequest <NSPredicatedStoreRequest> {
    id _entity;
    NSPredicate *_predicate;
    struct _requestFlags { 
        unsigned int includesSubentities : 1; 
        unsigned int resultType : 2; 
        unsigned int entityIsName : 1; 
        unsigned int _RESERVED : 28; 
    } _flags;
    NSDictionary *_columnsToUpdate;
    NSString *_entityName;
}

@property(copy,readonly) NSString * entityName;
@property(readonly) NSEntityDescription * entity;
@property(retain) NSPredicate * predicate;
@property bool includesSubentities;
@property unsigned long long resultType;
@property(copy) NSDictionary * propertiesToUpdate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)batchUpdateRequestWithEntityName:(id)arg1;

- (void)setPropertiesToUpdate:(id)arg1;
- (id)propertiesToUpdate;
- (void)_setValidatedPropertiesToUpdate:(id)arg1;
- (id)_newValidatedPropertiesToUpdate:(id)arg1 error:(id*)arg2;
- (void)_resolveEntityWithContext:(id)arg1;
- (id)initWithEntityName:(id)arg1;
- (void)setResultType:(unsigned long long)arg1;
- (void)setIncludesSubentities:(bool)arg1;
- (id)initWithEntity:(id)arg1;
- (unsigned long long)resultType;
- (bool)includesSubentities;
- (id)entity;
- (unsigned long long)requestType;
- (id)entityName;
- (id)predicate;
- (id)init;
- (void)dealloc;
- (void)setPredicate:(id)arg1;

@end
