/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSString, <MFContactsSearchConsumer>, NSMutableSet;

@interface MFContactsSearchTaskContext : NSObject  {
    <MFContactsSearchConsumer> *_consumer;
    NSString *_text;
    NSMutableSet *_operations;
    NSMutableSet *_searchQueries;
}

@property(readonly) <MFContactsSearchConsumer> * consumer;
@property(readonly) NSString * text;
@property(readonly) NSMutableSet * operations;
@property(readonly) NSMutableSet * searchQueries;

+ (id)contextWithConsumer:(id)arg1 text:(id)arg2 operations:(id)arg3 searchQueries:(id)arg4;

- (id)searchQueries;
- (id)operations;
- (id)consumer;
- (id)text;
- (bool)done;
- (void)dealloc;

@end
