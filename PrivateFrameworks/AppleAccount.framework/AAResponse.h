/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSHTTPURLResponse, NSDictionary, NSData, NSError, NSNumber, NSString;

@interface AAResponse : NSObject  {
    NSDictionary *_responseDictionary;
    NSHTTPURLResponse *_httpResponse;
    NSError *_error;
    long long _statusCode;
    NSData *_data;
    NSNumber *_maxAge;
}

@property(readonly) NSDictionary * responseDictionary;
@property(retain) NSError * error;
@property(readonly) NSString * protocolVersion;
@property(readonly) long long statusCode;
@property(readonly) NSData * data;
@property(readonly) NSNumber * maxAge;


- (id)_deviceSpecificLocalizedString:(id)arg1;
- (id)_stringWithDescriptionForResponseError:(id)arg1;
- (void)_parsePlistResponse:(id)arg1;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2 bodyIsPlist:(bool)arg3;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)responseDictionary;
- (id)protocolVersion;
- (id)data;
- (void)setError:(id)arg1;
- (id)error;
- (long long)statusCode;
- (void).cxx_destruct;
- (id)maxAge;

@end
