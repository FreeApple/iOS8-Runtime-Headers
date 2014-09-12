/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKRecord;

@interface CKDGetUserRecordURLRequest : CKDURLRequest  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _recordFetchedBlock;

    CKRecord *_userRecord;
}

@property(copy) id recordFetchedBlock;
@property(retain) CKRecord * userRecord;


- (void)setUserRecord:(id)arg1;
- (id)requestOperationClasses;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (id)userRecord;
- (void)setRecordFetchedBlock:(id)arg1;
- (id)recordFetchedBlock;
- (int)operationType;
- (void).cxx_destruct;

@end
