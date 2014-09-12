/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSArray, NSMutableArray, CRRecentContactsLibrary;

@interface PKPaymentOptionsModel : NSObject  {
    NSMutableArray *_optionGroups;
    NSMutableDictionary *_optionGroupMap;
    void *_abRef;
    CRRecentContactsLibrary *_coreRecentsLibrary;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _modelChangedHandler;

}

@property(readonly) NSArray * optionGroups;
@property(copy) id modelChangedHandler;

+ (id)_coreRecentsKindForPropertyID:(int)arg1;
+ (int)_propertyIDForGroupType:(id)arg1;
+ (id)_detailForReferenceObject:(id)arg1 withGroupType:(id)arg2;
+ (id)_titleForReferenceObject:(id)arg1 withGroupType:(id)arg2;

- (void)setModelChangedHandler:(id)arg1;
- (id)modelChangedHandler;
- (id)optionGroups;
- (void)addPeoplePickedLabeledValue:(id)arg1 contact:(id)arg2 propertyID:(int)arg3 toOptionsGroup:(id)arg4;
- (id)_displayableNameFor:(id)arg1 withLabel:(id)arg2;
- (void)setShippingMethods:(id)arg1 currencyCode:(id)arg2 selectedIndex:(long long)arg3 selectedValueChangedHandler:(id)arg4;
- (void)setPaymentPasses:(id)arg1 selectedIndex:(long long)arg2 selectedValueChangedHandler:(id)arg3;
- (void)setOptionGroupType:(id)arg1 options:(id)arg2 selectedIndex:(long long)arg3 newItemHandler:(id)arg4 pickedItemHandler:(id)arg5 selectedValueChangedHandler:(id)arg6;
- (void)_addMeCardEntriesForPropertyID:(int)arg1 toCoreRecentAndOptionsGroup:(id)arg2 afterItem:(id)arg3;
- (void)_mergeInCoreRecentsResults:(id)arg1 withPropertyID:(int)arg2 forOptionGroup:(id)arg3 afterItem:(id)arg4;
- (void)_saveItemToCoreRecents:(id)arg1 metadata:(id)arg2 label:(id)arg3 kind:(id)arg4;
- (id)_coreRecentsLibrary;
- (void)_fetchItemsFromCoreRecentsWithPropertyID:(int)arg1 forOptionGroup:(id)arg2 afterItem:(id)arg3;
- (id)init;
- (void)dealloc;

@end
