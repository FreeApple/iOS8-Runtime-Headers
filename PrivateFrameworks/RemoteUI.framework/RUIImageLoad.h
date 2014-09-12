/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSString, NSURL, NSMutableData, NSURLConnection;

@interface RUIImageLoad : NSObject <NSURLConnectionDelegate> {
    NSURL *_URL;
    NSURLConnection *_connection;
    NSMutableData *_imageData;
    bool_invalidResponse;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)receivedValidResponse:(id)arg1;
- (void)_loadFinished;
- (void)_createImage;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)start;
- (void).cxx_destruct;

@end
