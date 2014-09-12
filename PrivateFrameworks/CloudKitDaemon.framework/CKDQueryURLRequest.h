/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSArray, NSData, CKRecordZoneID, CKQuery, NSMutableArray;

@interface CKDQueryURLRequest : CKDURLRequest  {
    NSMutableArray *_queryResponses;
    CKQuery *_query;
    NSData *_cursor;
    unsigned long long _limit;
    CKRecordZoneID *_zoneID;
    NSArray *_requestedFields;
    NSData *_resultsCursor;
}

@property(retain) CKQuery * query;
@property(retain) NSData * cursor;
@property unsigned long long limit;
@property(retain) CKRecordZoneID * zoneID;
@property(retain) NSArray * requestedFields;
@property(retain) NSArray * queryResponses;
@property(retain) NSData * resultsCursor;


- (void)setQueryResponses:(id)arg1;
- (unsigned long long)limit;
- (void)setLimit:(unsigned long long)arg1;
- (id)zoneIDsToLock;
- (bool)allowsAnonymousAccount;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (id)initWithQuery:(id)arg1 cursor:(id)arg2 limit:(unsigned long long)arg3 requestedFields:(id)arg4 zoneID:(id)arg5;
- (id)queryResponses;
- (id)requestedFields;
- (void)setRequestedFields:(id)arg1;
- (void)setZoneID:(id)arg1;
- (id)resultsCursor;
- (void)setResultsCursor:(id)arg1;
- (id)zoneID;
- (id)cursor;
- (int)operationType;
- (id)query;
- (void).cxx_destruct;
- (void)setCursor:(id)arg1;
- (void)setQuery:(id)arg1;

@end
