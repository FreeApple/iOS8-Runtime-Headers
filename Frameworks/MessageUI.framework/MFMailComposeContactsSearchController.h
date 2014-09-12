/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFContactsSearchResultsModel, MFContactsSearchManager, NSString, NSNumber, <MFMailComposeContactsSearchControllerDelegate>;

@interface MFMailComposeContactsSearchController : NSObject <MFContactsSearchConsumer> {
    MFContactsSearchManager *_manager;
    MFContactsSearchResultsModel *_model;
    NSNumber *_corecipientSearchTaskID;
    bool_foundAnySearchResults;
    unsigned long long _waitingOnSearchResultsCount;
    <MFMailComposeContactsSearchControllerDelegate> *_delegate;
    NSNumber *_taskID;
}

@property <MFMailComposeContactsSearchControllerDelegate> * delegate;
@property(retain) NSNumber * taskID;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)_finishSearch;
- (void)searchWithString:(id)arg1;
- (void)setTaskID:(id)arg1;
- (void)_cancelSearchAndNotify:(bool)arg1;
- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)finishedSearchingForType:(unsigned long long)arg1;
- (void)consumeSearchResults:(id)arg1 type:(unsigned long long)arg2 taskID:(id)arg3;
- (void)finishedTaskWithID:(id)arg1;
- (id)taskID;
- (void)findCorecipientsWithRecipients:(id)arg1;
- (void)searchWithString:(id)arg1 enteredRecipients:(id)arg2;
- (void)cancelSearch;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;

@end
