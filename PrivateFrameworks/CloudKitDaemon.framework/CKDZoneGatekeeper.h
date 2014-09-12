/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMutableDictionary, NSMutableArray;

@interface CKDZoneGatekeeper : NSObject  {
    NSMutableDictionary *_zoneIDsToGateHolders;
    NSMutableArray *_waiterWrappers;
}

@property(retain) NSMutableDictionary * zoneIDsToGateHolders;
@property(retain) NSMutableArray * waiterWrappers;


- (void)setWaiterWrappers:(id)arg1;
- (void)setZoneIDsToGateHolders:(id)arg1;
- (void)relinquishLocksForWaiter:(id)arg1;
- (void)registerWaiter:(id)arg1 forZoneIDs:(id)arg2 completionHandler:(id)arg3;
- (id)waiterWrappers;
- (id)zoneIDsToGateHolders;
- (bool)hasStatusToReport;
- (id)statusReport;
- (id)init;
- (void).cxx_destruct;

@end
