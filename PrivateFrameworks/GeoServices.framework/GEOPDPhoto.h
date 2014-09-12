/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSMutableArray;

@interface GEOPDPhoto : PBCodable <NSCopying> {
    NSString *_photoId;
    NSMutableArray *_photoVersions;
}

@property(readonly) bool hasPhotoId;
@property(retain) NSString * photoId;
@property(retain) NSMutableArray * photoVersions;


- (id)photoVersions;
- (id)photoId;
- (bool)hasPhotoId;
- (id)photoVersionAtIndex:(unsigned long long)arg1;
- (void)clearPhotoVersions;
- (unsigned long long)photoVersionsCount;
- (void)addPhotoVersion:(id)arg1;
- (void)setPhotoVersions:(id)arg1;
- (void)setPhotoId:(id)arg1;
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
