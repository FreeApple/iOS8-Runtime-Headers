/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class CPLLibraryManager, NSString, NSProgress, CPLPlatformObject;

@interface CPLChangeSession : NSObject <CPLAbstractObject> {
    CPLPlatformObject *_platformObject;
    NSProgress *_sessionProgress;
    NSString *_sessionIdentifier;
    CPLLibraryManager *_libraryManager;
    unsigned long long _state;
}

@property(readonly) NSProgress * sessionProgress;
@property(readonly) NSString * sessionIdentifier;
@property(readonly) CPLLibraryManager * libraryManager;
@property unsigned long long state;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) CPLPlatformObject * platformObject;

+ (id)stateDescriptionForState:(unsigned long long)arg1;
+ (id)platformImplementationProtocol;

- (id)sessionProgress;
- (void)finalizeWithCompletionHandler:(id)arg1;
- (void)beginSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(id)arg2;
- (id)initWithLibraryManager:(id)arg1;
- (void)tearDownWithCompletionHandler:(id)arg1;
- (id)libraryManager;
- (id)_sessionLogDomain;
- (id)platformObject;
- (void)resume;
- (void)pause;
- (id)init;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (void)dealloc;
- (void).cxx_destruct;
- (id)sessionIdentifier;

@end
