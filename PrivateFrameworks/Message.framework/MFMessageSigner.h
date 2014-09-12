/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString, NSArray, MFError;

@interface MFMessageSigner : NSObject  {
    int _status;
    struct __SecTrust { } *_trust;
    NSString *_sender;
    NSString *_uncommentedSender;
}

@property(readonly) NSString * sender;
@property(readonly) NSString * commonName;
@property(readonly) NSString * emailAddress;
@property(readonly) int action;
@property(readonly) NSArray * certificates;
@property(readonly) MFError * error;


- (id)commonName;
- (bool)hasTrustException;
- (void)removeTrustException;
- (void)addTrustException;
- (struct __SecTrust { }*)copyTrust;
- (id)initWithSender:(id)arg1 trust:(struct __SecTrust { }*)arg2 verification:(int)arg3;
- (id)emailAddress;
- (int)action;
- (id)certificates;
- (id)error;
- (id)sender;
- (void)dealloc;

@end
