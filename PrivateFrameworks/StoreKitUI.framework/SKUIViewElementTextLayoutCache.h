/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSMutableDictionary, SKUILayoutCache;

@interface SKUIViewElementTextLayoutCache : NSObject  {
    SKUILayoutCache *_layoutCache;
    NSMutableDictionary *_layoutMapTables;
}

@property(readonly) SKUILayoutCache * layoutCache;


- (struct CGSize { double x1; double x2; })estimatedSizeForButton:(id)arg1 width:(double)arg2;
- (id)_layoutIndexForViewElement:(id)arg1 width:(long long)arg2;
- (void)_addRequest:(id)arg1 forViewElement:(id)arg2;
- (struct CGSize { double x1; double x2; })_bestGuessSizeForOrdinal:(id)arg1 width:(double)arg2;
- (struct CGSize { double x1; double x2; })_bestGuessSizeForLabel:(id)arg1 width:(double)arg2;
- (struct CGSize { double x1; double x2; })_bestGuessSizeForButton:(id)arg1 width:(double)arg2;
- (id)_existingLayoutForViewElement:(id)arg1 width:(long long)arg2;
- (struct CGSize { double x1; double x2; })sizeForLabel:(id)arg1 width:(double)arg2;
- (struct CGSize { double x1; double x2; })estimatedSizeForOrdinal:(id)arg1 width:(double)arg2;
- (struct CGSize { double x1; double x2; })sizeForButton:(id)arg1 width:(double)arg2;
- (void)invalidateLayoutsForUpdatedElements;
- (struct CGSize { double x1; double x2; })estimatedSizeForLabel:(id)arg1 width:(double)arg2;
- (void)requestLayoutForOrdinal:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;
- (id)layoutForWidth:(long long)arg1 viewElement:(id)arg2;
- (id)initWithLayoutCache:(id)arg1;
- (id)layoutCache;
- (void)requestLayoutForViewElement:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;
- (void)requestLayoutForBadge:(id)arg1 width:(long long)arg2;
- (void)requestLayoutForLabel:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;
- (void)requestLayoutForButton:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;
- (struct CGSize { double x1; double x2; })sizeForViewElement:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;

@end
