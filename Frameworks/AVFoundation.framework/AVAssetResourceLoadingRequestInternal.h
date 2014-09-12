/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AVWeakReference, AVAssetResourceLoadingDataRequest, NSDictionary, NSURLResponse, NSURLRequest, NSObject<OS_dispatch_queue>, NSMutableData, NSMutableURLRequest, AVAssetResourceLoadingContentInformationRequest;

@interface AVAssetResourceLoadingRequestInternal : NSObject  {
    AVWeakReference *weakReference;
    AVWeakReference *weakReferenceToResourceLoader;
    NSDictionary *requestDictionary;
    NSMutableURLRequest *URLRequest;
    NSURLResponse *response;
    NSURLRequest *redirect;
    NSObject<OS_dispatch_queue> *dataCachingQueue;
    NSMutableData *cachedData;
    NSDictionary *cachedContentInformation;
    AVAssetResourceLoadingContentInformationRequest *contentInformationRequest;
    AVAssetResourceLoadingDataRequest *dataRequest;
    int finished;
    int cancelled;
    int sentContentInfo;
    struct OpaqueFigPlaybackItem { } *figPlaybackItem;
    struct OpaqueFigAssetImageGenerator { } *figImageGenerator;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id streamingKeyRequestCompletionHandler;

}



@end
