/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSPersistentStoreMap, NSString, NSManagedObjectID;

@interface NSStoreMapNode : NSObject  {
    NSPersistentStoreMap *_map;
    NSManagedObjectID *_objectID;
    NSMutableDictionary *_relatedNodes;
    NSString *_entityName;
    unsigned int _version;
}

+ (void)initialize;

- (id)_relatedNodes;
- (id)destinationsForRelationship:(id)arg1;
- (void)setDestinations:(id)arg1 forRelationship:(id)arg2;
- (void)_setMap:(id)arg1;
- (id)_snapshot_;
- (const id*)knownKeyValuesPointer;
- (id)initWithObjectID:(id)arg1;
- (void)_setVersionNumber:(unsigned int)arg1;
- (unsigned int)_versionNumber;
- (id)configurationName;
- (id)entity;
- (id)objectID;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
