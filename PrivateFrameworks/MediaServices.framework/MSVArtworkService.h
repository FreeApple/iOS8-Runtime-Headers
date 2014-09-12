/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@class NSOperationQueue, NSXPCConnection;

@interface MSVArtworkService : NSObject  {
    NSOperationQueue *_serviceThrottlingOperationQueue;
    NSXPCConnection *_serverConnection;
}

@property(retain) NSOperationQueue * serviceThrottlingOperationQueue;
@property(retain) NSXPCConnection * serverConnection;

+ (id)sharedService;

- (id)serverConnection;
- (void)resizeImageAtSourceURL:(id)arg1 destinationSize:(struct CGSize { double x1; double x2; })arg2 destinationURL:(id)arg3 completionHandler:(id)arg4;
- (void)setServerConnection:(id)arg1;
- (id)serviceThrottlingOperationQueue;
- (void)setServiceThrottlingOperationQueue:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
