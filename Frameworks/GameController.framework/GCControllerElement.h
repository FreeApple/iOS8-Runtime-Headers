/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/GameController.framework/GameController
 */

@class GCControllerElement;

@interface GCControllerElement : NSObject  {
}

@property(readonly) GCControllerElement * collection;
@property(getter=isAnalog,readonly) bool analog;


- (bool)setHIDValue:(struct __IOHIDValue { }*)arg1;
- (bool)isAnalog;
- (bool)_setValue:(float)arg1;
- (id)collection;
- (float)value;

@end
