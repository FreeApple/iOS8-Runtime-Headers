/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString, PLAdditionalAssetAttributes, PLCloudMaster, NSDate;

@interface PLCloudResource : PLManagedObject  {
}

@property(retain) NSString * filePath;
@property long long fileSize;
@property(retain) NSString * fingerprint;
@property int height;
@property bool isAvailable;
@property bool isFlattened;
@property bool isLocallyAvailable;
@property int type;
@property(retain) NSString * uniformTypeIdentifier;
@property int width;
@property(retain) PLAdditionalAssetAttributes * assetAttributes;
@property(retain) PLCloudMaster * cloudMaster;
@property(retain) NSDate * prunedAt;
@property(retain) NSDate * lastOnDemandDownloadDate;

+ (id)allCloudResourcesInManagedObjectContext:(id)arg1;
+ (id)insertIntoPhotoLibrary:(id)arg1 forAsset:(id)arg2 withCPLResource:(id)arg3;
+ (void)markResource:(id)arg1 asLocallyAvailable:(bool)arg2 inPhotoLibrary:(id)arg3;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;

- (id)cplResourceWithItemIdentifier:(id)arg1 includeFile:(bool)arg2;
- (id)localPathForAsset:(id)arg1;
- (void)applyPropertiesFromCloudResource:(id)arg1 forAsset:(id)arg2;
- (id)description;

@end
