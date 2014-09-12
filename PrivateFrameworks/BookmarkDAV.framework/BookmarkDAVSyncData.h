/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

@class NSMutableDictionary, NSDictionary, NSURL, NSString, NSNumber;

@interface BookmarkDAVSyncData : NSObject  {
    void *_db;
    NSMutableDictionary *_backingDict;
    bool_hasChanges;
}

@property(readonly) bool hasChanges;
@property(retain) NSURL * homeURL;
@property bool initialSyncDone;
@property(retain) NSDictionary * pushTransports;
@property(retain) NSString * pushKey;
@property(retain) NSString * ctag;
@property(retain) NSString * ptag;
@property(retain) NSString * etag;
@property(retain) NSString * syncToken;
@property(retain) NSDictionary * bulkRequests;
@property bool supportsSyncCollection;
@property(retain) NSString * bookmarksBarId;
@property(retain) NSString * bookmarksMenuId;
@property unsigned long long bookmarksBarOrder;
@property unsigned long long bookmarksMenuOrder;
@property(retain) NSDictionary * heldAsideOrderings;
@property bool hasHitQuotaLimit;
@property(retain) NSNumber * knownQuotaRemaining;
@property unsigned long long clientVersion;
@property(retain) NSString * accountPrsId;
@property(retain) NSURL * principalURL;


- (void)setClientVersion:(unsigned long long)arg1;
- (void)setAccountPrsId:(id)arg1;
- (bool)supportsSyncCollection;
- (id)accountPrsId;
- (unsigned long long)clientVersion;
- (void)setHeldAsideOrderings:(id)arg1;
- (id)heldAsideOrderings;
- (id)ptag;
- (void)setBookmarksMenuId:(id)arg1;
- (void)setBookmarksBarId:(id)arg1;
- (bool)initialSyncDone;
- (void)setBookmarksMenuOrder:(unsigned long long)arg1;
- (void)setBookmarksBarOrder:(unsigned long long)arg1;
- (unsigned long long)bookmarksMenuOrder;
- (id)bookmarksMenuId;
- (unsigned long long)bookmarksBarOrder;
- (id)bookmarksBarId;
- (void)setKnownQuotaRemaining:(id)arg1;
- (void)setHasHitQuotaLimit:(bool)arg1;
- (id)knownQuotaRemaining;
- (bool)hasHitQuotaLimit;
- (void)setSupportsSyncCollection:(bool)arg1;
- (void)setPtag:(id)arg1;
- (void)setInitialSyncDone:(bool)arg1;
- (void)setHomeURL:(id)arg1;
- (id)homeURL;
- (void)writeToBookmarkDB;
- (id)initWithBookmarkDatabase:(void*)arg1;
- (void)setCtag:(id)arg1;
- (id)ctag;
- (void)setPrincipalURL:(id)arg1;
- (id)principalURL;
- (void)setSyncToken:(id)arg1;
- (void)setBulkRequests:(id)arg1;
- (void)setPushTransports:(id)arg1;
- (void)setPushKey:(id)arg1;
- (id)syncToken;
- (id)bulkRequests;
- (id)pushTransports;
- (id)pushKey;
- (void)setEtag:(id)arg1;
- (id)etag;
- (bool)hasChanges;
- (void)dealloc;

@end
