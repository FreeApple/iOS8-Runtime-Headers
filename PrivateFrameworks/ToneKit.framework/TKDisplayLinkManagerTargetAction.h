/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@class NSString;

@interface TKDisplayLinkManagerTargetAction : NSObject  {
    id _target;
    SEL _actionSelector;
    NSString *_actionSelectorName;
    unsigned long long _frameInterval;
    unsigned long long _displayDidRefreshCount;
}

@property(setter=_setTarget:,retain) id _target;
@property(setter=_setActionSelector:) SEL _actionSelector;
@property(setter=_setActionSelectorName:,copy) NSString * _actionSelectorName;
@property(setter=_setFrameInterval:) unsigned long long _frameInterval;
@property(setter=_setDisplayDidRefreshCount:) unsigned long long _displayDidRefreshCount;


- (void)_setDisplayDidRefreshCount:(unsigned long long)arg1;
- (unsigned long long)_frameInterval;
- (unsigned long long)_displayDidRefreshCount;
- (id)_actionSelectorName;
- (SEL)_actionSelector;
- (void)_setActionSelectorName:(id)arg1;
- (void)_setActionSelector:(SEL)arg1;
- (void)displayDidRefresh:(id)arg1;
- (id)initWithTarget:(id)arg1 actionSelector:(SEL)arg2;
- (id)initWithTarget:(id)arg1 actionSelector:(SEL)arg2 frameInterval:(unsigned long long)arg3;
- (void)_setFrameInterval:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (void)_setTarget:(id)arg1;
- (id)_target;

@end
