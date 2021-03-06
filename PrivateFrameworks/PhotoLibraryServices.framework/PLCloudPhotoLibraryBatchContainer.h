/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class CPLChangeBatch;

@interface PLCloudPhotoLibraryBatchContainer : NSObject  {
    bool_wasSplit;
    bool_reachedMinSplit;
    CPLChangeBatch *_batch;
    unsigned long long _retryCount;
}

@property(retain) CPLChangeBatch * batch;
@property unsigned long long retryCount;
@property bool wasSplit;
@property bool reachedMinSplit;


- (void)setBatch:(id)arg1;
- (id)lastAddedRecord;
- (void)setWasSplit:(bool)arg1;
- (void)setReachedMinSplit:(bool)arg1;
- (void)incrementRetryCount;
- (bool)reachedMinSplit;
- (id)batchesSplitForError;
- (bool)wasSplit;
- (id)batch;
- (id)init;
- (unsigned long long)count;
- (unsigned long long)retryCount;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)dealloc;
- (void)addRecord:(id)arg1;

@end
