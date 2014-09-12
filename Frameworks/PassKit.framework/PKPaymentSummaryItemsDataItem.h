/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSString, NSArray, NSDecimalNumber;

@interface PKPaymentSummaryItemsDataItem : PKPaymentDataItem  {
}

@property(readonly) NSString * currencyCode;
@property(readonly) NSArray * paymentSummaryItems;
@property(readonly) NSDecimalNumber * transactionAmount;

+ (long long)dataType;

- (id)paymentSummaryItems;
- (bool)isValidWithError:(id*)arg1;
- (id)transactionAmount;
- (id)currencyCode;

@end
