/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDServerConfiguration;

@interface CKDGlobalConfigurationURLRequest : CKDURLRequest  {
    CKDServerConfiguration *_configuration;
}

@property(retain) CKDServerConfiguration * configuration;


- (bool)hasRequestBody;
- (bool)requiresDeviceID;
- (bool)requiresConfiguration;
- (bool)allowsAnonymousAccount;
- (long long)partitionType;
- (long long)serverType;
- (void)requestDidParsePlistObject:(id)arg1;
- (Class)expectedResponseClass;
- (bool)requiresSignature;
- (id)additionalHeaderValues;
- (id)httpMethod;
- (id)url;
- (id)configuration;
- (void).cxx_destruct;
- (void)setConfiguration:(id)arg1;

@end
