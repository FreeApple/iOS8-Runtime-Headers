/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSDictionary, NSManagedObject;

@interface NSMergeConflict : NSObject  {
    id _source;
    id _snapshot1;
    id _snapshot2;
    id _snapshot3;
    unsigned long long _newVersion;
    unsigned long long _oldVersion;
}

@property(retain,readonly) NSManagedObject * sourceObject;
@property(retain,readonly) NSDictionary * objectSnapshot;
@property(retain,readonly) NSDictionary * cachedSnapshot;
@property(retain,readonly) NSDictionary * persistedSnapshot;
@property(readonly) unsigned long long newVersionNumber;
@property(readonly) unsigned long long oldVersionNumber;


- (unsigned long long)oldVersionNumber;
- (unsigned long long)newVersionNumber;
- (id)persistedSnapshot;
- (id)cachedSnapshot;
- (id)objectSnapshot;
- (id)sourceObject;
- (id)ancestorSnapshot;
- (id)initWithSource:(id)arg1 newVersion:(unsigned long long)arg2 oldVersion:(unsigned long long)arg3 snapshot1:(id)arg4 snapshot2:(id)arg5 snapshot3:(id)arg6;
- (id)initWithSource:(id)arg1 newVersion:(unsigned long long)arg2 oldVersion:(unsigned long long)arg3 cachedSnapshot:(id)arg4 persistedSnapshot:(id)arg5;
- (id)valueForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)description;

@end
