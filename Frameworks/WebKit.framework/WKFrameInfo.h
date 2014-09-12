/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSURLRequest;

@interface WKFrameInfo : NSObject <NSCopying> {
    struct RetainPtr<NSURLRequest> { 
        void *m_ptr; 
    } _request;
    bool_mainFrame;
}

@property(getter=isMainFrame,readonly) bool mainFrame;
@property(copy,readonly) NSURLRequest * request;


- (id)initWithWebFrameProxy:(struct WebFrameProxy { int (**x1)(); id x2; struct WebPageProxy {} *x3; struct FrameLoadState { int x_4_1_1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_2_2_1; } x_4_1_2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_3_2_1; } x_4_1_3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_4_2_1; } x_4_1_4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_5_2_1; } x_4_1_5; } x4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_5_1_1; } x5; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_6_1_1; } x6; boolx7; struct RefPtr<WebKit::WebCertificateInfo> { struct WebCertificateInfo {} *x_8_1_1; } x8; struct RefPtr<WebKit::WebFrameListenerProxy> { struct WebFrameListenerProxy {} *x_9_1_1; } x9; unsigned long long x10; struct unique_ptr<WebCore::ContentFilter, std::__1::default_delete<WebCore::ContentFilter> > { struct __compressed_pair<WebCore::ContentFilter *, std::__1::default_delete<WebCore::ContentFilter> > { struct ContentFilter {} *x_1_2_1; } x_11_1_1; } x11; }*)arg1;
- (id)request;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isMainFrame;

@end
