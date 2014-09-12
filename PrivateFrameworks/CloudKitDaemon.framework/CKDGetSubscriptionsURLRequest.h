/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKDGetSubscriptionsURLRequest : CKDURLRequest  {
    NSMutableArray *_subscriptions;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _subscriptionFetchedBlock;

    NSArray *_subscriptionIDs;
    NSMutableDictionary *_subscriptionIDByRequestID;
}

@property(retain) NSArray * subscriptions;
@property(copy) id subscriptionFetchedBlock;
@property(retain) NSArray * subscriptionIDs;
@property(retain) NSMutableDictionary * subscriptionIDByRequestID;


- (void)setSubscriptionFetchedBlock:(id)arg1;
- (id)subscriptionFetchedBlock;
- (void)setSubscriptionIDByRequestID:(id)arg1;
- (id)subscriptionIDByRequestID;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (id)subscriptions;
- (void)setSubscriptions:(id)arg1;
- (void)setSubscriptionIDs:(id)arg1;
- (id)subscriptionIDs;
- (id)initWithSubscriptionIDs:(id)arg1;
- (int)operationType;
- (void).cxx_destruct;

@end
