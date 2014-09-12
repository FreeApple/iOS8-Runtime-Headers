/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, CKDPRecordRetrieveRequestRetrieveAssetURL, CKDPRecordIdentifier, CKDPRequestedFields;

@interface CKDPRecordRetrieveRequest : PBRequest <NSCopying> {
    NSString *_clientVersionETag;
    CKDPRecordRetrieveRequestRetrieveAssetURL *_getAssetURL;
    CKDPRecordIdentifier *_recordIdentifier;
    CKDPRequestedFields *_requestedFields;
    NSString *_versionETag;
}

@property(readonly) bool hasRecordIdentifier;
@property(retain) CKDPRecordIdentifier * recordIdentifier;
@property(readonly) bool hasRequestedFields;
@property(retain) CKDPRequestedFields * requestedFields;
@property(readonly) bool hasVersionETag;
@property(retain) NSString * versionETag;
@property(readonly) bool hasClientVersionETag;
@property(retain) NSString * clientVersionETag;
@property(readonly) bool hasGetAssetURL;
@property(retain) CKDPRecordRetrieveRequestRetrieveAssetURL * getAssetURL;

+ (id)options;

- (id)getAssetURL;
- (id)clientVersionETag;
- (id)versionETag;
- (id)requestedFields;
- (id)recordIdentifier;
- (bool)hasGetAssetURL;
- (bool)hasClientVersionETag;
- (bool)hasVersionETag;
- (bool)hasRequestedFields;
- (bool)hasRecordIdentifier;
- (void)setGetAssetURL:(id)arg1;
- (void)setClientVersionETag:(id)arg1;
- (void)setVersionETag:(id)arg1;
- (void)setRequestedFields:(id)arg1;
- (void)setRecordIdentifier:(id)arg1;
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
