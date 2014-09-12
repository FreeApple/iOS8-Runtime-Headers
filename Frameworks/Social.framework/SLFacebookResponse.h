/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class NSData, NSHTTPURLResponse, NSDictionary;

@interface SLFacebookResponse : NSObject <NSCoding> {
    NSData *_responseData;
    NSHTTPURLResponse *_urlResponse;
    id _untypedResponseParameters;
    long long _httpErrorCode;
}

@property(readonly) NSDictionary * responseParameters;
@property(readonly) int APIresponseErrorCode;
@property(readonly) long long httpErrorCode;
@property(readonly) NSHTTPURLResponse * urlResponse;


- (bool)isBatchResponse;
- (id)checkpointURL;
- (bool)hasMissingTokenOrAppID;
- (int)APIresponseErrorCode;
- (long long)httpStatusCode;
- (id)urlResponse;
- (bool)hasHTTPStatusOK;
- (id)initWithResponseData:(id)arg1 urlResponse:(id)arg2;
- (id)untypedResponseParameters;
- (long long)httpErrorCode;
- (bool)hasBadTokenError;
- (id)responseParameters;
- (bool)hasError;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;

@end
