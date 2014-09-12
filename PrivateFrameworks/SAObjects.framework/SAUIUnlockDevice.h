/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray;

@interface SAUIUnlockDevice : SABaseClientBoundCommand  {
}

@property(copy) NSArray * cancellationCommands;
@property(copy) NSArray * failureCommands;
@property(copy) NSArray * successCommands;

+ (id)unlockDeviceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)unlockDevice;

- (void)setSuccessCommands:(id)arg1;
- (id)successCommands;
- (void)setFailureCommands:(id)arg1;
- (id)failureCommands;
- (void)setCancellationCommands:(id)arg1;
- (id)cancellationCommands;
- (bool)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
