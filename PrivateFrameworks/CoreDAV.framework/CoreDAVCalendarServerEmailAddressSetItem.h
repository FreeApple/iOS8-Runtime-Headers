/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVItemWithNoChildren, NSMutableSet;

@interface CoreDAVCalendarServerEmailAddressSetItem : CoreDAVItem  {
    NSMutableSet *_emailAddresses;
    CoreDAVItemWithNoChildren *_unauthenticated;
}

@property(retain) NSMutableSet * emailAddresses;
@property(retain) CoreDAVItemWithNoChildren * unauthenticated;

+ (id)copyParseRules;

- (void)setEmailAddresses:(id)arg1;
- (void)addEmailAddress:(id)arg1;
- (void)setUnauthenticated:(id)arg1;
- (id)unauthenticated;
- (id)emailAddresses;
- (id)init;
- (void)dealloc;
- (id)description;

@end
