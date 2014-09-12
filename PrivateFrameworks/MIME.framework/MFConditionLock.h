/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSString;

@interface MFConditionLock : NSConditionLock <MFLockObject> {
    NSString *_name;
    id _delegate;
}

+ (void)initialize;

- (id)initWithName:(id)arg1 condition:(long long)arg2 andDelegate:(id)arg3;
- (bool)isLockedByMe;
- (id)initWithName:(id)arg1 andDelegate:(id)arg2;
- (void)unlockWithCondition:(long long)arg1;
- (id)init;
- (void)unlock;
- (void)dealloc;
- (id)description;
- (bool)lockWhenCondition:(long long)arg1 beforeDate:(id)arg2;
- (bool)lockBeforeDate:(id)arg1;

@end
