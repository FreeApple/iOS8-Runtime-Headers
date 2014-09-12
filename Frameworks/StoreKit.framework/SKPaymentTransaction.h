/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSDate, NSString, NSArray, NSData, NSError, SKPaymentTransaction, SKPayment;

@interface SKPaymentTransaction : NSObject  {
    id _internal;
}

@property(readonly) NSError * error;
@property(readonly) SKPaymentTransaction * originalTransaction;
@property(readonly) SKPayment * payment;
@property(readonly) NSArray * downloads;
@property(readonly) NSDate * transactionDate;
@property(readonly) NSString * transactionIdentifier;
@property(readonly) NSData * transactionReceipt;
@property(readonly) long long transactionState;
@property(readonly) NSString * matchingIdentifier;
@property(readonly) NSString * _transactionIdentifier;


- (void)_setTransactionState:(long long)arg1;
- (void)_setTransactionReceipt:(id)arg1;
- (void)_setTransactionIdentifier:(id)arg1;
- (void)_setTransactionDate:(id)arg1;
- (void)_setTemporaryIdentifier:(id)arg1;
- (void)_setOriginalTransaction:(id)arg1;
- (id)transactionReceipt;
- (id)originalTransaction;
- (void)_setDownloads:(id)arg1;
- (bool)mergeWithTransaction:(id)arg1;
- (bool)canMergeWithTransaction:(id)arg1;
- (id)_transactionIdentifier;
- (id)matchingIdentifier;
- (long long)transactionState;
- (id)initWithPayment:(id)arg1;
- (id)payment;
- (id)transactionIdentifier;
- (id)downloads;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)transactionDate;
- (id)init;
- (id)error;
- (void)dealloc;
- (void)_setError:(id)arg1;

@end
