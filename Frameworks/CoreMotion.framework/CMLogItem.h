/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMLogItem : NSObject <NSSecureCoding, NSCopying> {
    id _internalLogItem;
}

@property(readonly) double timestamp;

+ (bool)supportsSecureCoding;

- (id)initWithTimestamp:(double)arg1;
- (double)timestamp;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
