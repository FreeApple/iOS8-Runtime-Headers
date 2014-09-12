/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface NSClassicHashTable : NSHashTable  {
    struct { 
        int (*hash)(); 
        int (*isEqual)(); 
        int (*retain)(); 
        int (*release)(); 
        int (*describe)(); 
    } _callBacks;
    struct __CFBasicHash { } *_ht;
}


- (id)init;
- (id)allObjects;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)addObject:(id)arg1;
- (unsigned long long)count;
- (id)copy;
- (void)dealloc;
- (id)description;
- (void)insertItem:(const void*)arg1;
- (void)getKeys:(const void**)arg1 count:(unsigned long long*)arg2;
- (void)insertKnownAbsentItem:(const void*)arg1;
- (void)removeAllItems;
- (void)removeItem:(const void*)arg1;
- (void*)getItem:(const void*)arg1;

@end
