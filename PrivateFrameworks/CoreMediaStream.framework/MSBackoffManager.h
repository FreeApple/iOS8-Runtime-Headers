/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class <MSBackoffManagerDelegate>, NSDate;

@interface MSBackoffManager : NSObject <NSCoding> {
    <MSBackoffManagerDelegate> *_delegate;
    double _initialInterval;
    double _backoffFactor;
    double _randomizeFactor;
    double _maxBackoffInterval;
    double _currentInterval;
    NSDate *_nextExpiryDate;
    NSDate *_retryAfterDate;
}

@property <MSBackoffManagerDelegate> * delegate;
@property double initialInterval;
@property double backoffFactor;
@property double randomizeFactor;
@property double maxBackoffInterval;
@property double currentInterval;
@property(retain) NSDate * nextExpiryDate;
@property(retain) NSDate * retryAfterDate;


- (void)setRetryAfterDate:(id)arg1;
- (id)retryAfterDate;
- (void)setNextExpiryDate:(id)arg1;
- (double)currentInterval;
- (void)setMaxBackoffInterval:(double)arg1;
- (double)maxBackoffInterval;
- (void)setRandomizeFactor:(double)arg1;
- (double)randomizeFactor;
- (void)setBackoffFactor:(double)arg1;
- (double)backoffFactor;
- (void)setInitialInterval:(double)arg1;
- (double)initialInterval;
- (id)copyParameters;
- (void)backoff;
- (void)didReceiveRetryAfterDate:(id)arg1;
- (id)nextExpiryDate;
- (void)setCurrentInterval:(double)arg1;
- (id)initWithInitialInterval:(double)arg1 backoffFactor:(double)arg2 randomizeFactor:(double)arg3 maxBackoffInterval:(double)arg4 retryAfterDate:(id)arg5;
- (void)_complainAboutMissingKeyInArchive:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (void)reset;

@end
