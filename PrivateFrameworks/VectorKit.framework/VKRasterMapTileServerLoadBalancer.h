/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSArray;

@interface VKRasterMapTileServerLoadBalancer : NSObject  {
    NSArray *_tileServers;
    unsigned int _superTileSize;
    NSArray *_snapshotServers;
}


- (void)renderTileRequest:(id)arg1 completion:(id)arg2;
- (void)renderSnapshotRequest:(id)arg1 completion:(id)arg2;
- (id)initWithTileServers:(id)arg1 snapshotServers:(id)arg2;
- (void)dealloc;
- (id)description;

@end
