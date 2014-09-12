/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@class NSString;

@interface PRSFairPlaySAPSession : NSObject  {
    bool_complete;
    NSString *_SAPVersion;
}

@property(getter=isComplete,readonly) bool complete;
@property(retain) NSString * SAPVersion;


- (void)setSAPVersion:(id)arg1;
- (id)SAPVersion;
- (id)signatureStringForData:(id)arg1 error:(id*)arg2;
- (id)processSignedData:(id)arg1 withSignature:(id)arg2 error:(id*)arg3;
- (id)exchangeData:(id)arg1 error:(id*)arg2;
- (id)signatureForData:(id)arg1 error:(id*)arg2;
- (bool)isComplete;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
