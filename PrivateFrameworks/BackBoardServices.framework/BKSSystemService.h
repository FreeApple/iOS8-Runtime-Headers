/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class FBSSystemService;

@interface BKSSystemService : NSObject  {
    FBSSystemService *_fbsSystemService;
}


- (void)openApplication:(id)arg1 options:(id)arg2 clientPort:(unsigned int)arg3 withResult:(id)arg4;
- (unsigned int)createClientPort;
- (void)cleanupClientPort:(unsigned int)arg1;
- (void)openURL:(id)arg1 application:(id)arg2 options:(id)arg3 clientPort:(unsigned int)arg4 withResult:(id)arg5;
- (void)terminateApplicationGroup:(int)arg1 forReason:(int)arg2 andReport:(bool)arg3 withDescription:(id)arg4;
- (void)terminateApplication:(id)arg1 forReason:(int)arg2 andReport:(bool)arg3 withDescription:(id)arg4;
- (void)openApplication:(id)arg1 options:(id)arg2 withResult:(id)arg3;
- (void)openDataActivationURL:(id)arg1 withResult:(id)arg2;
- (bool)canOpenApplication:(id)arg1 reason:(int*)arg2;
- (int)pidForApplication:(id)arg1;
- (id)systemApplicationBundleIdentifier;
- (id)init;
- (void)dealloc;

@end
