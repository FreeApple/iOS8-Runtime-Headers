/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSURL;

@interface SSItemOfferDeviceError : NSObject  {
    NSString *_localizedMessage;
    NSString *_localizedTitle;
    NSString *_localizedURLTitle;
    NSURL *_url;
}

@property(readonly) NSString * localizedMessage;
@property(readonly) NSString * localizedTitle;
@property(readonly) NSString * localizedURLTitle;
@property(readonly) NSURL * URL;


- (id)_initWithMessage:(id)arg1 title:(id)arg2 URLTitle:(id)arg3 URL:(id)arg4;
- (id)localizedURLTitle;
- (id)localizedMessage;
- (id)URL;
- (void)dealloc;
- (id)localizedTitle;

@end
