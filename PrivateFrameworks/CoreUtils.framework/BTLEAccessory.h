/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@class NSString, CBPeripheral;

@interface BTLEAccessory : NSObject  {
    CBPeripheral *_peripheral;
    NSString *_name;
    double _lastSeen;
    int _lastRSSI;
}

@property(retain) CBPeripheral * peripheral;
@property(copy) NSString * name;
@property double lastSeen;
@property int RSSI;


- (void)setPeripheral:(id)arg1;
- (double)lastSeen;
- (int)RSSI;
- (void)setLastSeen:(double)arg1;
- (id)initWithPeripheral:(id)arg1;
- (void)setRSSI:(int)arg1;
- (id)peripheral;
- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;

@end
