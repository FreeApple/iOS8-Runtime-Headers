/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Photos.framework/Photos
 */

@class NSString, NSNumber;

@interface PHCloudSharedAlbum : PHAssetCollection  {
    bool_owned;
    bool_cloudMultipleContributorsEnabled;
    short _cloudAlbumSubtype;
    NSString *_cloudOwnerFirstName;
    NSString *_cloudOwnerLastName;
    NSString *_cloudOwnerFullName;
    NSNumber *_cloudOwnerEmailKey;
}

@property(getter=isOwned,readonly) bool owned;
@property(getter=isCloudMultipleContributorsEnabled,readonly) bool cloudMultipleContributorsEnabled;
@property(readonly) short cloudAlbumSubtype;
@property(retain,readonly) NSString * cloudOwnerFirstName;
@property(retain,readonly) NSString * cloudOwnerLastName;
@property(retain,readonly) NSString * cloudOwnerFullName;
@property(retain,readonly) NSNumber * cloudOwnerEmailKey;

+ (id)identifierCode;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)managedEntityName;

- (bool)isCloudMultipleContributorsEnabled;
- (Class)changeRequestClass;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)collectionHasFixedOrder;
- (short)cloudAlbumSubtype;
- (bool)isOwned;
- (id)cloudOwnerEmailKey;
- (bool)canPerformEditOperation:(long long)arg1;
- (bool)isOwnedCloudSharedAlbum;
- (id)cloudOwnerFullName;
- (id)cloudOwnerLastName;
- (id)cloudOwnerFirstName;
- (id)localizedSharedByLabelAllowsEmail:(bool)arg1;
- (void).cxx_destruct;
- (id)description;

@end
