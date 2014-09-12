/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class PKCatalogGroup, NSMutableDictionary, <PKGroupDelegate>, NSNumber;

@interface PKGroup : NSObject  {
    PKCatalogGroup *_catalogGroup;
    NSMutableDictionary *_passesByUniqueID;
    bool_local;
    <PKGroupDelegate> *_delegate;
    unsigned long long _frontmostPassIndex;
}

@property <PKGroupDelegate> * delegate;
@property unsigned long long frontmostPassIndex;
@property(readonly) NSNumber * groupID;
@property(getter=isLocal) bool local;


- (void)setLocal:(bool)arg1;
- (unsigned long long)frontmostPassIndex;
- (void)enumerateUniqueIDsWithHandler:(id)arg1;
- (bool)containsOnlyUniqueID:(id)arg1;
- (bool)containsPasses;
- (void)handleUserPassDelete:(id)arg1;
- (id)copyCatalogGroup;
- (void)updateWithCatalogGroup:(id)arg1 passes:(id)arg2 notify:(bool)arg3;
- (id)initWithCatalogGroup:(id)arg1 passes:(id)arg2;
- (id)passAtIndex:(unsigned long long)arg1;
- (unsigned long long)_indexOfUniqueID:(id)arg1;
- (void)_removeUniqueID:(id)arg1 notify:(bool)arg2;
- (void)_insertPass:(id)arg1 atIndex:(unsigned long long)arg2 notify:(bool)arg3;
- (void)_moveUniqueID:(id)arg1 toIndex:(unsigned long long)arg2 notify:(bool)arg3;
- (void)_updatePass:(id)arg1 notify:(bool)arg2;
- (id)passWithUniqueID:(id)arg1;
- (void)setFrontmostPassIndex:(unsigned long long)arg1;
- (unsigned long long)indexForPassUniqueID:(id)arg1;
- (unsigned long long)passCount;
- (id)groupID;
- (bool)isLocal;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)description;

@end
