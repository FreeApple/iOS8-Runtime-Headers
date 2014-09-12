/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSError, PFUbiquityLocation;

@interface PFUbiquityLocationStatus : NSObject  {
    bool_isLive;
    bool_isDeleted;
    bool_isDownloaded;
    bool_isDownloading;
    bool_isUploaded;
    bool_isUploading;
    bool_isImported;
    bool_isScheduled;
    bool_isExported;
    bool_isFailed;
    PFUbiquityLocation *_location;
    NSError *_error;
    unsigned long long _hash;
    long long _numBytes;
    long long _numNotifications;
}

@property(readonly) bool isLive;
@property(readonly) bool isDeleted;
@property(readonly) bool isDownloaded;
@property bool isDownloading;
@property(readonly) bool isUploaded;
@property(readonly) bool isUploading;
@property(readonly) bool isScheduled;
@property(readonly) bool isImported;
@property(readonly) bool isExported;
@property(readonly) bool isFailed;
@property(readonly) long long numBytes;
@property(readonly) NSError * error;
@property(readonly) PFUbiquityLocation * location;
@property(readonly) long long numNotifications;


- (long long)numNotifications;
- (id)location;
- (bool)isFailed;
- (bool)isScheduled;
- (bool)isExported;
- (bool)isImported;
- (bool)isUploading;
- (bool)isUploaded;
- (void)setIsDownloading:(bool)arg1;
- (bool)isDownloading;
- (bool)isDownloaded;
- (bool)isLive;
- (void)recoveredFromError;
- (void)encounteredError:(id)arg1;
- (void)logWasExported;
- (void)logImportWasCancelled;
- (void)logWasScheduled;
- (void)logWasImported;
- (void)checkFileURLState;
- (id)initWithLocation:(id)arg1;
- (void)statusDidChange;
- (long long)numBytes;
- (bool)isDeleted;
- (id)init;
- (unsigned long long)hash;
- (id)error;
- (void)dealloc;
- (id)description;

@end
