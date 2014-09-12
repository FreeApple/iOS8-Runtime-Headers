/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSData, NSString, NSArray, <SAAceSerializable>, SADistance, NSNumber, SALocation;

@interface SALocalSearchMapItem : SADomainObject  {
}

@property(copy) NSArray * attributions;
@property(retain) <SAAceSerializable> * detail;
@property(copy) NSString * detailType;
@property(copy) NSString * directionRole;
@property(retain) SADistance * distance;
@property(copy) NSNumber * distanceInMiles;
@property(copy) NSString * label;
@property(copy) NSNumber * localSearchProviderId;
@property(retain) SALocation * location;
@property(copy) NSData * placeData;
@property(copy) NSData * placeData2;
@property(copy) NSNumber * placeId;
@property(copy) NSString * spokenAddress;
@property(copy) NSString * spokenName;

+ (id)mapItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mapItem;

- (void)setPlaceId:(id)arg1;
- (id)placeId;
- (void)setPlaceData2:(id)arg1;
- (id)placeData2;
- (void)setLocalSearchProviderId:(id)arg1;
- (id)localSearchProviderId;
- (void)setDistanceInMiles:(id)arg1;
- (id)distanceInMiles;
- (void)setDirectionRole:(id)arg1;
- (id)directionRole;
- (void)setDetailType:(id)arg1;
- (id)detailType;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (void)setPlaceData:(id)arg1;
- (id)placeData;
- (id)spokenAddress;
- (id)spokenName;
- (void)setSpokenAddress:(id)arg1;
- (void)setSpokenName:(id)arg1;
- (id)attributions;
- (void)setAttributions:(id)arg1;
- (id)location;
- (id)detail;
- (id)label;
- (id)distance;
- (void)setDistance:(id)arg1;
- (void)setLocation:(id)arg1;
- (id)groupIdentifier;
- (void)setLabel:(id)arg1;
- (void)setDetail:(id)arg1;

@end
