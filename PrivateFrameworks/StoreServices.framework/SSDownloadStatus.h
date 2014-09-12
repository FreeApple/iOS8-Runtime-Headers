/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSError, SSDownloadPhase, NSString;

@interface SSDownloadStatus : NSObject <SSXPCCoding, NSCopying> {
    SSDownloadPhase *_activePhase;
    bool_contentRestricted;
    NSError *_error;
    bool_failed;
    bool_paused;
}

@property(retain) NSError * error;
@property(getter=isFailed) bool failed;
@property(getter=isFailedTransient,readonly) bool failedTransient;
@property(getter=isPausable) bool pausable;
@property(getter=isPaused) bool paused;
@property(getter=isContentRestricted) bool contentRestricted;
@property(readonly) SSDownloadPhase * activePhase;
@property(readonly) float percentComplete;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)isContentRestricted;
- (id)activePhase;
- (bool)isFailedTransient;
- (void)setOperationType:(long long)arg1;
- (void)setFailed:(bool)arg1;
- (void)setOperationProgress:(id)arg1;
- (void)setContentRestricted:(bool)arg1;
- (void)setPercentComplete:(float)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setPaused:(bool)arg1;
- (bool)isPaused;
- (bool)isFailed;
- (bool)isPausable;
- (void)setPausable:(bool)arg1;
- (void)setError:(id)arg1;
- (id)error;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)percentComplete;

@end
