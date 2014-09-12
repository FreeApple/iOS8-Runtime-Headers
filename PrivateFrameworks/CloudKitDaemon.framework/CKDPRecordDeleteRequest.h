/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, CKDPRecordIdentifier;

@interface CKDPRecordDeleteRequest : PBRequest <NSCopying> {
    NSString *_etag;
    CKDPRecordIdentifier *_recordIdentifier;
}

@property(readonly) bool hasRecordIdentifier;
@property(retain) CKDPRecordIdentifier * recordIdentifier;
@property(readonly) bool hasEtag;
@property(retain) NSString * etag;

+ (id)options;

- (id)recordIdentifier;
- (bool)hasRecordIdentifier;
- (void)setRecordIdentifier:(id)arg1;
- (bool)hasEtag;
- (void)setEtag:(id)arg1;
- (id)etag;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
