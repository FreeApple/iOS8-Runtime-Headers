/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKPStyleProperties;

@interface VKPZoomProperty : PBCodable <NSCopying> {
    float _maxZ;
    float _minZ;
    VKPStyleProperties *_properties;
}

@property float minZ;
@property float maxZ;
@property(retain) VKPStyleProperties * properties;


- (void)applyTo:(id)arg1 zoom:(float)arg2;
- (void)setMaxZ:(float)arg1;
- (float)maxZ;
- (float)minZ;
- (void)setMinZ:(float)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setProperties:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)properties;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
