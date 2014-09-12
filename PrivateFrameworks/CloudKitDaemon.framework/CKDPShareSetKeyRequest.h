/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, NSData, CKDPShareIdentifier, NSMutableArray;

@interface CKDPShareSetKeyRequest : PBRequest <NSCopying> {
    NSString *_currentKeyVersion;
    NSData *_keyData;
    NSMutableArray *_participantIds;
    CKDPShareIdentifier *_shareId;
}

@property(readonly) bool hasShareId;
@property(retain) CKDPShareIdentifier * shareId;
@property(readonly) bool hasCurrentKeyVersion;
@property(retain) NSString * currentKeyVersion;
@property(readonly) bool hasKeyData;
@property(retain) NSData * keyData;
@property(retain) NSMutableArray * participantIds;

+ (id)options;

- (void)setParticipantIds:(id)arg1;
- (id)participantIds;
- (id)currentKeyVersion;
- (bool)hasCurrentKeyVersion;
- (id)participantIdAtIndex:(unsigned long long)arg1;
- (void)clearParticipantIds;
- (unsigned long long)participantIdsCount;
- (void)setCurrentKeyVersion:(id)arg1;
- (void)addParticipantId:(id)arg1;
- (id)keyData;
- (bool)hasKeyData;
- (void)setKeyData:(id)arg1;
- (id)shareId;
- (bool)hasShareId;
- (void)setShareId:(id)arg1;
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
