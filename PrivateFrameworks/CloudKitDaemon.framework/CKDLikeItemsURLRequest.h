/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary, CKShareID;

@interface CKDLikeItemsURLRequest : CKDURLRequest  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _itemLikedProgressBlock;

    NSArray *_itemIDsToLike;
    NSArray *_itemIDsToUnlike;
    CKShareID *_shareID;
    NSMutableDictionary *_itemIDsByRequestID;
}

@property(copy) id itemLikedProgressBlock;
@property(retain) NSArray * itemIDsToLike;
@property(retain) NSArray * itemIDsToUnlike;
@property(retain) CKShareID * shareID;
@property(retain) NSMutableDictionary * itemIDsByRequestID;


- (void)setItemIDsByRequestID:(id)arg1;
- (id)itemIDsByRequestID;
- (id)initWithItemIDsToLike:(id)arg1 itemIDsToUnlike:(id)arg2 inShare:(id)arg3;
- (id)itemLikedProgressBlock;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (void)setItemLikedProgressBlock:(id)arg1;
- (id)itemIDsToUnlike;
- (id)itemIDsToLike;
- (void)setItemIDsToUnlike:(id)arg1;
- (void)setItemIDsToLike:(id)arg1;
- (void)setShareID:(id)arg1;
- (id)shareID;
- (int)operationType;
- (void).cxx_destruct;

@end
