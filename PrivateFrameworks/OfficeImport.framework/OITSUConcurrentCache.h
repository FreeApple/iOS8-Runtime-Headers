/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OITSUReadWriteQueue;

@interface OITSUConcurrentCache : OITSUCache  {
    OITSUReadWriteQueue *mReadWriteQueue;
}

@property(readonly) OITSUReadWriteQueue * readWriteQueue;


- (id)readWriteQueue;
- (void)removeObjectForKey:(id)arg1 andWait:(bool)arg2;
- (bool)hasFlushableContent;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (unsigned long long)count;
- (void)dealloc;
- (void)unload;

@end
