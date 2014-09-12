/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVLaneConnection : PBCodable <NSCopying> {
    unsigned int _firstLaneIndex;
    unsigned int _firstRoadIndex;
    unsigned int _secondLaneIndex;
    unsigned int _secondRoadIndex;
}

@property unsigned int firstRoadIndex;
@property unsigned int firstLaneIndex;
@property unsigned int secondRoadIndex;
@property unsigned int secondLaneIndex;


- (void)setSecondLaneIndex:(unsigned int)arg1;
- (unsigned int)secondLaneIndex;
- (void)setSecondRoadIndex:(unsigned int)arg1;
- (unsigned int)secondRoadIndex;
- (void)setFirstLaneIndex:(unsigned int)arg1;
- (unsigned int)firstLaneIndex;
- (void)setFirstRoadIndex:(unsigned int)arg1;
- (unsigned int)firstRoadIndex;
- (void)copyTo:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
