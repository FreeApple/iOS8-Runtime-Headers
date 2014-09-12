/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, WKDOMNode, WKDOMDocument;

@interface WKDOMNode : NSObject  {
    struct RefPtr<WebCore::Node> { 
        struct Node {} *m_ptr; 
    } _impl;
}

@property(readonly) WKDOMDocument * document;
@property(readonly) WKDOMNode * parentNode;
@property(readonly) WKDOMNode * firstChild;
@property(readonly) WKDOMNode * lastChild;
@property(readonly) WKDOMNode * previousSibling;
@property(readonly) WKDOMNode * nextSibling;
@property(readonly) NSArray * textRects;


- (struct OpaqueWKBundleNodeHandle { }*)_copyBundleNodeHandleRef;
- (id)_initWithImpl:(struct Node { int (**x1)(); struct Weak<WebCore::JSDOMWrapper> { struct WeakImpl {} *x_2_1_1; } x2; int x3; unsigned int x4; struct ContainerNode {} *x5; struct TreeScope {} *x6; struct Node {} *x7; struct Node {} *x8; union DataUnion { struct RenderObject {} *x_9_1_1; struct NodeRareDataBase {} *x_9_1_2; } x9; }*)arg1;
- (void)insertNode:(id)arg1 before:(id)arg2;
- (id)textRects;
- (id)lastChild;
- (id)document;
- (void)appendChild:(id)arg1;
- (void)removeChild:(id)arg1;
- (id)parentNode;
- (id)nextSibling;
- (id)firstChild;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)previousSibling;

@end
