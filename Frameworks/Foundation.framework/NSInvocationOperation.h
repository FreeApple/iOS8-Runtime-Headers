/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSInvocation;

@interface NSInvocationOperation : NSOperation  {
    id _inv;
    id _exception;
    void *_reserved2;
}

@property(retain,readonly) NSInvocation * invocation;
@property(retain,readonly) id result;


- (id)result;
- (void)main;
- (id)init;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (id)initWithInvocation:(id)arg1;
- (id)invocation;

@end
