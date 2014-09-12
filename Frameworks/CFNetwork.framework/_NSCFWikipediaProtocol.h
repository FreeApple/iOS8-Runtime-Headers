/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface _NSCFWikipediaProtocol : NSURLProtocol  {
    const void *_instance;
    const struct CFURLProtocolInstanceCallbacks { long long x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); void *x14; } *_callbacks;
}

+ (bool)canInitWithRequest:(id)arg1;
+ (bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;

- (void)unscheduleOnRunloop:(struct __CFRunLoop { }*)arg1 mode:(struct __CFString { }*)arg2;
- (void)scheduleOnRunloop:(struct __CFRunLoop { }*)arg1 mode:(struct __CFString { }*)arg2;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (void)stopLoading;
- (void)startLoading;
- (void)dealloc;

@end
