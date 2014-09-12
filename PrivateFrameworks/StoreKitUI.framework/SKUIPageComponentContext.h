/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSDictionary, NSMutableSet, NSSet;

@interface SKUIPageComponentContext : NSObject <NSCopying> {
    NSDictionary *_componentDictionary;
    NSArray *_ineligibleGratisIdentifiers;
    NSDictionary *_items;
    long long _layoutStyle;
    double _pageGenerationTime;
    NSDictionary *_platformKeyProfileOverrides;
    NSMutableSet *_unavailableItems;
}

@property(copy) NSDictionary * componentDictionary;
@property(copy) NSDictionary * items;
@property long long layoutStyle;
@property(readonly) double pageGenerationTime;
@property(copy) NSDictionary * platformKeyProfileOverrides;
@property(copy) NSArray * ineligibleGratisIdentifiers;
@property(copy,readonly) NSSet * allUnavailableItemIdentifiers;


- (void)setPlatformKeyProfileOverrides:(id)arg1;
- (id)platformKeyProfileOverrides;
- (void)setLayoutStyle:(long long)arg1;
- (long long)layoutStyle;
- (void)setIneligibleGratisIdentifiers:(id)arg1;
- (id)ineligibleGratisIdentifiers;
- (void)setComponentDictionary:(id)arg1;
- (id)allUnavailableItemIdentifiers;
- (void)setUnavailableItemIdentifiers:(id)arg1;
- (id)itemForItemIdentifier:(id)arg1;
- (bool)isUnavailableItemIdentifier:(id)arg1;
- (void)addUnavailableItemIdentifiers:(id)arg1;
- (double)pageGenerationTime;
- (id)componentDictionary;
- (id)items;
- (void)setItems:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
