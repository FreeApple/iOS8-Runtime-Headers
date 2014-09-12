/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSSKGraphE : NSObject  {
    struct edge { unsigned long long x1; unsigned long long x2[2]; unsigned long long x3; } *_edges;
    struct vertex { unsigned long long x1; unsigned long long x2; unsigned long long *x3; } *_vertices;
    unsigned long long _numV;
    unsigned long long _numE;
    unsigned long long _currE;
    unsigned long long _dump;
    unsigned long long _l_end;
}


- (struct edge {}**)isAcyclic;
- (unsigned long long)numOfEdges;
- (bool)addEdgeWithH1:(unsigned long long)arg1 withH2:(unsigned long long)arg2;
- (id)initWithNumberOfVertices:(unsigned long long)arg1 numberOfEdges:(unsigned long long)arg2;
- (bool)isEmpty;
- (void)finalize;
- (void)dealloc;

@end
