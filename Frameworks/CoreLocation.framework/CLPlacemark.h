/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class CLPlacemarkInternal, NSString, NSDictionary, CLRegion, CLLocation, NSArray;

@interface CLPlacemark : NSObject <NSCopying, NSSecureCoding> {
    CLPlacemarkInternal *_internal;
}

@property(copy,readonly) CLLocation * location;
@property(copy,readonly) CLRegion * region;
@property(copy,readonly) NSDictionary * addressDictionary;
@property(copy,readonly) NSString * name;
@property(copy,readonly) NSString * thoroughfare;
@property(copy,readonly) NSString * subThoroughfare;
@property(copy,readonly) NSString * locality;
@property(copy,readonly) NSString * subLocality;
@property(copy,readonly) NSString * administrativeArea;
@property(copy,readonly) NSString * subAdministrativeArea;
@property(copy,readonly) NSString * postalCode;
@property(copy,readonly) NSString * ISOcountryCode;
@property(copy,readonly) NSString * country;
@property(copy,readonly) NSString * inlandWater;
@property(copy,readonly) NSString * ocean;
@property(copy,readonly) NSArray * areasOfInterest;

+ (id)placemarkWithGEOMapItem:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)ISOcountryCode;
- (id)postalCode;
- (id)_geoMapItem;
- (id)areasOfInterest;
- (id)addressDictionary;
- (id)inlandWater;
- (id)ocean;
- (id)subThoroughfare;
- (id)thoroughfare;
- (id)fullThoroughfare;
- (id)subLocality;
- (id)locality;
- (id)subAdministrativeArea;
- (id)administrativeArea;
- (id)formattedAddressLines;
- (id)initWithPlacemark:(id)arg1;
- (id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4;
- (id)_initWithGeoMapItem:(id)arg1;
- (id)location;
- (id)country;
- (id)name;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)region;

@end
