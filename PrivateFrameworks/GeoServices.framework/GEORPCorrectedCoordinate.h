/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng;

@interface GEORPCorrectedCoordinate : PBCodable <NSCopying> {
    GEOLatLng *_correctedCoordinate;
    GEOLatLng *_originalCoordinate;
}

@property(readonly) bool hasOriginalCoordinate;
@property(retain) GEOLatLng * originalCoordinate;
@property(readonly) bool hasCorrectedCoordinate;
@property(retain) GEOLatLng * correctedCoordinate;


- (bool)hasOriginalCoordinate;
- (void)setOriginalCoordinate:(id)arg1;
- (id)originalCoordinate;
- (id)correctedCoordinate;
- (bool)hasCorrectedCoordinate;
- (void)setCorrectedCoordinate:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
