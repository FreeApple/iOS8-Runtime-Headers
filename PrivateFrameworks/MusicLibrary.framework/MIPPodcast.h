/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString, MIPArtist, MIPSeries;

@interface MIPPodcast : PBCodable <NSCopying> {
    MIPArtist *_artist;
    NSString *_externalGuid;
    MIPSeries *_series;
}

@property(readonly) bool hasArtist;
@property(retain) MIPArtist * artist;
@property(readonly) bool hasSeries;
@property(retain) MIPSeries * series;
@property(readonly) bool hasExternalGuid;
@property(retain) NSString * externalGuid;


- (void)copyTo:(id)arg1;
- (id)externalGuid;
- (bool)hasExternalGuid;
- (void)setExternalGuid:(id)arg1;
- (id)series;
- (bool)hasSeries;
- (bool)hasArtist;
- (void)setSeries:(id)arg1;
- (void)setArtist:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)artist;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
