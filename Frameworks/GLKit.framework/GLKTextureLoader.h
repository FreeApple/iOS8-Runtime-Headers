/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/GLKit.framework/GLKit
 */

@class EAGLContext, NSLock;

@interface GLKTextureLoader : NSObject  {
    EAGLContext *_glContext;
    NSLock *_nsLock;
}

@property(retain) EAGLContext * glContext;
@property(retain) NSLock * nsLock;

+ (id)cubeMapWithContentsOfFile:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)cubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)textureWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)textureWithContentsOfData:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)textureWithContentsOfFile:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)commonCubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)cubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)commonCubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonTextureWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonTextureWithContentsOfData:(id)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)commonTextureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3 lock:(id)arg4 glContext:(id)arg5;
+ (id)textureWithContentsOfURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (void)unlockAndRestoreContext:(id)arg1 glContext:(id)arg2;
+ (id)_textureWithTexture:(id)arg1 error:(id*)arg2;
+ (id)lockAndSwitchContext:(id)arg1 glContext:(id)arg2;

- (void)cubeMapWithContentsOfFile:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(id)arg4;
- (void)cubeMapWithContentsOfFiles:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(id)arg4;
- (void)textureWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(id)arg4;
- (void)textureWithContentsOfData:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(id)arg4;
- (void)textureWithContentsOfFile:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(id)arg4;
- (id)initWithSharegroup:(id)arg1;
- (void)cubeMapWithContentsOfURL:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(id)arg4;
- (void)textureWithContentsOfURL:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(id)arg4;
- (id)nsLock;
- (void)setNsLock:(id)arg1;
- (id)glContext;
- (void)setGlContext:(id)arg1;
- (void)dealloc;

@end
