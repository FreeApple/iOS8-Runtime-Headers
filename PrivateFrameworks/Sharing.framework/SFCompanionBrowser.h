/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class NSMutableDictionary, NSString, <SFCompanionBrowserDelegate>, <SFCompanionBrowserProtocol>, NSMutableArray;

@interface SFCompanionBrowser : NSObject <SFCompanionXPCManagerObserver, SFCompanionBrowserClient> {
    struct __SFBrowser { } *_browser;
    NSMutableDictionary *_nodes;
    NSMutableArray *_lostPeople;
    NSMutableArray *_foundPeople;
    NSMutableArray *_serviceTypes;
    NSMutableDictionary *_foundServices;
    NSMutableDictionary *_deviceServices;
    bool_foundDevices;
    <SFCompanionBrowserDelegate> *_delegate;
    NSString *_identifier;
    <SFCompanionBrowserProtocol> *_connectionProxy;
}

@property <SFCompanionBrowserDelegate> * delegate;
@property(copy,readonly) NSString * serviceType;
@property bool foundDevices;
@property(retain) NSString * identifier;
@property(retain) <SFCompanionBrowserProtocol> * connectionProxy;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setFoundDevices:(bool)arg1;
- (bool)foundDevices;
- (void)handleBrowserCallback;
- (id)serviceNames;
- (id)initWithServiceTypes:(id)arg1;
- (void)handleNewActivities:(id)arg1 forDevice:(id)arg2;
- (void)handleNoDevices;
- (void)stopBluetooth;
- (void)startBluetooth;
- (id)_initWithServiceTypes:(id)arg1;
- (void)receivedActivitiesList:(id)arg1 fromDeviceWithIdentifier:(id)arg2;
- (void)setConnectionProxy:(id)arg1;
- (id)connectionProxy;
- (void)startBrowsing;
- (void)xpcManagerConnectionInterrupted;
- (id)serviceTypes;
- (id)serviceType;
- (void)stopBrowsing;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)stop;
- (id)initWithServiceType:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)clearCache;
- (void)start;
- (id)delegate;
- (void)dealloc;

@end
