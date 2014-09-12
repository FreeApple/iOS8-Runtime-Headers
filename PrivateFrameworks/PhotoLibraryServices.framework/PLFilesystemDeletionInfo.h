/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString, NSURL, NSArray;

@interface PLFilesystemDeletionInfo : NSObject  {
    NSString *_directory;
    NSString *_filename;
    NSURL *_objectIDURI;
    NSArray *_fileURLs;
    unsigned long long _thumbnailIndex;
    NSString *_thumbnailIdentifier;
    NSString *_uuid;
    unsigned long long _timestamp;
}

@property(retain,readonly) NSURL * objectIDURI;
@property(retain) NSArray * fileURLs;
@property(readonly) unsigned long long thumbnailIndex;
@property(retain) NSString * thumbnailIdentifier;
@property(retain,readonly) NSString * uuid;
@property(readonly) unsigned long long timestamp;
@property(retain,readonly) NSString * directory;
@property(retain,readonly) NSString * filename;

+ (id)deletionInfoWithAsset:(id)arg1;

- (void)setThumbnailIdentifier:(id)arg1;
- (void)setFileURLs:(id)arg1;
- (id)fileURLs;
- (id)objectIDURI;
- (id)initWithObjectIDURI:(id)arg1 directory:(id)arg2 filename:(id)arg3 fileURLs:(id)arg4 thumbnailIndex:(unsigned long long)arg5 thumbnailIdentifier:(id)arg6 uuid:(id)arg7 timestamp:(unsigned long long)arg8;
- (unsigned long long)thumbnailIndex;
- (id)thumbnailIdentifier;
- (id)directory;
- (unsigned long long)timestamp;
- (id)uuid;
- (void)dealloc;
- (id)description;
- (id)filename;

@end
