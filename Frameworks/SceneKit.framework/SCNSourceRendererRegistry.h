/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNSourceRendererRegistry : NSObject  {
    struct __CFDictionary { } *_registry;
}

+ (id)sharedRegistry;

- (id)sourceRendererForCGLContextObj:(void*)arg1 source:(id)arg2;
- (void)removeSourceRenderersForSource:(id)arg1;
- (void)removeSourceRenderersForCGLContextObj:(void*)arg1;
- (void)rendererDidChange:(id)arg1;
- (id)init;
- (void)finalize;
- (void)dealloc;

@end
