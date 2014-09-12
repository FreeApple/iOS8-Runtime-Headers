/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKDMMCS, NSMutableDictionary, CKDMMCSItemGroup;

@interface CKDMMCSItemGroupContext : NSObject <CKDCancelling> {
    CKDMMCS *_MMCS;
    CKDMMCSItemGroup *_itemGroup;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _progressBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _startBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    NSMutableDictionary *_itemsByID;
}

@property(retain) CKDMMCS * MMCS;
@property(retain) CKDMMCSItemGroup * itemGroup;
@property(copy) id progressBlock;
@property(copy) id startBlock;
@property(copy) id completionBlock;
@property(retain) NSMutableDictionary * itemsByID;


- (void)setItemsByID:(id)arg1;
- (void)setStartBlock:(id)arg1;
- (void)setItemGroup:(id)arg1;
- (void)didPutSectionWithItemID:(unsigned long long)arg1 signature:(id)arg2 receipt:(id)arg3 error:(id)arg4;
- (void)didGetItemID:(unsigned long long)arg1 signature:(id)arg2 path:(id)arg3 error:(id)arg4;
- (void)updateProgressForItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 error:(id)arg4;
- (void)didPutItemID:(unsigned long long)arg1 signature:(id)arg2 receipt:(id)arg3 error:(id)arg4;
- (void)_cleanupItems;
- (id)itemsByID;
- (id)itemGroup;
- (id)startBlock;
- (bool)_setupItemsWithError:(id*)arg1;
- (id)initWithMMCS:(id)arg1 itemGroup:(id)arg2 progress:(id)arg3 start:(id)arg4 completionHandler:(id)arg5;
- (void)didCompleteRequestWithError:(id)arg1;
- (void)setMMCS:(id)arg1;
- (id)MMCS;
- (id)progressBlock;
- (void)setProgressBlock:(id)arg1;
- (void)start;
- (void)cancel;
- (void).cxx_destruct;
- (void)setCompletionBlock:(id)arg1;
- (id)completionBlock;

@end
