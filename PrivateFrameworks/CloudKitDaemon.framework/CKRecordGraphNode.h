/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMutableSet, CKRecord;

@interface CKRecordGraphNode : NSObject  {
    NSMutableSet *_edges;
    long long _indegree;
    CKRecord *_record;
}

@property(copy) NSMutableSet * edges;
@property long long indegree;
@property(retain) CKRecord * record;


- (void)setIndegree:(long long)arg1;
- (long long)indegree;
- (void)setRecord:(id)arg1;
- (id)CKPropertiesDescription;
- (id)record;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)edges;
- (void)setEdges:(id)arg1;

@end
