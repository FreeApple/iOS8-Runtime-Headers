/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SASyncAnchor : AceObject <SAAceSerializable> {
}

@property long long count;
@property(copy) NSString * generation;
@property(copy) NSString * key;
@property(copy) NSString * validity;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)anchorWithDictionary:(id)arg1 context:(id)arg2;
+ (id)anchor;

- (void)setValidity:(id)arg1;
- (id)encodedClassName;
- (void)setGeneration:(id)arg1;
- (id)generation;
- (id)validity;
- (long long)count;
- (id)key;
- (id)groupIdentifier;
- (void)setKey:(id)arg1;
- (void)setCount:(long long)arg1;

@end
