/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFComposeRecipientOriginContext, NSMutableArray, NSString;

@interface MFNameSearchOperation : MFContactsSearchOperation <ABPredicateDelegate> {
    NSMutableArray *_results;
    MFComposeRecipientOriginContext *_originContext;
}

@property(readonly) MFComposeRecipientOriginContext * originContext;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)operationWithAddressBook:(void*)arg1 owner:(id)arg2 text:(id)arg3 taskID:(id)arg4 properties:(id)arg5;

- (id)originContext;
- (bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2;
- (bool)predicateShouldContinue:(id)arg1;
- (void)main;
- (void)dealloc;

@end
