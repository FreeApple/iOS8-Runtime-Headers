/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class <IKAppDataStoring>, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface IKJSStorage : IKJSObject <IKJSStorage> {
    unsigned int _usesExternalDataStore : 1;
    <IKAppDataStoring> *_appStorage;
    NSMutableDictionary *_storageDict;
    NSObject<OS_dispatch_queue> *_storageQueue;
}

@property <IKAppDataStoring> * appStorage;
@property(retain) NSMutableDictionary * storageDict;
@property(retain) NSObject<OS_dispatch_queue> * storageQueue;
@property(readonly) unsigned long long length;


- (void)setAppStorage:(id)arg1;
- (void)setItem:(id)arg1 :(id)arg2;
- (id)key:(unsigned long long)arg1;
- (id)appStorage;
- (void)_verifyExternalDataStoreForKey:(id)arg1;
- (void)setStorageQueue:(id)arg1;
- (void)setStorageDict:(id)arg1;
- (id)storageDict;
- (id)storageQueue;
- (id)initWithAppContext:(id)arg1 appStorage:(id)arg2;
- (void)clear;
- (unsigned long long)length;
- (void).cxx_destruct;
- (void)removeItem:(id)arg1;
- (id)getItem:(id)arg1;

@end
