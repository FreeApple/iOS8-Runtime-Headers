/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCCrypto : NSObject  {
}

+ (id)storedActivationLockBypassCodeHash;
+ (void)clearStoredActivationLockHash;
+ (void)clearStoredActivationLockBypassCode;
+ (id)storedActivationLockBypassCode;
+ (id)createAndStoreNewActivationLockBypassCodeAndHash;
+ (id)objectFromEncryptedData:(id)arg1 outCertificate:(struct __SecCertificate {}**)arg2 outError:(id*)arg3;
+ (bool)isValidPKCS12Data:(id)arg1;
+ (struct __SecCertificate { }*)copyCertificateRefFromPEMData:(id)arg1;
+ (struct __SecCertificate { }*)copyCertificateRefFromPKCS1Data:(id)arg1;
+ (id)storeActivationLockBypassCode:(id)arg1 hash:(id)arg2;
+ (void)createNewActivationLockBypassCodeOutCode:(char *)arg1 outRawBytes:(char *)arg2 outHash:(char *)arg3;
+ (id)_decryptionFailedError;


@end
