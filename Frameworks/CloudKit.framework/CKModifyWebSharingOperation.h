/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary, NSMutableArray;

@interface CKModifyWebSharingOperation : CKDatabaseOperation  {
    NSArray *_recordIDsToShareReadWrite;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _recordSharedBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _recordUnsharedBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _webShareRecordsCompletionBlock;

    NSArray *_recordIDsToShare;
    NSArray *_recordIDsToUnshare;
    NSMutableDictionary *_recordErrors;
    NSMutableArray *_sharedRecordIDs;
    NSMutableArray *_unsharedRecordIDs;
}

@property(retain) NSArray * recordIDsToShareReadWrite;
@property(copy) id recordSharedBlock;
@property(copy) id recordUnsharedBlock;
@property(copy) id webShareRecordsCompletionBlock;
@property(retain) NSArray * recordIDsToShare;
@property(retain) NSArray * recordIDsToUnshare;
@property(retain) NSMutableDictionary * recordErrors;
@property(retain) NSMutableArray * sharedRecordIDs;
@property(retain) NSMutableArray * unsharedRecordIDs;


- (id)initWithRecordIDsToWebShare:(id)arg1 recordIDsToUnshare:(id)arg2;
- (void)setUnsharedRecordIDs:(id)arg1;
- (void)setSharedRecordIDs:(id)arg1;
- (void)setRecordErrors:(id)arg1;
- (void)setRecordUnsharedBlock:(id)arg1;
- (void)setRecordSharedBlock:(id)arg1;
- (void)setWebShareRecordsCompletionBlock:(id)arg1;
- (id)webShareRecordsCompletionBlock;
- (id)recordUnsharedBlock;
- (id)unsharedRecordIDs;
- (id)recordSharedBlock;
- (id)sharedRecordIDs;
- (id)recordErrors;
- (void)setRecordIDsToShareReadWrite:(id)arg1;
- (id)recordIDsToShareReadWrite;
- (void)setRecordIDsToUnshare:(id)arg1;
- (id)recordIDsToUnshare;
- (void)setRecordIDsToShare:(id)arg1;
- (id)recordIDsToShare;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void).cxx_destruct;

@end
