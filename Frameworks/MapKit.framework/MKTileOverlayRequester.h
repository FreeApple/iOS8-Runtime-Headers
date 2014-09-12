/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSMutableArray, NSMutableSet;

@interface MKTileOverlayRequester : GEOTileRequester  {
    bool_cancelled;
    NSMutableArray *_waiting;
    NSMutableSet *_running;
    NSMutableArray *_errors;
}

+ (void)unregisterOverlay:(unsigned int)arg1;
+ (unsigned int)registerOverlay:(id)arg1;
+ (unsigned char)tileProviderIdentifier;

- (void)_operationFinished:(id)arg1;
- (void)_operationFailed:(id)arg1 error:(id)arg2;
- (void)_doWorkOrFinish;
- (bool)isRunning;
- (void)start;
- (void)_cleanup;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;

@end
