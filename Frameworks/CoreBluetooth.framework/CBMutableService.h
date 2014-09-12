/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class NSNumber, CBUUID, NSArray;

@interface CBMutableService : CBService  {
    NSNumber *_ID;
}

@property(retain) CBUUID * UUID;
@property bool isPrimary;
@property(retain) NSArray * includedServices;
@property(retain) NSArray * characteristics;
@property(retain) NSNumber * ID;


- (id)initWithType:(id)arg1 primary:(bool)arg2;
- (void)handlePowerNotOn;
- (void)setID:(id)arg1;
- (void)setCharacteristics:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)ID;
- (void)dealloc;
- (id)description;

@end
