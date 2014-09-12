/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, CKDAssetCache, CKDMMCSEngineContext;

@interface CKDMMCS : NSObject  {
    NSString *_path;
    CKDAssetCache *_assetCache;
    CKDMMCSEngineContext *_MMCSEngineContext;
}

@property(retain) NSString * path;
@property(retain) CKDAssetCache * assetCache;
@property(getter=getProtocolVersion,readonly) NSString * protocolVersion;
@property(getter=getMaxChunkCountForSection,readonly) unsigned int maxChunkCountForSection;
@property(retain) CKDMMCSEngineContext * MMCSEngineContext;
@property(getter=getMMCSEngine,readonly) struct __MMCSEngine { }* MMCSEngine;

+ (id)_errorWithMMCSError:(id)arg1 description:(id)arg2 isGet:(bool)arg3;
+ (id)sharedWrappersByBundleID;
+ (id)_errorWithMMCSError:(id)arg1 path:(id)arg2 description:(id)arg3 isGet:(bool)arg4;
+ (id)_userInfoFromMMCSRetryableError:(id)arg1;
+ (long long)_errorCodeWithMMCSPutError:(id)arg1;
+ (long long)_errorCodeWithMMCSGetError:(id)arg1;
+ (long long)_commonErrorCodeWithMMCSError:(id)arg1;
+ (id)emptyFileSignature;
+ (id)MMCSWrapperForApplicationBundleID:(id)arg1 path:(id)arg2 assetDbPath:(id)arg3 fileDownloadPath:(id)arg4 packageDownloadPath:(id)arg5 packageUploadPath:(id)arg6 isUTAccount:(bool)arg7 error:(id*)arg8;

- (void)setMMCSEngineContext:(id)arg1;
- (id)getSectionItem:(id)arg1 options:(id)arg2 progress:(id)arg3 completionHandler:(id)arg4;
- (id)putSectionItem:(id)arg1 options:(id)arg2 progress:(id)arg3 completionHandler:(id)arg4;
- (void)unregisterItemIDs:(id)arg1;
- (unsigned int)getMaxChunkCountForSection;
- (id)_contextToGetSectionItem:(id)arg1 options:(id)arg2 progress:(id)arg3 completionHandler:(id)arg4;
- (id)_contextToPutSectionItem:(id)arg1 options:(id)arg2 progress:(id)arg3 completionHandler:(id)arg4;
- (id)_contextToPutItemGroup:(id)arg1 options:(id)arg2 progress:(id)arg3 completionHandler:(id)arg4;
- (id)_contextToGetItemGroup:(id)arg1 options:(id)arg2 progress:(id)arg3 completionHandler:(id)arg4;
- (void)_logMMCSOptions:(id)arg1;
- (id)_referenceSignatureFromReferenceIdentifier:(id)arg1 containerID:(id)arg2;
- (id)registerItemGroupSet:(id)arg1 shouldChunk:(bool)arg2 completionHandler:(id)arg3;
- (id)_contextToRegisterItemGroup:(id)arg1 options:(id)arg2 completionHandler:(id)arg3;
- (struct __MMCSEngine { }*)getMMCSEngine;
- (id)_referenceIdentifierFromAssetKey:(id)arg1;
- (id)MMCSEngineContext;
- (void)setAssetCache:(id)arg1;
- (id)initWithMMCSEngineContext:(id)arg1 path:(id)arg2;
- (id)putItemGroupSet:(id)arg1 options:(id)arg2 progress:(id)arg3 completionHandler:(id)arg4;
- (id)registerItemGroupSet:(id)arg1 completionHandler:(id)arg2;
- (id)getProtocolVersion;
- (id)getItemGroupSet:(id)arg1 options:(id)arg2 progress:(id)arg3 completionHandler:(id)arg4;
- (id)statusReport;
- (id)assetCache;
- (id)path;
- (void)setPath:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;

@end
