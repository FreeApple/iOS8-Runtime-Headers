/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSArray, NSString;

@interface PKPaymentPassesResponse : PKPaymentWebServiceResponse  {
    NSArray *_passURLs;
    NSString *_updatedSinceTag;
    NSString *_lastUpdatedTag;
}

@property(retain) NSArray * passURLs;
@property(readonly) NSString * updatedSinceTag;
@property(retain) NSString * lastUpdatedTag;


- (id)updatedSinceTag;
- (void)setPassURLs:(id)arg1;
- (id)passURLs;
- (id)lastUpdatedTag;
- (void)setLastUpdatedTag:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)dealloc;

@end
