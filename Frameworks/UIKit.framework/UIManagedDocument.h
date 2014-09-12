/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSManagedObjectModel, NSPersistentStoreCoordinator, NSDictionary, NSManagedObjectContext;

@interface UIManagedDocument : UIDocument  {
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectModel *_managedObjectModel;
    NSDictionary *_documentMetadata;
    struct __mdocFlags { 
        unsigned int shouldWriteAdditionalContent : 1; 
        unsigned int _reserved : 31; 
    } _mdocFlags;
    NSDictionary *persistentStoreOptions;
    NSString *modelConfiguration;
}

@property(retain,readonly) NSManagedObjectContext * managedObjectContext;
@property(retain,readonly) NSManagedObjectModel * managedObjectModel;
@property(copy) NSDictionary * persistentStoreOptions;
@property(copy) NSString * modelConfiguration;

+ (void)initialize;
+ (id)additionalContentPathComponent;
+ (id)persistentStoreName;
+ (bool)isPersistentStoreSynchronizedViaUbiquitousContentWithOptions:(id)arg1;

- (id)managedObjectModel;
- (id)managedObjectContext;
- (void)dealloc;
- (void)setModelConfiguration:(id)arg1;
- (void)setPersistentStoreOptions:(id)arg1;
- (id)additionalContentForURL:(id)arg1 error:(id*)arg2;
- (bool)readAdditionalContentFromURL:(id)arg1 error:(id*)arg2;
- (void)_handleRelocatingStoreContentDirectoryFromSyncedURL:(id)arg1 toNonSyncedURL:(id)arg2;
- (bool)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 modelConfiguration:(id)arg3 storeOptions:(id)arg4 error:(id*)arg5;
- (void)_handleRelocatingStoreContentDirectoryFromNonSyncedURL:(id)arg1 toSyncedURL:(id)arg2;
- (bool)_writeMetadataToDocumentURL:(id)arg1;
- (id)_readMetadataFromDocumentURL:(id)arg1;
- (id)modelConfiguration;
- (id)persistentStoreOptions;
- (id)persistentStoreTypeForFileType:(id)arg1;
- (bool)writeAdditionalContent:(id)arg1 toURL:(id)arg2 originalContentsURL:(id)arg3 error:(id*)arg4;
- (id)initWithFileURL:(id)arg1;
- (void)revertToContentsOfURL:(id)arg1 completionHandler:(id)arg2;
- (bool)writeContents:(id)arg1 andAttributes:(id)arg2 safelyToURL:(id)arg3 forSaveOperation:(long long)arg4 error:(id*)arg5;
- (id)contentsForType:(id)arg1 error:(id*)arg2;
- (bool)writeContents:(id)arg1 toURL:(id)arg2 forSaveOperation:(long long)arg3 originalContentsURL:(id)arg4 error:(id*)arg5;
- (bool)readFromURL:(id)arg1 error:(id*)arg2;

@end
