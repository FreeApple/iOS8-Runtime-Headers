/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKContainer, NSOperationQueue;

@interface CKDatabase : NSObject  {
    int _statusReportToken;
    CKContainer *_container;
    long long _scope;
    NSOperationQueue *_operationQueue;
}

@property CKContainer * container;
@property long long scope;
@property(readonly) NSOperationQueue * operationQueue;
@property int statusReportToken;


- (void)clearAssetCache;
- (void)fetchAllSubscriptionsWithCompletionHandler:(id)arg1;
- (void)fetchSubscriptionWithID:(id)arg1 completionHandler:(id)arg2;
- (void)deleteSubscriptionWithID:(id)arg1 completionHandler:(id)arg2;
- (void)saveSubscription:(id)arg1 completionHandler:(id)arg2;
- (void)deleteRecordZoneWithID:(id)arg1 completionHandler:(id)arg2;
- (void)saveRecordZone:(id)arg1 completionHandler:(id)arg2;
- (void)fetchRecordZoneWithID:(id)arg1 completionHandler:(id)arg2;
- (void)fetchAllRecordZonesWithCompletionHandler:(id)arg1;
- (void)performQuery:(id)arg1 inZoneWithID:(id)arg2 completionHandler:(id)arg3;
- (void)deleteRecordWithID:(id)arg1 completionHandler:(id)arg2;
- (void)saveRecord:(id)arg1 completionHandler:(id)arg2;
- (void)fetchRecordWithID:(id)arg1 completionHandler:(id)arg2;
- (void)_scheduleOperation:(id)arg1;
- (void)clearAuthTokensForRecordWithID:(id)arg1;
- (void)clearRecordCache;
- (void)setStatusReportToken:(int)arg1;
- (int)statusReportToken;
- (id)daemonWithErrorHandler:(id)arg1;
- (void)getPCSDiagnosticsForZonesWithCompletionHandler:(id)arg1;
- (id)statusReport;
- (id)_initWithContainer:(id)arg1 scope:(long long)arg2;
- (id)CKPropertiesDescription;
- (long long)scope;
- (id)init;
- (void)setContainer:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)container;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (id)operationQueue;
- (void)setScope:(long long)arg1;

@end
