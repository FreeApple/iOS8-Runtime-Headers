/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class <CalDAVAccountPropertyRefreshDelegate>;

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation  {
    bool_fetchPrincipalSearchProperties;
}

@property <CalDAVAccountPropertyRefreshDelegate> * delegate;
@property bool fetchPrincipalSearchProperties;


- (void)refreshProperties;
- (void)setFetchPrincipalSearchProperties:(bool)arg1;
- (bool)fetchPrincipalSearchProperties;
- (void)getAccountPropertiesTask:(id)arg1 completedWithError:(id)arg2;

@end
