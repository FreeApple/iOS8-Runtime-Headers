/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSNumber;

@interface SAAbstractItemList : SADomainObject  {
}

@property(copy) NSArray * domainObjects;
@property(copy) NSNumber * selectedIndex;

+ (id)abstractItemListWithDictionary:(id)arg1 context:(id)arg2;
+ (id)abstractItemList;

- (void)setDomainObjects:(id)arg1;
- (id)domainObjects;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setSelectedIndex:(id)arg1;
- (id)selectedIndex;

@end
