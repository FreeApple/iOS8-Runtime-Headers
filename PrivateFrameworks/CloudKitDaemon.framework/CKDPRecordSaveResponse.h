/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, CKDPDateStatistics, CKDPRecord;

@interface CKDPRecordSaveResponse : PBCodable <NSCopying> {
    NSString *_etag;
    CKDPRecord *_serverFields;
    CKDPDateStatistics *_timeStatistics;
}

@property(readonly) bool hasEtag;
@property(retain) NSString * etag;
@property(readonly) bool hasTimeStatistics;
@property(retain) CKDPDateStatistics * timeStatistics;
@property(readonly) bool hasServerFields;
@property(retain) CKDPRecord * serverFields;


- (id)serverFields;
- (id)timeStatistics;
- (bool)hasServerFields;
- (bool)hasTimeStatistics;
- (void)setServerFields:(id)arg1;
- (void)setTimeStatistics:(id)arg1;
- (bool)hasEtag;
- (void)setEtag:(id)arg1;
- (id)etag;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
