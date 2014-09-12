/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@class NSString;

@interface MCPeerIDInternal : NSObject  {
    NSString *_idString;
    unsigned long long _pid64;
    NSString *_displayName;
}

@property(readonly) NSString * idString;
@property(readonly) unsigned long long pid64;
@property(readonly) NSString * displayName;


- (unsigned long long)pid64;
- (id)initWithIDString:(id)arg1 pid64:(unsigned long long)arg2 displayName:(id)arg3;
- (id)idString;
- (void)dealloc;
- (id)displayName;

@end
