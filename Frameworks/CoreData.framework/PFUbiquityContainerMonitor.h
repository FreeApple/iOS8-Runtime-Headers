/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class <NSObject><NSCopying><NSCoding>, NSString, PFUbiquityLocation, PFUbiquityContainerIdentifier, NSObject<OS_dispatch_queue>;

@interface PFUbiquityContainerMonitor : NSObject  {
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_localPeerID;
    NSString *_storeName;
    int _containerState;
    int _monitorState;
    bool_hasScheduledCheckBlock;
    int _scheduleSpinLock;
    NSObject<OS_dispatch_queue> *_processingQueue;
    <NSObject><NSCopying><NSCoding> *_currentIdentityToken;
    PFUbiquityContainerIdentifier *_containerIdentifier;
    NSString *_identityTokenOverride;
}

@property int containerState;
@property int monitorState;
@property(readonly) PFUbiquityContainerIdentifier * containerIdentifier;
@property(readonly) <NSObject><NSCopying><NSCoding> * currentIdentityToken;


- (void)setContainerState:(int)arg1;
- (void)checkStoresAndContainer:(id)arg1;
- (void)scheduleCheckBlock:(id)arg1;
- (void)setContainerIdentifier:(id)arg1 transitionType:(unsigned long long)arg2;
- (void)setMonitorState:(int)arg1;
- (void)ubiquityIdentityChanged:(id)arg1;
- (void)_applicationResumed:(id)arg1;
- (void)didChangeContainerIdentifier:(unsigned long long)arg1;
- (void)containerDeleteDetected:(id)arg1;
- (void)willChangeContainerIdentifier:(unsigned long long)arg1;
- (void)didChangeMonitorState;
- (void)willChangeMonitorState;
- (void)didChangeContainerState;
- (void)willChangeContainerState;
- (id)containerIdentifier;
- (id)currentIdentityToken;
- (int)monitorState;
- (int)containerState;
- (id)initWithProcessingQueue:(id)arg1 localPeerID:(id)arg2 storeName:(id)arg3 andUbiquityRootLocation:(id)arg4;
- (void)stopMonitor;
- (bool)startMonitor:(id*)arg1;
- (id)init;
- (void)dealloc;
- (id)description;

@end
