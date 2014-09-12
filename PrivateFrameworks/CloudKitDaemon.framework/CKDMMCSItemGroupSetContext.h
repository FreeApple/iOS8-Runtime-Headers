/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_group>, NSMutableArray, CKDMMCSItemGroupSet;

@interface CKDMMCSItemGroupSetContext : NSObject <CKDCancelling> {
    CKDMMCSItemGroupSet *_itemGroupSet;
    NSMutableArray *_itemGroupContexts;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _itemGroupCompletionBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _itemGroupSetCompletionBlock;

    NSObject<OS_dispatch_group> *_itemGroupSetCompletionGroup;
}

@property(retain) CKDMMCSItemGroupSet * itemGroupSet;
@property(retain) NSMutableArray * itemGroupContexts;
@property(copy) id itemGroupCompletionBlock;
@property(copy) id itemGroupSetCompletionBlock;
@property(retain) NSObject<OS_dispatch_group> * itemGroupSetCompletionGroup;


- (void)setItemGroupSetCompletionGroup:(id)arg1;
- (void)setItemGroupCompletionBlock:(id)arg1;
- (void)setItemGroupContexts:(id)arg1;
- (void)setItemGroupSet:(id)arg1;
- (void)setItemGroupSetCompletionBlock:(id)arg1;
- (id)itemGroupSet;
- (id)itemGroupSetCompletionBlock;
- (id)itemGroupContexts;
- (id)itemGroupSetCompletionGroup;
- (void)_addItemGroupContext:(id)arg1;
- (id)itemGroupCompletionBlock;
- (id)initWithItemGroupSet:(id)arg1 completionHandler:(id)arg2;
- (void)start;
- (void)cancel;
- (void).cxx_destruct;

@end
