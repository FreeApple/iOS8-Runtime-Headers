/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class <SFCompanionAdvertiserDelegate>, NSString, NSData;

@interface SFCompanionAdvertiser : NSObject  {
    bool_supportsStreams;
    <SFCompanionAdvertiserDelegate> *_delegate;
    NSString *_serviceType;
}

@property <SFCompanionAdvertiserDelegate> * delegate;
@property bool supportsStreams;
@property(copy,readonly) NSString * serviceType;
@property(readonly) NSData * serviceEndpointData;


- (bool)supportsStreams;
- (id)serviceType;
- (void)stop;
- (void)getContinuationStreamsWithEndpointData:(id)arg1 completionHandler:(id)arg2;
- (id)serviceEndpointData;
- (void)setSupportsStreams:(bool)arg1;
- (id)initWithServiceType:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;
- (id)delegate;
- (void)dealloc;

@end
