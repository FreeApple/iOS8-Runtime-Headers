/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface VKGGLDebugTileData : NSObject  {
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
        struct __compressed_pair<ggl::Debug::BaseMesh *, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    } _namedLineMesh;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
        struct __compressed_pair<ggl::Debug::BaseMesh *, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    } _unnamedLineMesh;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
        struct __compressed_pair<ggl::Debug::BaseMesh *, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    } _polygonLineMesh;
    struct unique_ptr<ggl::Debug::BaseMesh, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
        struct __compressed_pair<ggl::Debug::BaseMesh *, std::__1::default_delete<ggl::Debug::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    } _coastLineMesh;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
        struct __compressed_pair<ggl::DebugPoints::BaseMesh *, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    } _poiPointsMesh;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
        struct __compressed_pair<ggl::DebugPoints::BaseMesh *, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    } _verticesPointsMesh;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
        struct __compressed_pair<ggl::DebugPoints::BaseMesh *, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    } _junctionsPointsMesh;
    struct unique_ptr<ggl::DebugPoints::BaseMesh, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
        struct __compressed_pair<ggl::DebugPoints::BaseMesh *, std::__1::default_delete<ggl::DebugPoints::BaseMesh> > { 
            struct BaseMesh {} *__first_; 
        } __ptr_; 
    } _overpassPointsMesh;
    unsigned long long _namedLineCount;
    unsigned long long _namedLineVertCount;
    unsigned long long _unnamedLineCount;
    unsigned long long _unnamedLineVertCount;
    unsigned long long _polygonCount;
    unsigned long long _polygonVertCount;
    unsigned long long _poiCount;
    unsigned long long _vertexCount;
    unsigned long long _junctionCount;
    unsigned long long _overpassCount;
    unsigned long long _coastLineCount;
    unsigned long long _coastLineVertCount;
}

@property(readonly) /* Warning: unhandled struct encoding: '{BaseMesh=^^?{basic_string<char' */ struct * namedLineMesh; /* unknown property attribute:  std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}^^?^{ResourceManager}^{RenderResource}{shared_ptr<ggl::VertexData>=^{VertexData}^{__shared_weak_count}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}{shared_ptr<ggl::Debug::BaseVertexData>=^{BaseVertexData}^{__shared_weak_count}}} */
@property(readonly) struct * unnamedLineMesh; /* unknown property attribute:  std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}^^?^{ResourceManager}^{RenderResource}{shared_ptr<ggl::VertexData>=^{VertexData}^{__shared_weak_count}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}{shared_ptr<ggl::Debug::BaseVertexData>=^{BaseVertexData}^{__shared_weak_count}}} */
@property(readonly) struct * polygonLineMesh; /* unknown property attribute:  std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}^^?^{ResourceManager}^{RenderResource}{shared_ptr<ggl::VertexData>=^{VertexData}^{__shared_weak_count}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}{shared_ptr<ggl::Debug::BaseVertexData>=^{BaseVertexData}^{__shared_weak_count}}} */
@property(readonly) struct * coastLineMesh; /* unknown property attribute:  std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}^^?^{ResourceManager}^{RenderResource}{shared_ptr<ggl::VertexData>=^{VertexData}^{__shared_weak_count}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}{shared_ptr<ggl::Debug::BaseVertexData>=^{BaseVertexData}^{__shared_weak_count}}} */
@property(readonly) struct * poiPointsMesh; /* unknown property attribute:  std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}^^?^{ResourceManager}^{RenderResource}{shared_ptr<ggl::VertexData>=^{VertexData}^{__shared_weak_count}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}{shared_ptr<ggl::DebugPoints::BaseVertexData>=^{BaseVertexData}^{__shared_weak_count}}} */
@property(readonly) struct * verticesPointsMesh; /* unknown property attribute:  std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}^^?^{ResourceManager}^{RenderResource}{shared_ptr<ggl::VertexData>=^{VertexData}^{__shared_weak_count}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}{shared_ptr<ggl::DebugPoints::BaseVertexData>=^{BaseVertexData}^{__shared_weak_count}}} */
@property(readonly) struct * junctionsPointsMesh; /* unknown property attribute:  std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}^^?^{ResourceManager}^{RenderResource}{shared_ptr<ggl::VertexData>=^{VertexData}^{__shared_weak_count}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}{shared_ptr<ggl::DebugPoints::BaseVertexData>=^{BaseVertexData}^{__shared_weak_count}}} */
@property(readonly) struct * overpassPointsMesh; /* unknown property attribute:  std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}^^?^{ResourceManager}^{RenderResource}{shared_ptr<ggl::VertexData>=^{VertexData}^{__shared_weak_count}}{shared_ptr<ggl::IndexData>=^{IndexData}^{__shared_weak_count}}{shared_ptr<ggl::DebugPoints::BaseVertexData>=^{BaseVertexData}^{__shared_weak_count}}} */
@property(readonly) unsigned long long namedLineCount;
@property(readonly) unsigned long long namedLineVertCount;
@property(readonly) unsigned long long unnamedLineCount;
@property(readonly) unsigned long long unnamedLineVertCount;
@property(readonly) unsigned long long polygonCount;
@property(readonly) unsigned long long polygonVertCount;
@property(readonly) unsigned long long poiCount;
@property(readonly) unsigned long long vertexCount;
@property(readonly) unsigned long long junctionCount;
@property(readonly) unsigned long long overpassCount;
@property(readonly) unsigned long long coastLineCount;
@property(readonly) unsigned long long coastLineVertCount;


- (unsigned long long)coastLineVertCount;
- (unsigned long long)coastLineCount;
- (unsigned long long)overpassCount;
- (unsigned long long)junctionCount;
- (unsigned long long)poiCount;
- (unsigned long long)polygonVertCount;
- (unsigned long long)polygonCount;
- (unsigned long long)unnamedLineVertCount;
- (unsigned long long)unnamedLineCount;
- (unsigned long long)namedLineVertCount;
- (unsigned long long)namedLineCount;
- (struct BaseMesh { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned long long x_1_5_1; unsigned long long x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[23]; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::Debug::BaseVertexData> { struct BaseVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)coastLineMesh;
- (struct BaseMesh { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned long long x_1_5_1; unsigned long long x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[23]; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::DebugPoints::BaseVertexData> { struct BaseVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)overpassPointsMesh;
- (struct BaseMesh { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned long long x_1_5_1; unsigned long long x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[23]; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::DebugPoints::BaseVertexData> { struct BaseVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)junctionsPointsMesh;
- (struct BaseMesh { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned long long x_1_5_1; unsigned long long x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[23]; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::Debug::BaseVertexData> { struct BaseVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)polygonLineMesh;
- (struct BaseMesh { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned long long x_1_5_1; unsigned long long x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[23]; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::DebugPoints::BaseVertexData> { struct BaseVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)poiPointsMesh;
- (struct BaseMesh { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned long long x_1_5_1; unsigned long long x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[23]; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::DebugPoints::BaseVertexData> { struct BaseVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)verticesPointsMesh;
- (struct BaseMesh { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned long long x_1_5_1; unsigned long long x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[23]; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::Debug::BaseVertexData> { struct BaseVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)unnamedLineMesh;
- (struct BaseMesh { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned long long x_1_5_1; unsigned long long x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[23]; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct shared_ptr<ggl::VertexData> { struct VertexData {} *x_6_1_1; struct __shared_weak_count {} *x_6_1_2; } x6; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_7_1_1; struct __shared_weak_count {} *x_7_1_2; } x7; struct shared_ptr<ggl::Debug::BaseVertexData> { struct BaseVertexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)namedLineMesh;
- (void)_fillInDebugData:(id)arg1;
- (id)initWithTile:(id)arg1;
- (unsigned long long)vertexCount;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
