/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSString, NSDictionary, NSData, NSError;

@interface HSResponse : NSObject  {
    NSData *_responseData;
    unsigned long long _responseCode;
    NSDictionary *_responseHeaderFields;
    NSError *_error;
    NSString *_MIMEType;
}

@property(readonly) NSString * MIMEType;
@property(readonly) unsigned long long responseCode;
@property(readonly) NSDictionary * responseHeaderFields;
@property(readonly) NSData * responseData;
@property(readonly) NSError * error;

+ (id)responseWithCode:(unsigned long long)arg1 headerFields:(id)arg2 data:(id)arg3 MIMEType:(id)arg4 error:(id)arg5;
+ (id)responseWithResponse:(id)arg1;

- (id)responseHeaderFields;
- (unsigned long long)responseCode;
- (id)initWithCode:(unsigned long long)arg1 headerFields:(id)arg2 data:(id)arg3 MIMEType:(id)arg4 error:(id)arg5;
- (id)responseData;
- (id)MIMEType;
- (id)error;
- (void).cxx_destruct;
- (id)description;

@end
