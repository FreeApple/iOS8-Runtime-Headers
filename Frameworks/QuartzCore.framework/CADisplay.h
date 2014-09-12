/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSString, CADisplayMode;

@interface CADisplay : NSObject  {
    void *_impl;
}

@property(readonly) NSArray * availableModes;
@property(retain) CADisplayMode * currentMode;
@property(readonly) CADisplayMode * preferredMode;
@property(copy) NSString * colorMode;
@property bool allowsVirtualModes;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } safeBounds;
@property(readonly) NSString * name;
@property(readonly) NSString * deviceName;
@property(readonly) unsigned int displayId;
@property(readonly) unsigned int seed;
@property(readonly) unsigned int connectionSeed;
@property(readonly) NSString * uniqueId;
@property(getter=isSupported,readonly) bool supported;
@property(readonly) long long tag;
@property(getter=isExternal,readonly) bool external;
@property(readonly) double refreshRate;
@property(getter=isOverscanned,readonly) bool overscanned;
@property(copy) NSString * overscanAdjustment;
@property(readonly) double overscanAmount;
@property(getter=isCloned,readonly) bool cloned;
@property(getter=isCloningSupported,readonly) bool cloningSupported;

+ (id)TVOutDisplay;
+ (id)mainDisplay;
+ (id)displays;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (double)overscanAmount;
- (bool)isOverscanned;
- (id)currentMode;
- (id)uniqueId;
- (long long)tag;
- (bool)isCloned;
- (bool)isSupported;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })safeBounds;
- (void)setAllowsVirtualModes:(bool)arg1;
- (bool)allowsVirtualModes;
- (void)setColorMode:(id)arg1;
- (id)colorMode;
- (unsigned int)connectionSeed;
- (void)update;
- (id)_initWithDisplay:(struct Display { int (**x1)(); id x2; struct __CFString {} *x3; struct __CFString {} *x4; unsigned int x5; unsigned int x6; unsigned int x7; struct __CFString {} *x8; struct ModeSet { unsigned int x_9_1_1; unsigned int x_9_1_2[1]; } x9; int x10; int x11; int x12; struct Bounds { int x_13_1_1; int x_13_1_2; int x_13_1_3; int x_13_1_4; } x13; struct Bounds { int x_14_1_1; int x_14_1_2; int x_14_1_3; int x_14_1_4; } x14; unsigned int x15; unsigned int x16; float x17; int x18; boolx19; boolx20; boolx21; boolx22; boolx23; unsigned int x24; double x25; boolx26; boolx27; }*)arg1;
- (id)deviceName;
- (unsigned int)seed;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (bool)isExternal;
- (unsigned int)displayId;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)name;
- (void)_invalidate;
- (id)description;
- (void)setCurrentMode:(id)arg1;
- (id)preferredMode;
- (bool)isCloningSupported;
- (double)refreshRate;
- (void)setOverscanAdjustment:(id)arg1;
- (id)overscanAdjustment;
- (id)availableModes;

@end
