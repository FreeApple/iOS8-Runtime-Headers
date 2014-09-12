/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class ACAccountCredential, NSString;

@interface SUScriptAppleAccountCredential : SUScriptObject  {
    ACAccountCredential *_credential;
}

@property(readonly) NSString * oauthToken;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;

- (id)initWithACAccountCredential:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)oauthToken;
- (id)attributeKeys;
- (void)dealloc;

@end
