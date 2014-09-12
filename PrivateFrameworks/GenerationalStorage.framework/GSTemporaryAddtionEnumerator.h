/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@class GSTemporaryStorage, NSString, NSDirectoryEnumerator, NSArray, NSError;

@interface GSTemporaryAddtionEnumerator : NSEnumerator <GSAdditionEnumerating> {
    GSTemporaryStorage *_storage;
    NSString *_nameSpace;
    unsigned long long _withOptions;
    unsigned long long _withoutOption;
    NSError *_error;
    NSDirectoryEnumerator *_enumerator;
    NSArray *_array;
    unsigned long long _pos;
}

@property(readonly) NSError * error;


- (id)_nextURL;
- (id)initWithStorage:(id)arg1 nameSpace:(id)arg2 withOptions:(unsigned long long)arg3 withoutOptions:(unsigned long long)arg4 ordering:(int)arg5;
- (id)nextObject;
- (id)error;
- (void)dealloc;

@end
