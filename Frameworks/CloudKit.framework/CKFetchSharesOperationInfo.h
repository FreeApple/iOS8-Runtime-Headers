/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSArray;

@interface CKFetchSharesOperationInfo : CKOperationInfo <NSSecureCoding> {
    bool_isFetchAllSharesOperation;
    NSArray *_shareIDsToFetch;
}

@property(retain) NSArray * shareIDsToFetch;
@property bool isFetchAllSharesOperation;

+ (bool)supportsSecureCoding;

- (id)shareIDsToFetch;
- (bool)isFetchAllSharesOperation;
- (void)setShareIDsToFetch:(id)arg1;
- (void)setIsFetchAllSharesOperation:(bool)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;

@end
