/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMutableArray;

@interface CKDPZoneRetrieveResponse : PBCodable <NSCopying> {
    NSMutableArray *_zoneSummarys;
}

@property(retain) NSMutableArray * zoneSummarys;


- (void)setZoneSummarys:(id)arg1;
- (id)zoneSummarys;
- (id)zoneSummaryAtIndex:(unsigned long long)arg1;
- (void)clearZoneSummarys;
- (unsigned long long)zoneSummarysCount;
- (void)addZoneSummary:(id)arg1;
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
