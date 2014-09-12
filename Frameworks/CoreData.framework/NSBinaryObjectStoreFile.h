/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSDictionary, NSMutableDictionary;

@interface NSBinaryObjectStoreFile : NSObject  {
    int _databaseVersion;
    NSDictionary *_fullMetadata;
    unsigned long long _primaryKeyGeneration;
    NSMutableDictionary *_mapData;
    NSDictionary *_storeOptions;
}


- (bool)writeToFile:(id)arg1 error:(id*)arg2;
- (bool)readFromFile:(id)arg1 error:(id*)arg2;
- (id)mapData;
- (unsigned long long)primaryKeyGeneration;
- (int)databaseVersion;
- (bool)_writeMetadataData:(id)arg1 andMapDataData:(id)arg2 toFile:(id)arg3 error:(id*)arg4;
- (bool)readBinaryStoreFromData:(id)arg1 originalPath:(id)arg2 error:(id*)arg3;
- (void)clearCurrentValues;
- (void)setMapData:(id)arg1;
- (void)setPrimaryKeyGeneration:(unsigned long long)arg1;
- (void)setDatabaseVersion:(int)arg1;
- (bool)writeMetadataToFile:(id)arg1 error:(id*)arg2;
- (void)setFullMetadata:(id)arg1;
- (id)fullMetadata;
- (bool)readMetadataFromFile:(id)arg1 error:(id*)arg2;
- (void)dealloc;

@end
