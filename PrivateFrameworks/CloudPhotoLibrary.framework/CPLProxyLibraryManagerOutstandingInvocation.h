/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSError, CPLResource;

@interface CPLProxyLibraryManagerOutstandingInvocation : NSObject  {
    bool_didStart;
    bool_didFinish;
    float _progress;
    NSError *_finalError;
    CPLResource *_finalResource;
}

@property bool didStart;
@property float progress;
@property bool didFinish;
@property(retain) NSError * finalError;
@property(retain) CPLResource * finalResource;


- (void)setFinalResource:(id)arg1;
- (void)setFinalError:(id)arg1;
- (void)setDidStart:(bool)arg1;
- (id)finalError;
- (id)finalResource;
- (bool)didStart;
- (void)setDidFinish:(bool)arg1;
- (bool)didFinish;
- (void).cxx_destruct;
- (id)description;
- (void)setProgress:(float)arg1;
- (float)progress;

@end
