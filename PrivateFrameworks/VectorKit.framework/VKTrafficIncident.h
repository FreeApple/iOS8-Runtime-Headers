/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString, NSDate;

@interface VKTrafficIncident : NSObject <NSCopying> {
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    } _worldPoint;
    NSString *_title;
    NSString *_subtitle;
    long long _type;
    long long _routeRelevance;
    long long _significance;
    bool_isNotForDisplay;
    bool_isOnSelectedRoute;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    } _routeOffset;
    unsigned int _routeOffsetInMeters;
    struct { 
        double latitude; 
        double longitude; 
    } _location;
    NSString *_street;
    NSString *_crossStreet;
    NSString *_info;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_lastUpdatedDate;
    float _minZoom;
    float _maxZoom;
    unsigned long long _uniqueID;
    NSString *_uniqueString;
}

@property(copy,readonly) NSString * title;
@property(copy,readonly) NSString * subtitle;
@property(readonly) unsigned long long uniqueID;
@property(readonly) NSString * uniqueString;
@property(readonly) long long type;
@property(readonly) bool isNotForDisplay;
@property long long routeRelevance;
@property bool isOnSelectedRoute;
@property struct PolylineCoordinate { unsigned int x1; float x2; } routeOffset;
@property unsigned int routeOffsetInMeters;
@property(readonly) NSString * street;
@property(readonly) NSString * crossStreet;
@property(readonly) NSString * info;
@property(readonly) NSDate * startDate;
@property(readonly) NSDate * endDate;
@property(readonly) NSDate * lastUpdatedDate;
@property(readonly) struct VKPoint { double x1; double x2; double x3; } worldPoint;
@property(readonly) float minZoom;
@property(readonly) float maxZoom;
@property(readonly) long long significance;


- (float)maxZoom;
- (float)minZoom;
- (id)lastUpdatedDate;
- (void)setRouteOffsetInMeters:(unsigned int)arg1;
- (unsigned int)routeOffsetInMeters;
- (void)setRouteOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setIsOnSelectedRoute:(bool)arg1;
- (id)initWithRouteIncident:(id)arg1 routeRelevance:(long long)arg2;
- (id)initWithIncident:(id)arg1 vertices:(struct { long long x1; long long x2; }*)arg2 tileRect:(struct { double x1; double x2; double x3; double x4; })arg3 tileSize:(double)arg4;
- (id)crossStreet;
- (id)initWithIncidentData:(const struct Incident { struct GeoCoordinates { struct Longitude { unsigned int x_1_2_1; } x_1_1_1; struct Latitude { unsigned int x_2_2_1; } x_1_1_2; } x1; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned long long x_1_5_1; unsigned long long x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[23]; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned long long x_1_5_1; unsigned long long x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[23]; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; int x4; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned long long x_1_5_1; unsigned long long x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[23]; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; struct String { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned long long x_1_5_1; unsigned long long x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[23]; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_6_1_1; } x6; long long x7; long long x8; long long x9; long long x10; int x11; unsigned char x12; boolx13; int x14; unsigned char x15; unsigned char x16; }*)arg1 worldPoint:(struct VKPoint { double x1; double x2; double x3; }*)arg2;
- (struct VKPoint { double x1; double x2; double x3; })worldPoint;
- (void)setRouteRelevance:(long long)arg1;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (bool)hasSameIdentifier:(id)arg1;
- (bool)isNotForDisplay;
- (long long)routeRelevance;
- (bool)isOnSelectedRoute;
- (id)uniqueString;
- (long long)significance;
- (id)endDate;
- (id)street;
- (id)startDate;
- (id)title;
- (unsigned long long)uniqueID;
- (id)info;
- (long long)type;
- (void)dealloc;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)subtitle;

@end
