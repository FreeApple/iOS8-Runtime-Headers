/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSDecimalNumber, NSString, PKMerchant, NSDate, CLLocation;

@interface PKPaymentTransaction : NSObject <NSSecureCoding> {
    NSString *_identifier;
    NSString *_transactionIdentifier;
    NSDecimalNumber *_amount;
    NSString *_currencyCode;
    NSDate *_transactionDate;
    PKMerchant *_merchant;
    NSString *_locality;
    NSString *_sublocality;
    NSString *_administrativeArea;
    double _locationLatitude;
    double _locationLongitude;
    long long _transactionStatus;
    long long _transactionType;
    long long _technologyType;
    unsigned long long _transactionSources;
}

@property(copy) NSString * identifier;
@property(copy) NSString * transactionIdentifier;
@property(copy) NSDecimalNumber * amount;
@property(copy) NSString * currencyCode;
@property(copy) NSDate * transactionDate;
@property(retain) PKMerchant * merchant;
@property(retain) NSString * locality;
@property(retain) NSString * sublocality;
@property(retain) NSString * administrativeArea;
@property(readonly) NSString * displayLocation;
@property(retain) CLLocation * location;
@property double locationLatitude;
@property double locationLongitude;
@property long long transactionStatus;
@property long long transactionType;
@property long long technologyType;
@property unsigned long long transactionSources;

+ (id)paymentTransactionFromSource:(unsigned long long)arg1 withDictionary:(id)arg2;
+ (id)paymentTransactionFromSource:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void)setTechnologyType:(long long)arg1;
- (long long)technologyType;
- (void)setSublocality:(id)arg1;
- (id)merchant;
- (long long)transactionStatus;
- (void)setLocationLongitude:(double)arg1;
- (void)setLocationLatitude:(double)arg1;
- (double)locationLongitude;
- (double)locationLatitude;
- (id)sublocality;
- (bool)isEqualToPaymentTransaction:(id)arg1;
- (void)setTransactionStatus:(long long)arg1;
- (void)setMerchant:(id)arg1;
- (void)setTransactionSources:(unsigned long long)arg1;
- (unsigned long long)transactionSources;
- (id)locality;
- (id)administrativeArea;
- (void)setLocality:(id)arg1;
- (void)setAdministrativeArea:(id)arg1;
- (id)transactionIdentifier;
- (void)setTransactionIdentifier:(id)arg1;
- (long long)transactionType;
- (void)setTransactionType:(long long)arg1;
- (id)location;
- (void)setTransactionDate:(id)arg1;
- (id)transactionDate;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setLocation:(id)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)setCurrencyCode:(id)arg1;
- (id)currencyCode;
- (id)displayLocation;
- (id)amount;
- (void)setAmount:(id)arg1;

@end
