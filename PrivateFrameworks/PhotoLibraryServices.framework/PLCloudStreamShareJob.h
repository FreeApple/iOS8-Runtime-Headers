/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSString;

@interface PLCloudStreamShareJob : PLCloudSharingJob  {
    NSArray *_mediaSources;
    NSString *_albumCloudGUID;
    NSString *_albumName;
    NSString *_commentText;
    NSArray *_recipientsInfo;
}

@property(retain) NSArray * mediaSources;
@property(retain) NSString * albumCloudGUID;
@property(retain) NSString * albumName;
@property(retain) NSString * commentText;
@property(retain) NSArray * recipientsInfo;

+ (void)publishMediaFromSources:(id)arg1 toNewSharedAlbumWithName:(id)arg2 withCommentText:(id)arg3 recipients:(id)arg4;
+ (void)publishMediaFromSources:(id)arg1 toSharedAlbum:(id)arg2 withCommentText:(id)arg3;

- (long long)daemonOperation;
- (void)runDaemonSide;
- (void)executeDaemonOperation;
- (void)setRecipientsInfo:(id)arg1;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (id)albumName;
- (id)albumCloudGUID;
- (id)commentText;
- (id)recipientsInfo;
- (id)mediaSources;
- (void)addInfosForRecipients:(id)arg1;
- (void)setAlbumName:(id)arg1;
- (void)setCommentText:(id)arg1;
- (void)setAlbumCloudGUID:(id)arg1;
- (void)setMediaSources:(id)arg1;
- (bool)shouldArchiveXPCToDisk;
- (void)encodeToXPCObject:(id)arg1;
- (void)run;
- (id)description;

@end
