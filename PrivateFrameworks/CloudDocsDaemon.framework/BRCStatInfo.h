/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class BRFieldCKInfo, BRCItemID, NSString, NSData, BRiWorkSharingInfo;

@interface BRCStatInfo : NSObject <NSCopying, NSSecureCoding> {
    BRFieldCKInfo *_ckInfo;
    BRCItemID *_parentID;
    BOOL _state;
    BOOL _type;
    BOOL _mode;
    int _creator;
    long long _birthtime;
    NSString *_filenameOrAliasTarget;
    bool_hiddenExt;
    NSData *_xattrSignature;
    NSData *_finderTags;
    NSData *_lazyXattr;
    BRiWorkSharingInfo *_iWorkSharingInfo;
}

@property(retain) BRFieldCKInfo * ckInfo;
@property(retain) BRCItemID * parentID;
@property BOOL state;
@property BOOL type;
@property BOOL mode;
@property int creator;
@property long long birthtime;
@property(retain) NSString * filename;
@property(readonly) NSString * displayName;
@property(readonly) NSString * aliasTargetContainerID;
@property(readonly) NSString * aliasTargetZoneName;
@property(readonly) BRCItemID * aliasTargetItemID;
@property(getter=isHiddenExt) bool hiddenExt;
@property(retain) NSData * finderTags;
@property(retain) NSData * xattrSignature;
@property(retain) NSData * lazyXattr;
@property(retain) BRiWorkSharingInfo * iWorkSharingInfo;

+ (bool)supportsSecureCoding;

- (bool)isiWorkShareable;
- (void)setIWorkSharingInfo:(id)arg1;
- (id)iWorkSharingInfo;
- (void)setFinderTags:(id)arg1;
- (id)finderTags;
- (void)setLazyXattr:(id)arg1;
- (id)lazyXattr;
- (void)setXattrSignature:(id)arg1;
- (id)xattrSignature;
- (void)setHiddenExt:(bool)arg1;
- (bool)isHiddenExt;
- (void)setBirthtime:(long long)arg1;
- (long long)birthtime;
- (void)setCreator:(int)arg1;
- (void)setCkInfo:(id)arg1;
- (id)ckInfo;
- (bool)isExecutable;
- (unsigned long long)diffAgainst:(id)arg1;
- (bool)check:(id)arg1 logToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg2;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2;
- (id)aliasTargetZoneName;
- (id)initWithStatInfo:(id)arg1;
- (bool)checkStateWithItemID:(id)arg1 logToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg2;
- (id)descriptionWithContext:(id)arg1 origName:(id)arg2;
- (id)aliasTargetContainerID;
- (id)aliasTargetItemID;
- (int)creator;
- (bool)isWritable;
- (void)setParentID:(id)arg1;
- (id)parentID;
- (void)setMode:(BOOL)arg1;
- (void)setType:(BOOL)arg1;
- (BOOL)type;
- (void)setState:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)state;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (void)setFilename:(id)arg1;
- (id)filename;
- (BOOL)mode;

@end
