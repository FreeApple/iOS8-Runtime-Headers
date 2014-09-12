/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary, NSDictionary;

@interface CKFetchRecordsOperation : CKDatabaseOperation  {
    bool_shouldFetchAssetContent;
    bool_isFetchCurrentUserOperation;
    NSArray *_recordIDs;
    NSArray *_desiredKeys;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _perRecordProgressBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _perRecordCompletionBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _fetchRecordsCompletionBlock;

    NSMutableDictionary *_signaturesOfAssetsByRecordIDAndKey;
    NSMutableDictionary *_recordIDsToRecords;
    NSMutableDictionary *_recordErrors;
    NSDictionary *_desiredPackageFileIndices;
    NSDictionary *_recordIDsToVersionETags;
    NSDictionary *_webSharingIdentityDataByRecordID;
}

@property(copy) NSArray * recordIDs;
@property(copy) NSArray * desiredKeys;
@property(copy) id perRecordProgressBlock;
@property(copy) id perRecordCompletionBlock;
@property(copy) id fetchRecordsCompletionBlock;
@property bool shouldFetchAssetContent;
@property(retain) NSMutableDictionary * signaturesOfAssetsByRecordIDAndKey;
@property(retain) NSMutableDictionary * recordIDsToRecords;
@property(retain) NSMutableDictionary * recordErrors;
@property(copy) NSDictionary * desiredPackageFileIndices;
@property bool isFetchCurrentUserOperation;
@property(retain) NSDictionary * recordIDsToVersionETags;
@property(retain) NSDictionary * webSharingIdentityDataByRecordID;

+ (id)fetchCurrentUserRecordOperation;

- (void)setRecordIDsToRecords:(id)arg1;
- (id)recordIDsToRecords;
- (id)fetchRecordsCompletionBlock;
- (void)setWebSharingIdentityDataByRecordID:(id)arg1;
- (id)webSharingIdentityDataByRecordID;
- (void)setSignaturesOfAssetsByRecordIDAndKey:(id)arg1;
- (id)signaturesOfAssetsByRecordIDAndKey;
- (void)setDesiredPackageFileIndices:(id)arg1;
- (id)desiredPackageFileIndices;
- (void)setRecordIDsToVersionETags:(id)arg1;
- (id)recordIDsToVersionETags;
- (bool)isFetchCurrentUserOperation;
- (void)setIsFetchCurrentUserOperation:(bool)arg1;
- (void)setPerRecordCompletionBlock:(id)arg1;
- (void)setPerRecordProgressBlock:(id)arg1;
- (id)perRecordCompletionBlock;
- (id)perRecordProgressBlock;
- (id)initWithRecordIDs:(id)arg1;
- (void)setRecordIDs:(id)arg1;
- (id)recordIDs;
- (void)setShouldFetchAssetContent:(bool)arg1;
- (bool)shouldFetchAssetContent;
- (id)desiredKeys;
- (void)setRecordErrors:(id)arg1;
- (id)recordErrors;
- (void)setFetchRecordsCompletionBlock:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end
