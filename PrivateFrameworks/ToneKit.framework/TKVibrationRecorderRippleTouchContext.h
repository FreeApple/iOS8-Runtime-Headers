/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKVibrationRecorderRippleTouchContext : NSObject  {
    double _creationTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    } _location;
}

@property(readonly) struct CGPoint { double x1; double x2; } location;
@property(setter=_setCreationTimestamp:) double _creationTimestamp;
@property(setter=_setLocation:) struct CGPoint { double x1; double x2; } _location;


- (void)_setLocation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_location;
- (void)configureWithTimeIntervalSinceCreation:(double)arg1 location:(struct CGPoint { double x1; double x2; })arg2;
- (double)timeIntervalSinceCreation;
- (void)_setCreationTimestamp:(double)arg1;
- (double)_creationTimestamp;
- (struct CGPoint { double x1; double x2; })location;
- (id)init;
- (void)reset;

@end
