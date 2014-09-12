/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray;

@interface PLCloudSharedDeleteAlbumsJob : PLCloudSharingJob  {
    NSArray *_albumCloudGUIDsToDelete;
}

@property(retain) NSArray * albumCloudGUIDsToDelete;

+ (void)deleteLocalAlbumsForMSASAlbumGUIDs:(id)arg1;

- (void)setAlbumCloudGUIDsToDelete:(id)arg1;
- (id)albumCloudGUIDsToDelete;
- (long long)daemonOperation;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;
- (void)run;
- (void)dealloc;
- (id)description;

@end
