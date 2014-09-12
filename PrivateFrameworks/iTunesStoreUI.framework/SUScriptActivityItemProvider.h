/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class SUActivityItemProvider, NSString, SUScriptFunction, WebScriptObject;

@interface SUScriptActivityItemProvider : SUScriptObject <SUActivityItemProviderDelegate> {
    id _item;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _itemBlock;

    SUScriptFunction *_itemFunction;
    int _loadState;
    NSString *_mimeType;
    SUActivityItemProvider *_nativeProvider;
    int _previewLoadState;
}

@property(readonly) SUActivityItemProvider * nativeActivityItemProvider;
@property(readonly) NSString * activityType;
@property(retain) WebScriptObject * itemFunction;
@property(readonly) NSString * MIMEType;
@property double progress;
@property(copy) NSString * status;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (void)setItemFunction:(id)arg1;
- (id)itemFunction;
- (id)initWithMIMEType:(id)arg1;
- (void)activityItemProvider:(id)arg1 provideItemUsingBlock:(id)arg2;
- (void)setPreviewImageWithURLString:(id)arg1;
- (id)activitySupportsMIMEType:(id)arg1;
- (void)_finishPreviewWithImage:(id)arg1;
- (void)_finishItemWithItem:(id)arg1;
- (id)_newPlaceholderWithMIMEType:(id)arg1;
- (id)nativeActivityItemProvider;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)setStatus:(id)arg1;
- (id)status;
- (id)attributeKeys;
- (id)activityType;
- (id)MIMEType;
- (void)dealloc;
- (void)setProgress:(double)arg1;
- (double)progress;
- (void)setItem:(id)arg1;

@end
