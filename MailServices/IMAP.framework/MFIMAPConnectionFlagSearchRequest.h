/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class NSArray;

@interface MFIMAPConnectionFlagSearchRequest : NSObject  {
    bool_isPositiveMatch;
    unsigned long long _mask;
    NSArray *_searchTerms;
}

@property(readonly) unsigned long long mask;
@property(readonly) NSArray * searchTerms;
@property(readonly) bool isPositiveMatch;

+ (id)requestWithMask:(unsigned long long)arg1 searchTerms:(id)arg2 positiveMatch:(bool)arg3;

- (id)initWithMask:(unsigned long long)arg1 searchTerms:(id)arg2 positiveMatch:(bool)arg3;
- (bool)isPositiveMatch;
- (id)searchTerms;
- (unsigned long long)mask;
- (void)dealloc;

@end
