/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/LocalAuthentication.framework/Support/SharedInternals.framework/SharedInternals
 */

@class NSMutableData;

@interface VRSecureData : NSObject  {
    boolreseted;
    NSMutableData *_data;
}

+ (void)resetBytes:(void*)arg1 length:(unsigned long long)arg2;
+ (id)secureDataWithString:(id)arg1;
+ (id)secureDataWithBytes:(const void*)arg1 length:(unsigned long long)arg2;

- (id)init;
- (unsigned long long)length;
- (id)initWithString:(id)arg1;
- (const void*)bytes;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;

@end
