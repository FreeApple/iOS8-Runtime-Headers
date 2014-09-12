/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@interface GSStorageManager : NSObject  {
}

+ (bool)_isPermanentStorageSupportedForFD:(int)arg1 error:(id*)arg2;
+ (bool)_isPermanentStorageSupportedForStatFSInfo:(struct statfs { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct fsid { int x_8_1_1[2]; } x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; BOOL x13[16]; BOOL x14[1024]; BOOL x15[1024]; unsigned int x16[8]; }*)arg1 error:(id*)arg2;
+ (id)manager;
+ (void)initialize;

- (bool)isItemAtURLInsidePermanentStorage:(id)arg1 error:(id*)arg2;
- (bool)deallocateDocumentIDOfItemAtURL:(id)arg1 error:(id*)arg2;
- (id)stagingPrefixForDocumentID:(id)arg1;
- (void)_connectionWithDaemonWasLost;
- (bool)removeTemporaryStorage:(id)arg1 error:(id*)arg2;
- (id)additionForItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2 error:(id*)arg3;
- (id)temporaryStorageForItemAtURL:(id)arg1 locatedAtURL:(id)arg2 error:(id*)arg3;
- (bool)isPermanentStorageSupportedAtURL:(id)arg1 error:(id*)arg2;
- (id)persistentIdentifierInStorage:(struct NSObject { Class x1; }*)arg1 forAdditionNamed:(id)arg2 inNameSpace:(id)arg3;
- (id)permanentStorageForItemAtURL:(id)arg1 allocateIfNone:(bool)arg2 error:(id*)arg3;

@end
