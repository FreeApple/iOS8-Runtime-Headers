/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class TCMessageEntry;

@interface TCMessageException : NSException  {
    TCMessageEntry *m_entry;
}

+ (id)nsError:(id)arg1 domain:(id)arg2;
+ (void)raiseUntaggedMessage:(id)arg1;
+ (id)exceptionWithUntaggedMessage:(id)arg1;
+ (id)exceptionWithMessage:(struct TCTaggedMessageStructure { int x1; id x2; }*)arg1;
+ (void)raise:(struct TCTaggedMessageStructure { int x1; id x2; }*)arg1;
+ (void)initialize;

- (id)initWithUntaggedMessage:(id)arg1;
- (id)getEntry;
- (id)initWithMessage:(struct TCTaggedMessageStructure { int x1; id x2; }*)arg1;
- (void)dealloc;
- (id)description;

@end
