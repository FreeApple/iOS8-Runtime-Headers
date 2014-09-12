/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3MusicLibrary, NSMutableArray, ML3DatabaseConnection;

@interface ML3EntityReplacer : NSObject  {
    struct __CFDictionary { } *_propertyToIndexPair;
    NSMutableArray *_naturalStatements;
    ML3DatabaseConnection *_connection;
    ML3MusicLibrary *_library;
}

@property(getter=isOpen,readonly) bool open;


- (void)clearBindings;
- (void)bindPersistentID:(long long)arg1;
- (void)bindDouble:(double)arg1 forProperty:(id)arg2;
- (void)bindInt:(int)arg1 forProperty:(id)arg2;
- (void)bindNullForProperty:(id)arg1;
- (id)initWithEntityClass:(Class)arg1 properties:(id)arg2 library:(id)arg3;
- (void)bindValue:(id)arg1 forProperty:(id)arg2;
- (bool)isOpen;
- (void)close;
- (void)dealloc;
- (void).cxx_destruct;
- (bool)perform;

@end
