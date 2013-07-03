/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, NSDictionary;

@interface GEOBatchRevGeocodeResponse : PBCodable  {
    NSMutableArray *_batchPlaceResults;
    NSMutableArray *_clusters;
    int _statusCode;
    struct { 
        unsigned int statusCode : 1; 
    } _has;
}

@property(retain) NSDictionary * httpHeaders;
@property BOOL hasStatusCode;
@property int statusCode;
@property(retain) NSMutableArray * clusters;
@property(retain) NSMutableArray * batchPlaceResults;


- (id)clusters;
- (id)batchPlaceResults;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)batchPlaceResultAtIndex:(unsigned int)arg1;
- (void)clearBatchPlaceResults;
- (id)clusterAtIndex:(unsigned int)arg1;
- (void)clearClusters;
- (unsigned int)clustersCount;
- (void)addBatchPlaceResult:(id)arg1;
- (void)addCluster:(id)arg1;
- (void)setBatchPlaceResults:(id)arg1;
- (void)setClusters:(id)arg1;
- (void)setHasStatusCode:(BOOL)arg1;
- (void)setStatusCode:(int)arg1;
- (BOOL)hasStatusCode;
- (unsigned int)batchPlaceResultsCount;
- (void)setHttpHeaders:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)statusCode;
- (id)httpHeaders;

@end