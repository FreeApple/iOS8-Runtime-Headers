/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSNumber, SSMutableURLRequestProperties, NSString;

@interface SUScriptURLRequest : SUScriptObject  {
    SSMutableURLRequestProperties *_requestProperties;
}

@property(copy) NSNumber * timeoutInterval;
@property(copy) NSString * URLBagKey;
@property(copy) id URLs;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;

- (id)copyNativeRequestProperties;
- (id)initWithNativeRequestProperties:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)setURLBagKey:(id)arg1;
- (id)URLBagKey;
- (id)attributeKeys;
- (id)init;
- (void)setTimeoutInterval:(id)arg1;
- (id)timeoutInterval;
- (void)dealloc;
- (id)URLs;
- (void)setURLs:(id)arg1;

@end
