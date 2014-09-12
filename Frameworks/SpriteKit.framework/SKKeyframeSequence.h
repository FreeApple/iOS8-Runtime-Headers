/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class NSMutableArray;

@interface SKKeyframeSequence : NSObject <NSCoding, NSCopying> {
    unsigned long long _count;
    NSMutableArray *_values;
    NSMutableArray *_times;
    long long _interpolationMode;
    long long _repeatMode;
    struct SKCKeyframeSequence { int x1; int x2; long long x3; long long x4; float *x5; float *x6; } *_cKeyframeSequence;
}

@property long long interpolationMode;
@property long long repeatMode;


- (id)sampleAtTime:(double)arg1;
- (void)setKeyframeValue:(id)arg1 time:(double)arg2 forIndex:(unsigned long long)arg3;
- (void)removeKeyframeAtIndex:(unsigned long long)arg1;
- (void)removeAllKeyframes;
- (void)removeLastKeyframe;
- (void)addKeyframeValue:(id)arg1 time:(double)arg2;
- (Class)_valueClass;
- (struct SKCKeyframeSequence { int x1; int x2; long long x3; long long x4; float *x5; float *x6; }*)_createSKCKeyframeSequence;
- (void)setKeyframeTime:(double)arg1 forIndex:(unsigned long long)arg2;
- (void)setKeyframeValue:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)_dirtySKCKeyframeSequence;
- (void)setInterpolationMode:(long long)arg1;
- (id)initWithKeyframeValues:(id)arg1 times:(id)arg2;
- (id)getKeyframeValueForIndex:(unsigned long long)arg1;
- (double)getKeyframeTimeForIndex:(unsigned long long)arg1;
- (long long)interpolationMode;
- (long long)repeatMode;
- (void)setRepeatMode:(long long)arg1;
- (id)initWithCount:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
