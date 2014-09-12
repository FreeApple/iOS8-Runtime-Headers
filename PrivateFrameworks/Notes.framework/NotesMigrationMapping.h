/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@class NSManagedObjectModel, NSArray, NSString;

@interface NotesMigrationMapping : NSObject  {
    NSManagedObjectModel *_destinationModel;
    NSArray *_sourceModels;
    NSString *_descriptionString;
    long long _type;
}

@property(retain) NSManagedObjectModel * destinationModel;
@property(copy) NSArray * sourceModels;
@property(copy) NSString * descriptionString;
@property long long type;

+ (id)descriptionStringFromSourceStoreNames:(id)arg1 destinationStoreName:(id)arg2;
+ (id)modelForModelName:(id)arg1;
+ (id)inferredMappingFromSourceModelNames:(id)arg1 toDestinationModelName:(id)arg2;
+ (id)customMappingFromSourceModelName:(id)arg1 toDestinationModelName:(id)arg2;
+ (id)mappings;

- (id)descriptionString;
- (id)sourceModels;
- (void)setDescriptionString:(id)arg1;
- (void)setDestinationModel:(id)arg1;
- (void)setSourceModels:(id)arg1;
- (id)mappingModelForStoreMetadata:(id)arg1;
- (id)sourceModelForStoreMetadata:(id)arg1;
- (bool)canMigrateStoreMetadata:(id)arg1;
- (id)destinationModel;
- (void)setType:(long long)arg1;
- (long long)type;
- (void).cxx_destruct;
- (id)description;

@end
