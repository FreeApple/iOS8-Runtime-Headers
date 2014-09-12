/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class <CPLPushToTransportTaskDelegate>, CPLChangeBatch, NSArray, <CPLEngineTransportUploadBatchTask>, NSObject<OS_dispatch_queue>, NSString;

@interface CPLPushToTransportTask : CPLEngineSyncTask  {
    NSObject<OS_dispatch_queue> *_lock;
    CPLChangeBatch *_uploadBatch;
    NSArray *_uploadResourceTasks;
    NSArray *_staleOrUnavailableResources;
    NSArray *_resourcesForBackgroundUpload;
    <CPLEngineTransportUploadBatchTask> *_uploadTask;
    unsigned long long _lastReportedProgress;
    unsigned long long _countOfPushedBatches;
    NSString *_clientCacheIdentifier;
}

@property(retain) <CPLPushToTransportTaskDelegate> * delegate;


- (void)_popNextBatchAndContinue;
- (void)_pushTaskDidFinishWithError:(id)arg1;
- (bool)_prepareResourcesToUploadInBatch:(id)arg1 error:(id*)arg2;
- (bool)_discardResourcesToUploadFromBatch:(id)arg1 error:(id*)arg2;
- (bool)_markUploadedTasksDidFinishWithError:(id)arg1 error:(id*)arg2;
- (void)_doOneIteration;
- (id)initWithEngineLibrary:(id)arg1;
- (void)resume;
- (void)pause;
- (id)taskIdentifier;
- (void)cancel;
- (void).cxx_destruct;
- (void)launch;

@end
