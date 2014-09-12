/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDETA : PBCodable <NSCopying> {
    unsigned int _distance;
    unsigned int _time;
    int _transportType;
    struct { 
        unsigned int distance : 1; 
        unsigned int time : 1; 
        unsigned int transportType : 1; 
    } _has;
}

@property bool hasTime;
@property unsigned int time;
@property bool hasDistance;
@property unsigned int distance;
@property bool hasTransportType;
@property int transportType;

+ (int)recommendedTransportTypeForPlaceData:(id)arg1;
+ (id)etaForPlaceData:(id)arg1 transportType:(int)arg2;

- (void)setHasTime:(bool)arg1;
- (bool)hasTime;
- (bool)hasDistance;
- (void)setHasDistance:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (bool)hasTransportType;
- (void)setTransportType:(int)arg1;
- (int)transportType;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setTime:(unsigned int)arg1;
- (unsigned int)time;
- (unsigned int)distance;
- (void)setDistance:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
