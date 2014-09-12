/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@class NSString;

@interface CTEmailAddress : NSObject <NSCopying, CTMessageAddress> {
    NSString *_address;
}

@property(readonly) NSString * address;

+ (id)emailAddress:(id)arg1;

- (id)canonicalFormat;
- (id)encodedString;
- (id)initWithAddress:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)address;

@end
