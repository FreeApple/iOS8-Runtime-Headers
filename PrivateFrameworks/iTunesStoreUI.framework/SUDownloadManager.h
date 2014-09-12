/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, SSDownloadManager, SUClientInterface;

@interface SUDownloadManager : NSObject  {
    NSArray *_cachedDownloads;
    SUClientInterface *_clientInterface;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSDownloadManager *_downloadManager;
    NSMutableDictionary *_downloadsByID;
}

@property(readonly) SSDownloadManager * downloadManager;
@property(readonly) NSArray * downloads;


- (id)downloadForDownloadIdentifier:(long long)arg1;
- (bool)deleteDownload:(id)arg1;
- (void)_finishPreflightWithCompletionBlock:(id)arg1;
- (void)_reloadDownloadManager;
- (void)_removeObject:(id)arg1 fromArray:(id*)arg2;
- (void)preflightWithCompletionBlock:(id)arg1;
- (id)initWithDownloadManager:(id)arg1 clientInterface:(id)arg2;
- (void)reloadDownloadManager;
- (id)downloadManager;
- (id)downloads;
- (id)initWithDownloadManager:(id)arg1;
- (void)dealloc;

@end
