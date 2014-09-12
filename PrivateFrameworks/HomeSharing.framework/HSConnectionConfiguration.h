/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSString, NSDictionary, NSURL, NSNumber, SSAccount;

@interface HSConnectionConfiguration : NSObject <HSXPCCoding, NSSecureCoding, NSCopying, NSMutableCopying> {
    SSAccount *_account;
    NSDictionary *_urlBag;
    NSURL *_baseURL;
    NSString *_buildIdentifier;
    NSString *_purchaseClientIdentifier;
    NSDictionary *_cookieHeaders;
    NSString *_userAgent;
    long long _requestReason;
    NSNumber *_familyMemberStoreID;
}

@property(readonly) SSAccount * account;
@property(readonly) NSDictionary * urlBag;
@property(readonly) NSURL * baseURL;
@property(readonly) NSString * buildIdentifier;
@property(readonly) NSString * purchaseClientIdentifier;
@property(readonly) NSDictionary * cookieHeaders;
@property(readonly) NSString * userAgent;
@property(readonly) long long requestReason;
@property(readonly) NSNumber * familyMemberStoreID;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (bool)supportsSecureCoding;

- (id)familyMemberStoreID;
- (long long)requestReason;
- (id)cookieHeaders;
- (id)purchaseClientIdentifier;
- (id)buildIdentifier;
- (id)urlBag;
- (id)_dictonaryFromXPCDictonary:(id)arg1;
- (id)_copyXPCDictonaryFromDictonary:(id)arg1;
- (id)userAgent;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)account;
- (id)init;
- (id)baseURL;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
