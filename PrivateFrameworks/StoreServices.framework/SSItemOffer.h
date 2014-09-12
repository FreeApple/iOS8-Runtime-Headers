/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSItem, NSString, NSArray, SSItemMedia, NSMutableDictionary, SSNetworkConstraints, NSSet, SSDialog;

@interface SSItemOffer : NSObject <NSCopying> {
    SSItem *_item;
    NSMutableDictionary *_offerDictionary;
    NSString *_offerIdentifier;
    NSArray *_supportedDevices;
}

@property(readonly) NSString * offerIdentifier;
@property(readonly) NSString * buyParameters;
@property(readonly) NSString * priceDisplay;
@property(readonly) NSString * actionDisplayName;
@property(getter=isOneTapOffer,readonly) bool oneTapOffer;
@property(getter=isPreorder,readonly) bool preorder;
@property(readonly) SSItemMedia * offerMedia;
@property(readonly) SSDialog * confirmationDialog;
@property(readonly) SSDialog * successDialog;
@property(readonly) NSArray * supportedDevices;
@property(readonly) SSNetworkConstraints * networkConstraints;
@property(readonly) NSSet * accountIdentifiers;
@property(readonly) NSString * actionType;
@property(readonly) long long estimatedDiskSpaceNeeded;
@property(readonly) id requiredSoftwareCapabilities;
@property(readonly) bool shouldShowPlusIcon;
@property(getter=_offerItem,setter=_setOfferItem:) SSItem * _offerItem;

+ (id)_preferredOfferIdentifiers;

- (bool)isOneTapOffer;
- (id)actionDisplayName;
- (bool)shouldShowPlusIcon;
- (id)documentUTI;
- (id)documentRequiredHandlers;
- (id)documentCannotOpenDialog;
- (id)_offerItem;
- (void)setPriceDisplay:(id)arg1;
- (void)setOneTapOffer:(bool)arg1;
- (void)setActionDisplayName:(id)arg1;
- (id)requiredSoftwareCapabilities;
- (long long)estimatedDiskSpaceNeeded;
- (id)accountIdentifiers;
- (id)supportedDevices;
- (id)successDialog;
- (id)confirmationDialog;
- (id)offerMedia;
- (id)initWithOfferIdentifier:(id)arg1 dictionary:(id)arg2;
- (id)priceDisplay;
- (void)_setOfferItem:(id)arg1;
- (id)allowedToneStyles;
- (id)offerIdentifier;
- (void)setBuyParameters:(id)arg1;
- (id)buyParameters;
- (id)playableMedia;
- (bool)isPreorder;
- (id)networkConstraints;
- (id)actionType;
- (id)init;
- (id)valueForProperty:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
