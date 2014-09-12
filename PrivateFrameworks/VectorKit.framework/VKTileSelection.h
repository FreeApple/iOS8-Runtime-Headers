/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTileSelection : NSObject  {
    long long _tileSize;
    bool_bootstrap;
    unsigned long long _maxZ;
    double _lodBias;
}

@property long long tileSize;
@property bool bootstrap;
@property unsigned long long maxZ;
@property double lodBias;


- (void)setBootstrap:(bool)arg1;
- (bool)bootstrap;
- (struct { unsigned int x1; int x2; int x3; int x4; int x5; })relevantTilesForContext:(id)arg1;
- (id)keysForContext:(id)arg1 neighbors:(id)arg2;
- (void)setMaxZ:(unsigned long long)arg1;
- (unsigned long long)maxZ;
- (double)lodBias;
- (void)setLodBias:(double)arg1;
- (void)setTileSize:(long long)arg1;
- (long long)tileSize;
- (id)init;

@end
