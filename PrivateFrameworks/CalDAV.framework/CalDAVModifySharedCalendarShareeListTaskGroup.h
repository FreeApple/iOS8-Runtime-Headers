/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSSet, NSString, NSURL, NSMutableSet, <CoreDAVTaskGroupDelegate>;

@interface CalDAVModifySharedCalendarShareeListTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {
    NSSet *_shareesToRemove;
    NSSet *_shareesToSet;
    NSURL *_calendarURL;
    NSString *_summary;
    NSMutableSet *_invalidSharees;
}

@property <CoreDAVTaskGroupDelegate> * delegate;
@property(retain) NSMutableSet * invalidSharees;
@property(retain) NSSet * shareesToRemove;
@property(retain) NSSet * shareesToSet;
@property(retain) NSURL * calendarURL;
@property(retain) NSString * summary;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)initWithShareesToSet:(id)arg1 shareesToRemove:(id)arg2 summary:(id)arg3 atCalendarURL:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6;
- (id)invalidSharees;
- (id)shareesToRemove;
- (id)shareesToSet;
- (id)generateModificationMessageBody;
- (void)setInvalidSharees:(id)arg1;
- (void)setCalendarURL:(id)arg1;
- (void)setShareesToSet:(id)arg1;
- (void)setShareesToRemove:(id)arg1;
- (id)calendarURL;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (void)setSummary:(id)arg1;
- (id)summary;
- (void)dealloc;
- (id)description;

@end
