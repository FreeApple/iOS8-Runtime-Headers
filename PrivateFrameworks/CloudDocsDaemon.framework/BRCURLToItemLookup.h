/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSString, BRCRelativePath, NSURL, BRCServerItem, BRCAccountSession, BRCLocalItem, BRCItemID;

@interface BRCURLToItemLookup : NSObject <NSSecureCoding> {
    BRCAccountSession *_session;
    union { 
        struct { 
            unsigned int parentItemID : 1; 
            unsigned int relpath : 1; 
            unsigned int pathMatch : 1; 
            unsigned int faultedMatch : 1; 
            unsigned int byIDMatch : 1; 
            unsigned int reservedMatch : 1; 
        } ; 
        unsigned int value; 
    } _hasFetched;
    BRCRelativePath *__relpath;
    NSURL *_url;
    BRCRelativePath *_parentRelpath;
    BRCItemID *_parentItemID;
    NSString *_filename;
    BRCLocalItem *_byIDLocalItem;
    BRCServerItem *_byIDServerItem;
    unsigned long long _byIDDiffs;
    BRCLocalItem *_byPathLocalItem;
    BRCServerItem *_byPathServerItem;
    unsigned long long _byPathDiffs;
    BRCLocalItem *_faultedLocalItem;
    BRCServerItem *_faultedServerItem;
    BRCRelativePath *_faultedRelpath;
    unsigned long long _faultedDiffs;
    BRCLocalItem *_reservedLocalItem;
    BRCServerItem *_reservedServerItem;
}

@property(readonly) NSURL * url;
@property(readonly) struct { id x1; id x2; id x3; unsigned long long x4; } byIDMatch;
@property(readonly) BRCLocalItem * byIDLocalItem;
@property(readonly) BRCServerItem * byIDServerItem;
@property(readonly) BRCRelativePath * byIDRelpath;
@property(readonly) unsigned long long byIDDiffs;
@property(readonly) struct { id x1; id x2; id x3; unsigned long long x4; } byPathMatch;
@property(readonly) BRCLocalItem * byPathLocalItem;
@property(readonly) BRCServerItem * byPathServerItem;
@property(readonly) BRCRelativePath * byPathRelpath;
@property(readonly) unsigned long long byPathDiffs;
@property(readonly) struct { id x1; id x2; id x3; unsigned long long x4; } faultedMatch;
@property(readonly) BRCLocalItem * faultedLocalItem;
@property(readonly) BRCServerItem * faultedServerItem;
@property(readonly) BRCRelativePath * faultedRelpath;
@property(readonly) unsigned long long faultedDiffs;
@property(readonly) struct { id x1; id x2; id x3; unsigned long long x4; } reservedMatch;
@property(readonly) BRCLocalItem * reservedLocalItem;
@property(readonly) BRCServerItem * reservedServerItem;
@property(readonly) BRCRelativePath * parentRelpath;
@property(readonly) BRCItemID * parentItemID;
@property(readonly) NSString * filename;

+ (bool)supportsSecureCoding;

- (void)tryToUpdateItemInNamespace:(unsigned char)arg1 withDstLookup:(id)arg2;
- (bool)_removeDirectory:(id)arg1 atPath:(id)arg2 error:(id*)arg3;
- (bool)_bouncePathMatch:(const struct { id x1; id x2; id x3; unsigned long long x4; }*)arg1 toApplyServerItem:(id)arg2;
- (void)_moveMissingItemAsideInNamespace:(unsigned char)arg1;
- (bool)tryToDeleteItemInNamespace:(unsigned char)arg1;
- (bool)_bounceBouncesHiddenByFault:(id)arg1;
- (int)_applyDesiredAdditionsOnItem:(id)arg1;
- (bool)_canUpdatePathMatch:(const struct { id x1; id x2; id x3; unsigned long long x4; }*)arg1;
- (struct { id x1; id x2; id x3; unsigned long long x4; })_pathMatchInNamespace:(unsigned char)arg1;
- (void)_clearNamespace:(unsigned char)arg1;
- (int)_discoverConflictLosersOnItem:(id)arg1 atURL:(id)arg2;
- (int)_applyThumbnailOnItem:(id)arg1 atURL:(id)arg2;
- (id)_generateGentleBounceForPathMatch:(const struct { id x1; id x2; id x3; unsigned long long x4; }*)arg1 dirfd:(int)arg2;
- (bool)_isPathMatchIdle:(const struct { id x1; id x2; id x3; unsigned long long x4; }*)arg1;
- (void)matchLookupItemsWithDisk;
- (void)handleReservedPathMatchesIfNeeded;
- (void)markPathMatchLostIfLocationDoesntMatch:(struct { id x1; id x2; id x3; unsigned long long x4; }*)arg1;
- (id)parentRelpath;
- (void)clearReservedItem;
- (id)reservedServerItem;
- (id)reservedLocalItem;
- (struct { id x1; id x2; id x3; unsigned long long x4; })reservedMatch;
- (void)clearFaultedItem;
- (unsigned long long)faultedDiffs;
- (id)faultedLocalItem;
- (id)faultedServerItem;
- (id)faultedRelpath;
- (struct { id x1; id x2; id x3; unsigned long long x4; })faultedMatch;
- (void)clearByIDItem;
- (unsigned long long)byIDDiffs;
- (id)byIDServerItem;
- (id)byIDRelpath;
- (id)byIDLocalItem;
- (struct { id x1; id x2; id x3; unsigned long long x4; })byIDMatch;
- (void)clearByPathItem;
- (unsigned long long)byPathDiffs;
- (id)byPathServerItem;
- (id)byPathRelpath;
- (id)byPathLocalItem;
- (struct { id x1; id x2; id x3; unsigned long long x4; })byPathMatch;
- (bool)resolveParentAndKeepOpenMustExist:(bool)arg1 errcode:(int*)arg2;
- (id)initWithURL:(id)arg1 root:(id)arg2;
- (void)_fetchReservedPathMatch;
- (void)refreshFaultedDiffs;
- (void)_fetchFaultedPathMatch;
- (void)_fetchIDMatch;
- (void)refreshByIDDiffs;
- (void)_fetchPathMatch;
- (void)refreshByPathDiffs;
- (id)_relpath;
- (id)parentItemID;
- (void)_fetchRelPath;
- (void)closePaths;
- (id)url;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)filename;

@end
