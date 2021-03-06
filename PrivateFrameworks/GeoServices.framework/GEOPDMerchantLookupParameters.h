/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, GEOLocation;

@interface GEOPDMerchantLookupParameters : PBCodable <NSCopying> {
    double _transactionTimestamp;
    NSString *_merchantCode;
    NSString *_paymentNetwork;
    GEOLocation *_transactionLocation;
    struct { 
        unsigned int transactionTimestamp : 1; 
    } _has;
}

@property(readonly) bool hasPaymentNetwork;
@property(retain) NSString * paymentNetwork;
@property(readonly) bool hasMerchantCode;
@property(retain) NSString * merchantCode;
@property bool hasTransactionTimestamp;
@property double transactionTimestamp;
@property(readonly) bool hasTransactionLocation;
@property(retain) GEOLocation * transactionLocation;


- (id)paymentNetwork;
- (id)merchantCode;
- (id)transactionLocation;
- (double)transactionTimestamp;
- (bool)hasTransactionLocation;
- (bool)hasTransactionTimestamp;
- (void)setHasTransactionTimestamp:(bool)arg1;
- (void)setTransactionTimestamp:(double)arg1;
- (bool)hasMerchantCode;
- (bool)hasPaymentNetwork;
- (void)setTransactionLocation:(id)arg1;
- (void)setMerchantCode:(id)arg1;
- (void)setPaymentNetwork:(id)arg1;
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
