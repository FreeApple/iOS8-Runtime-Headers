/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLResourceIdentityImplementation : CPLResourceIdentity  {
}

+ (id)identityForStorageName:(id)arg1;
+ (id)storageNameForFingerPrint:(id)arg1 fileUTI:(id)arg2 bucket:(id*)arg3;
+ (id)fingerPrintForFD:(int)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (void)setMMCImplementationForPlatform:(id)arg1;
+ (id)extensionForFileUTI:(id)arg1;
+ (id)_fingerPrintForFD:(int)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)fingerPrintForData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)fingerPrintForFileAtURL:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)fileUTIForExtension:(id)arg1;
+ (id)identityFromStoredIdentity:(id)arg1;

- (id)identityForStorage;

@end
