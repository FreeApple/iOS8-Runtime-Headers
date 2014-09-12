/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSLock, NSString, ISURLOperationPool, SUClientInterface, SUImageCache, <SUClientDelegate>, SUScriptExecutionContext;

@interface SUClient : NSObject  {
    struct __CFArray { } *_assetTypes;
    SUClientInterface *_clientInterface;
    <SUClientDelegate> *_delegate;
    bool_dontSaveNavigationPath;
    SUImageCache *_imageCache;
    ISURLOperationPool *_imagePool;
    NSLock *_lock;
    SUScriptExecutionContext *_scriptExecutionContext;
}

@property(readonly) SUClientInterface * clientInterface;
@property <SUClientDelegate> * delegate;
@property bool dontSaveNavigationPath;
@property(retain) NSString * searchHintsURLBagKey;
@property(retain) NSString * searchURLBagKey;
@property(retain) SUImageCache * imageCache;
@property(retain) ISURLOperationPool * imagePool;
@property(readonly) SUScriptExecutionContext * scriptExecutionContext;

+ (void)setSharedClient:(id)arg1;
+ (id)imagePool;
+ (id)viewControllerFactory;
+ (id)sharedClient;

- (void)setDontSaveNavigationPath:(bool)arg1;
- (bool)dontSaveNavigationPath;
- (bool)_presentModalViewController:(id)arg1 animated:(bool)arg2;
- (void)setSearchURLBagKey:(id)arg1;
- (void)setSearchHintsURLBagKey:(id)arg1;
- (void)setAssetTypes:(struct __CFArray { }*)arg1;
- (id)searchURLBagKey;
- (id)searchHintsURLBagKey;
- (bool)openURL:(id)arg1 inClientApplication:(id)arg2;
- (bool)openExternalURL:(id)arg1;
- (struct __CFArray { }*)assetTypes;
- (void)_reloadScriptExecutionContext;
- (void)_purgeCaches;
- (void)setViewControllerFactory:(id)arg1;
- (bool)openInternalURL:(id)arg1;
- (id)_newAccountViewControllerForButtonAction:(id)arg1;
- (id)_newComposeReviewViewControllerForButtonAction:(id)arg1;
- (bool)dismissTopViewControllerAnimated:(bool)arg1;
- (void)_memoryWarningNotification:(id)arg1;
- (bool)composeReviewWithViewController:(id)arg1 animated:(bool)arg2;
- (void)setQueueSessionManager:(id)arg1;
- (id)queueSessionManager;
- (bool)sendActionForDialog:(id)arg1 button:(id)arg2;
- (void)setImagePool:(id)arg1;
- (void)setImageCache:(id)arg1;
- (id)imagePool;
- (bool)enterAccountFlowWithViewController:(id)arg1 animated:(bool)arg2;
- (id)viewControllerFactory;
- (id)initWithClientInterface:(id)arg1;
- (id)scriptExecutionContext;
- (void)_bagDidLoadNotification:(id)arg1;
- (id)clientInterface;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (id)clientIdentifier;
- (id)imageCache;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setClientIdentifier:(id)arg1;

@end
