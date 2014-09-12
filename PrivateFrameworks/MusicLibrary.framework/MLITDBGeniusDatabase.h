/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3MusicLibrary;

@interface MLITDBGeniusDatabase : NSObject  {
}

@property(readonly) ML3MusicLibrary * musicLibrary;

+ (id)sharedGeniusDatabase;

- (bool)getGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)arg1 intoData:(id)arg2;
- (bool)getGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)arg1 intoData:(id)arg2;
- (bool)getGeniusConfigrationDataAndBytesIntoData:(id)arg1;
- (id)copyGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)arg1;
- (id)copyGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)arg1;
- (unsigned int)geniusConfigurationVersion;
- (id)copyGeniusConfigrationDataAndBytes;
- (unsigned long long)defaultTrackCount;
- (unsigned long long)defaultMinTrackCount;
- (bool)hasGeniusFeatureEnabled;
- (bool)hasGeniusDataAvailable;
- (unsigned long long)_getInt64ValueInTable:(id)arg1 column:(id)arg2 where:(id)arg3 limit:(unsigned int)arg4;
- (bool)_readBlobForRowID:(unsigned long long)arg1 intoData:(id)arg2 table:(const char *)arg3 blobColumn:(const char *)arg4;
- (bool)_readBlobIntoData:(id)arg1 table:(id)arg2 blobColumn:(id)arg3 where:(id)arg4;
- (id)_copyBlobDataAndBytesInTable:(id)arg1 blobColumn:(id)arg2 where:(id)arg3;
- (unsigned int)_getInt32ValueInTable:(id)arg1 column:(id)arg2;
- (bool)_hasRowsInTable:(id)arg1;
- (bool)_hasAnySongs;
- (bool)_copyBlobData:(id*)arg1 blobAllocType:(int)arg2 table:(id)arg3 blobColumn:(id)arg4 where:(id)arg5;
- (void)performGeniusDatabaseReadWithBlock:(id)arg1;
- (id)musicLibrary;
- (id)init;

@end
