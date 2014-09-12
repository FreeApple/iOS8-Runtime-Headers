/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSWeakCallback;

@interface NSConcreteHashTable : NSHashTable  {
    struct NSSlice { 
        void **items; 
        boolwantsStrong; 
        boolwantsWeak; 
        boolwantsARC; 
        boolshouldCopyIn; 
        boolusesStrong; 
        boolusesWeak; 
        boolusesARC; 
        boolusesSentinel; 
        boolpointerPersonality; 
        boolintegerPersonality; 
        boolsimpleReadClear; 
        NSWeakCallback *callback; 
        int (*sizeFunction)(); 
        int (*hashFunction)(); 
        int (*isEqualFunction)(); 
        int (*describeFunction)(); 
        int (*acquireFunction)(); 
        int (*relinquishFunction)(); 
        int (*allocateFunction)(); 
        int (*freeFunction)(); 
        int (*readAt)(); 
        int (*clearAt)(); 
        int (*storeAt)(); 
    } slice;
    unsigned long long count;
    unsigned long long capacity;
    unsigned long long options;
    unsigned long long mutations;
}


- (id)init;
- (id)objectEnumerator;
- (id)allObjects;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)addObject:(id)arg1;
- (unsigned long long)count;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (id)copy;
- (void)dealloc;
- (id)description;
- (void)rehash;
- (void)hashGrow;
- (void)assign:(unsigned long long)arg1 key:(const void*)arg2;
- (unsigned long long)rehashAround:(unsigned long long)arg1;
- (void)raiseCountUnderflowException;
- (void)insertItem:(const void*)arg1;
- (id)initWithPointerFunctions:(id)arg1 capacity:(unsigned long long)arg2;
- (void)getKeys:(const void**)arg1 count:(unsigned long long*)arg2;
- (void)insertKnownAbsentItem:(const void*)arg1;
- (void)removeAllItems;
- (void)removeItem:(const void*)arg1;
- (void*)getItem:(const void*)arg1;
- (id)initWithOptions:(unsigned long long)arg1 capacity:(unsigned long long)arg2;
- (void)_initBlock;
- (id)pointerFunctions;
- (Class)classForCoder;

@end
