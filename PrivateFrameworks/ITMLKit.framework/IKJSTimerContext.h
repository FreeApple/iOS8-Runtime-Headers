/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class NSTimer, JSManagedValue, IKJSManagedArray;

@interface IKJSTimerContext : NSObject  {
    bool_isRepeating;
    NSTimer *_timer;
    id _ownerObject;
    JSManagedValue *_managedCallback;
    IKJSManagedArray *_managedArgs;
}

@property(retain) NSTimer * timer;
@property(retain,readonly) id ownerObject;
@property(retain,readonly) JSManagedValue * managedCallback;
@property(retain,readonly) IKJSManagedArray * managedArgs;
@property(readonly) bool isRepeating;


- (bool)isRepeating;
- (id)managedArgs;
- (id)managedCallback;
- (id)initWithCallback:(id)arg1 callbackArgs:(id)arg2 repeating:(bool)arg3 ownerObject:(id)arg4 timer:(id)arg5;
- (void)removeManagedReferences;
- (id)ownerObject;
- (void)setTimer:(id)arg1;
- (id)timer;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;

@end
