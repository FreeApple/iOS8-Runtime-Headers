/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, NSDictionary, NSMappedObjectStore;

@interface NSPersistentStoreMap : NSObject  {
    NSMappedObjectStore *_store;
    NSString *_databaseUUID;
    NSDictionary *_storeMetadata;
    unsigned long long _nextPK64;
    NSDictionary *_mappings;
}

+ (void)initialize;

- (id)_storeMetadataForSaving;
- (unsigned long long)_cheatAndLookAtCurrentValueOfnextPK64;
- (id)externalMapping;
- (void)setDatabaseUUID:(id)arg1;
- (id)databaseUUID;
- (unsigned long long)nextPK64;
- (id)handleFetchRequest:(id)arg1;
- (id)retainedObjectIDsForRelationship:(id)arg1 forObjectID:(id)arg2;
- (void)updateObject:(id)arg1 objectIDMap:(id)arg2;
- (void)addObject:(id)arg1 objectIDMap:(id)arg2;
- (void)removeObject:(id)arg1 objectIDMap:(id)arg2;
- (id)store;
- (void)_setMetadata:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)initWithStore:(id)arg1;
- (id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(bool)arg2;
- (void)setMetadata:(id)arg1;
- (id)configurationName;
- (id)metadata;
- (void)dealloc;

@end
