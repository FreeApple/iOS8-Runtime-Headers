/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface WKBrowsingContextGroup : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebPageGroup> { 
        struct type { 
            unsigned char __lx[104]; 
        } data; 
    } _pageGroup;
}

@property(readonly) struct OpaqueWKPageGroup { }* _pageGroupRef;
@property bool allowsJavaScript;
@property bool allowsPlugIns;
@property bool privateBrowsingEnabled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) struct Object { int (**x1)(); id x2; }* _apiObject;


- (void)addUserScript:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 injectionTime:(int)arg5 mainFrameOnly:(bool)arg6;
- (void)removeAllUserStyleSheets;
- (void)addUserStyleSheet:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 mainFrameOnly:(bool)arg5;
- (void)setAllowsPlugIns:(bool)arg1;
- (bool)allowsPlugIns;
- (void)setAllowsJavaScriptMarkup:(bool)arg1;
- (bool)allowsJavaScriptMarkup;
- (void)setAllowsJavaScript:(bool)arg1;
- (bool)allowsJavaScript;
- (void)removeAllUserScripts;
- (struct OpaqueWKPageGroup { }*)_pageGroupRef;
- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)setPrivateBrowsingEnabled:(bool)arg1;
- (bool)privateBrowsingEnabled;
- (id)initWithIdentifier:(id)arg1;
- (void)dealloc;
- (id).cxx_construct;

@end
