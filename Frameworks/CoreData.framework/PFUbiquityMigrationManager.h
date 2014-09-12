/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectModel, PFUbiquityLocation, NSString;

@interface PFUbiquityMigrationManager : NSObject  {
    NSManagedObjectModel *_destinationModel;
    NSManagedObjectModel *_sourceModel;
    PFUbiquityLocation *_rootLocation;
    NSString *_localPeerID;
}

@property(readonly) NSManagedObjectModel * sourceModel;
@property(readonly) NSManagedObjectModel * destinationModel;
@property(readonly) PFUbiquityLocation * rootLocation;


- (bool)migrateTransactionLogs:(bool)arg1 andBaselineIfNecessaryForStoreName:(id)arg2 peerID:(id)arg3 error:(id*)arg4;
- (id)initWithDestinationModel:(id)arg1 storeName:(id)arg2 previousModelVersionHash:(id)arg3 ubiquityRootLocation:(id)arg4 localPeerID:(id)arg5;
- (id)rootLocation;
- (id)destinationModel;
- (id)sourceModel;
- (id)initWithDestinationModel:(id)arg1 sourceModel:(id)arg2 ubiquityRootLocation:(id)arg3 localPeerID:(id)arg4;
- (void)dealloc;

@end
