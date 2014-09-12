/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class NSString, NSURL, NSDate, <NSCopying><NSSecureCoding>, GSPermanentStorage;

@interface BRNonLocalVersion : NSObject  {
    NSURL *_url;
    NSString *_displayName;
    NSString *_etag;
    unsigned long long _size;
    NSDate *_modificationDate;
    NSString *_lastEditorDeviceName;
    bool_hasThumbnail;
    GSPermanentStorage *_versionsStore;
    long long _sandboxHandle;
}

@property(readonly) NSURL * url;
@property(readonly) NSString * etag;
@property(readonly) <NSCopying><NSSecureCoding> * persistentIdentifier;
@property(readonly) NSString * displayName;
@property(readonly) unsigned long long size;
@property(readonly) NSDate * modificationDate;
@property(readonly) NSString * lastEditorDeviceName;
@property bool hasThumbnail;
@property(readonly) bool isLatestVersion;

+ (id)listVersionsOfDocumentAtURL:(id)arg1;

- (id)lastEditorDeviceName;
- (void)setHasThumbnail:(bool)arg1;
- (id)initWithURL:(id)arg1 physicalURL:(id)arg2 extension:(id)arg3 etag:(id)arg4 hasThumbnail:(bool)arg5 lastEditorDeviceName:(id)arg6 versionsStore:(id)arg7;
- (bool)isLatestVersion;
- (id)etag;
- (id)url;
- (id)persistentIdentifier;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)modificationDate;
- (bool)hasThumbnail;
- (unsigned long long)size;

@end
