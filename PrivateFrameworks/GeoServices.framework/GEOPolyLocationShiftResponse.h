/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPolyLocationShiftResponse : PBCodable <NSCopying> {
    struct { 
        double *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _parameters;
    double _radius;
    int _status;
}

@property int status;
@property(readonly) unsigned long long parametersCount;
@property(readonly) double* parameters;
@property double radius;


- (void)setParameters:(double*)arg1 count:(unsigned long long)arg2;
- (void)addParameters:(double)arg1;
- (double)parametersAtIndex:(unsigned long long)arg1;
- (void)clearParameters;
- (unsigned long long)parametersCount;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double*)parameters;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (void)setRadius:(double)arg1;
- (double)radius;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
