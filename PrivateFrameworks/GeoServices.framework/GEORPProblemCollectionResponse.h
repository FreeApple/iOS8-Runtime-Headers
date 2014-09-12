/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEORPProblemCollectionResponse : PBCodable <NSCopying> {
    NSString *_problemId;
    int _statusCode;
    struct { 
        unsigned int statusCode : 1; 
    } _has;
}

@property bool hasStatusCode;
@property int statusCode;
@property(readonly) bool hasProblemId;
@property(retain) NSString * problemId;


- (bool)hasProblemId;
- (bool)hasStatusCode;
- (void)setHasStatusCode:(bool)arg1;
- (void)setStatusCode:(int)arg1;
- (void)setProblemId:(id)arg1;
- (id)problemId;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (int)statusCode;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
