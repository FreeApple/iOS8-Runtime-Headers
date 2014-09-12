/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOAttributeKeyValue : PBCodable <NSCopying> {
    NSString *_attributeKey;
    NSString *_attributeValue;
}

@property(retain) NSString * attributeKey;
@property(retain) NSString * attributeValue;


- (void)setAttributeValue:(id)arg1;
- (void)setAttributeKey:(id)arg1;
- (id)attributeValue;
- (id)attributeKey;
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
