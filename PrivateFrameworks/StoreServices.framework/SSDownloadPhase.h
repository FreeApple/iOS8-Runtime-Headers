/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, SSOperationProgress;

@interface SSDownloadPhase : NSObject <SSXPCCoding, NSCopying> {
    SSOperationProgress *_operationProgress;
}

@property(readonly) long long phaseType;
@property(readonly) long long progressValue;
@property(readonly) long long totalProgressValue;
@property(readonly) long long progressUnits;
@property(readonly) double estimatedSecondsRemaining;
@property(readonly) float progressChangeRate;
@property(readonly) SSOperationProgress * operationProgress;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (double)estimatedSecondsRemaining;
- (long long)totalProgressValue;
- (long long)progressValue;
- (float)progressChangeRate;
- (long long)progressUnits;
- (long long)phaseType;
- (id)initWithOperationProgress:(id)arg1;
- (id)operationProgress;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
