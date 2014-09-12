/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSString;

@interface DADAMContainerIDCacheKey : NSObject <NSCopying> {
    NSString *_accountID;
    long long _dataclass;
}

@property(readonly) NSString * accountID;
@property(readonly) long long dataclass;


- (id)initWithAccountID:(id)arg1 andDataclass:(long long)arg2;
- (long long)dataclass;
- (id)accountID;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
