/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray;

@interface CKRepairZonePCSOperation : CKDatabaseOperation  {
    NSArray *_zoneIDs;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _zoneRepairedBlock;

}

@property(retain) NSArray * zoneIDs;
@property(copy) id zoneRepairedBlock;


- (void)setZoneRepairedBlock:(id)arg1;
- (id)initWithZoneIDsToRepair:(id)arg1;
- (id)zoneRepairedBlock;
- (void)setZoneIDs:(id)arg1;
- (id)zoneIDs;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (void)fillOutOperationInfo:(id)arg1;
- (void).cxx_destruct;

@end
