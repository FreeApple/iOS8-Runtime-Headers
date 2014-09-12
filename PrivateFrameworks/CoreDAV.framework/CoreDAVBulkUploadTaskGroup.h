/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString, NSMutableDictionary, NSURL, NSDictionary;

@interface CoreDAVBulkUploadTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
    NSURL *_folderURL;
    NSString *_lastKnownCTag;
    bool_validCTag;
    unsigned long long _multiPutBatchMaxNumResources;
    unsigned long long _multiPutBatchMaxSize;
    NSMutableDictionary *_remainingUUIDsToAddActions;
    NSMutableDictionary *_remainingHREFsToModDeleteActions;
    NSMutableDictionary *_uuidToHREF;
    NSMutableDictionary *_hrefToETag;
    NSMutableDictionary *_uuidToErrorItems;
    NSMutableDictionary *_hrefToErrorItems;
    NSMutableDictionary *_uuidToStatus;
    NSMutableDictionary *_hrefToStatus;
}

@property unsigned long long multiPutBatchMaxNumResources;
@property unsigned long long multiPutBatchMaxSize;
@property(readonly) NSURL * folderURL;
@property(readonly) bool validCTag;
@property(retain) NSString * nextCTag;
@property(readonly) NSDictionary * uuidToHREF;
@property(readonly) NSDictionary * hrefToETag;
@property(readonly) NSDictionary * uuidToStatus;
@property(readonly) NSDictionary * hrefToStatus;
@property(readonly) NSDictionary * uuidToErrorItems;
@property(readonly) NSDictionary * hrefToErrorItems;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)validCTag;
- (void)setMultiPutBatchMaxSize:(unsigned long long)arg1;
- (void)setMultiPutBatchMaxNumResources:(unsigned long long)arg1;
- (id)folderURL;
- (unsigned long long)multiPutBatchMaxSize;
- (unsigned long long)multiPutBatchMaxNumResources;
- (id)initWithFolderURL:(id)arg1 checkCTag:(id)arg2 uuidsToAddActions:(id)arg3 hrefsToModDeleteActions:(id)arg4 context:(id)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7;
- (id)hrefToStatus;
- (id)uuidToStatus;
- (id)hrefToErrorItems;
- (id)uuidToErrorItems;
- (id)hrefToETag;
- (id)uuidToHREF;
- (Class)multiPutTaskClass;
- (void)syncAway;
- (void)setNextCTag:(id)arg1;
- (id)nextCTag;
- (void)_sendNextBatch;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)dealloc;
- (id)description;

@end
