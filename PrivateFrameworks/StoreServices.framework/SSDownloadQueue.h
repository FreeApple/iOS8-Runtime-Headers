/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSSet, NSArray, NSString, SSDownloadManager;

@interface SSDownloadQueue : NSObject <SSDownloadManagerObserverPrivate> {
    bool_autoFinishDownloads;
    SSDownloadManager *_downloadManager;
    struct __CFSet { } *_observers;
}

@property(readonly) NSSet * downloadKinds;
@property(readonly) SSDownloadManager * downloadManager;
@property(readonly) NSArray * downloads;
@property bool shouldAutomaticallyFinishDownloads;
@property(getter=isUsingNetwork,readonly) bool usingNetwork;
@property(readonly) NSArray * placeholderDownloads;
@property(readonly) NSArray * preorders;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)softwareApplicationDownloadKinds;
+ (id)mediaDownloadKinds;

- (id)downloadManager;
- (void)setShouldAutomaticallyFinishDownloads:(bool)arg1;
- (bool)shouldAutomaticallyFinishDownloads;
- (void)_sendQueuePreOrdersChanged;
- (bool)startPreOrderDownload:(id)arg1;
- (void)removePlaceholderDownload:(id)arg1;
- (id)preorders;
- (id)placeholderDownloads;
- (id)downloadForItemIdentifier:(unsigned long long)arg1;
- (void)addPlaceholderDownloads:(id)arg1;
- (bool)addDownload:(id)arg1;
- (id)initWithDownloadManagerOptions:(id)arg1;
- (void)downloadManagerNetworkUsageDidChange:(id)arg1;
- (void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2;
- (void)_sendQueueChangedWithRemovals:(id)arg1;
- (void)_messageObserversWithFunction:(int (*)())arg1 context:(void*)arg2;
- (void)_sendQueueNetworkUsageChanged;
- (void)_handleDownloadsRemoved:(id)arg1;
- (void)_sendDownloadStatusChangedAtIndex:(long long)arg1;
- (bool)reloadFromServer;
- (bool)isUsingNetwork;
- (id)downloads;
- (id)downloadKinds;
- (bool)canCancelDownload:(id)arg1;
- (id)_initWithDownloadManagerOptions:(id)arg1;
- (id)initWithDownloadKinds:(id)arg1;
- (void)_handleDownloadsDidChange:(id)arg1;
- (bool)cancelDownload:(id)arg1;
- (id)init;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)getDownloadsUsingBlock:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)dealloc;

@end
