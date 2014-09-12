/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary, OISFUDataRepresentation<SFUZipArchiveDataRepresentation>, NSData, NSString, OISFUCryptoKey;

@interface OISFUZipArchive : NSObject  {
    NSMutableDictionary *mEntries;
    OISFUDataRepresentation<SFUZipArchiveDataRepresentation> *mDataRepresentation;
    NSData *mPassphraseVerifier;
    NSString *mPassphraseHint;
    OISFUCryptoKey *mCryptoKey;
    NSData *mEncryptedDocumentUuid;
}

+ (bool)isZipArchiveAtPath:(id)arg1;

- (void)setCryptoKey:(id)arg1;
- (struct SFUZipEndOfCentralDirectory { unsigned long long x1; long long x2; long long x3; })readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long)arg2;
- (struct SFUZipEndOfCentralDirectory { unsigned long long x1; long long x2; long long x3; })readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 eocdOffset:(long long)arg2;
- (const char *)searchForEndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long*)arg2;
- (void)readExtraFieldFromBuffer:(const char *)arg1 size:(unsigned long long)arg2 entry:(id)arg3;
- (id)readFilenameFromBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (struct SFUZipEndOfCentralDirectory { unsigned long long x1; long long x2; long long x3; })readEndOfCentralDirectoryFromInputStream:(id)arg1;
- (bool)decompressAtPath:(id)arg1;
- (id)encryptedDocumentUuid;
- (id)passphraseHint;
- (id)passphraseVerifier;
- (id)entryWithName:(id)arg1 dataLength:(long long)arg2;
- (id)initWithData:(id)arg1 collapseCommonRootDirectory:(bool)arg2;
- (id)initWithPath:(id)arg1 collapseCommonRootDirectory:(bool)arg2;
- (id)allEntryNames;
- (id)initWithData:(id)arg1 collapseCommonRootDirectory:(bool)arg2 ignoreCase:(bool)arg3;
- (void)collapseCommonRootDirectoryIgnoreCase:(bool)arg1;
- (void)readEntries;
- (id)initWithPath:(id)arg1 collapseCommonRootDirectory:(bool)arg2 ignoreCase:(bool)arg3;
- (id)entryWithName:(id)arg1;
- (bool)isEncrypted;
- (void)dealloc;

@end
