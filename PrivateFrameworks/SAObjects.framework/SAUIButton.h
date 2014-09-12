/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, SAUIImageResource, NSString;

@interface SAUIButton : SAAceView  {
}

@property(copy) NSArray * commands;
@property(retain) SAUIImageResource * image;
@property(copy) NSString * secondaryText;
@property(copy) NSString * text;

+ (id)buttonWithDictionary:(id)arg1 context:(id)arg2;
+ (id)button;

- (void)setSecondaryText:(id)arg1;
- (id)secondaryText;
- (id)encodedClassName;
- (id)commands;
- (void)setCommands:(id)arg1;
- (id)text;
- (void)setImage:(id)arg1;
- (id)image;
- (id)groupIdentifier;
- (void)setText:(id)arg1;

@end
