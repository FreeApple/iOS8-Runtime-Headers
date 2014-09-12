/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@class NSString;

@interface BKSProcessAssertionEvent : NSObject <BSXPCCoding> {
    NSString *_identifier;
}

@property(copy) NSString * identifier;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)dealloc;
- (id)description;

@end
