/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class MFLibraryIMAPStore, NSString, NSArray, MFIMAPConnection, NSMutableArray;

@interface MFBaseSyncResponseQueue : MFBufferedQueue  {
    MFLibraryIMAPStore *_store;
    MFIMAPConnection *_connection;
    NSString *_url;
    unsigned long long _currentUID;
    NSMutableArray *_missingUIDs;
    NSArray *_libraryDetails;
    bool_shouldCompact;
    bool_shouldFetch;
    bool_isSearching;
}


- (id)sequenceIdentifierForItem:(id)arg1;
- (unsigned long long)flagsForItem:(id)arg1;
- (bool)shouldSyncFlags;
- (unsigned long long)uidForItem:(id)arg1;
- (bool)handleItems:(id)arg1;
- (id)init;
- (void)dealloc;

@end
