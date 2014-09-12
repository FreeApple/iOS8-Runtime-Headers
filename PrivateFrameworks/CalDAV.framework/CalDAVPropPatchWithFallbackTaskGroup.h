/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSURL, NSSet, CoreDAVResponseItem;

@interface CalDAVPropPatchWithFallbackTaskGroup : CoreDAVTaskGroup  {
    NSURL *_url;
    NSSet *_primaryElements;
    NSSet *_fallbackElements;
    CoreDAVResponseItem *_responseItem;
}

@property(retain) CoreDAVResponseItem * responseItem;


- (void)_proppatchAfterFailureCount:(unsigned long long)arg1;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 primaryPropertiesToSet:(id)arg3 fallbackPropertiesToSet:(id)arg4 atURL:(id)arg5;
- (id)responseItem;
- (void)setResponseItem:(id)arg1;
- (void)startTaskGroup;
- (void)dealloc;

@end
