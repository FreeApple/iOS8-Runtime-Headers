/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng, NSData, GEOPDViewportInfo;

@interface GEORPMapLocation : PBCodable <NSCopying> {
    GEOLatLng *_coordinate;
    NSData *_image;
    GEOPDViewportInfo *_viewportInfo;
    float _zoomLevel;
    struct { 
        unsigned int zoomLevel : 1; 
    } _has;
}

@property(readonly) bool hasImage;
@property(retain) NSData * image;
@property(readonly) bool hasCoordinate;
@property(retain) GEOLatLng * coordinate;
@property bool hasZoomLevel;
@property float zoomLevel;
@property(readonly) bool hasViewportInfo;
@property(retain) GEOPDViewportInfo * viewportInfo;


- (float)zoomLevel;
- (id)viewportInfo;
- (bool)hasZoomLevel;
- (void)setHasZoomLevel:(bool)arg1;
- (bool)hasCoordinate;
- (void)setZoomLevel:(float)arg1;
- (bool)hasViewportInfo;
- (void)setViewportInfo:(id)arg1;
- (bool)hasImage;
- (void)setCoordinate:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)coordinate;
- (void)setImage:(id)arg1;
- (id)image;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
