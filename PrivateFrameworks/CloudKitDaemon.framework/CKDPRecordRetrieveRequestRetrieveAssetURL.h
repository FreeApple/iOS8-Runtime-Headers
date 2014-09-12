/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPRequestedFields;

@interface CKDPRecordRetrieveRequestRetrieveAssetURL : PBCodable <NSCopying> {
    long long _requestedTTL;
    CKDPRequestedFields *_assetFields;
    int _type;
    struct { 
        unsigned int requestedTTL : 1; 
        unsigned int type : 1; 
    } _has;
}

@property(readonly) bool hasAssetFields;
@property(retain) CKDPRequestedFields * assetFields;
@property bool hasRequestedTTL;
@property long long requestedTTL;
@property bool hasType;
@property int type;


- (bool)hasRequestedTTL;
- (void)setHasRequestedTTL:(bool)arg1;
- (bool)hasAssetFields;
- (void)setAssetFields:(id)arg1;
- (id)assetFields;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setRequestedTTL:(long long)arg1;
- (long long)requestedTTL;
- (void)setHasType:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)hasType;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setType:(int)arg1;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
