/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOPhotoInfo : PBCodable <NSCopying> {
    int _size;
    NSString *_url;
    struct { 
        unsigned int size : 1; 
    } _has;
}

@property bool hasSize;
@property int size;
@property(readonly) bool hasUrl;
@property(retain) NSString * url;


- (void)setHasSize:(bool)arg1;
- (id)initWithPlaceDataPhotoContent:(id)arg1;
- (bool)hasUrl;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)hasSize;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (void)setSize:(int)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)size;
- (id)dictionaryRepresentation;

@end
