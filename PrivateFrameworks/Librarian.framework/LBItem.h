/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Librarian.framework/Librarian
 */

@class NSURL, NSString, NSMutableDictionary;

@interface LBItem : NSObject  {
    NSURL *_url;
    NSString *_path;
    NSMutableDictionary *_attributes;
    id _replacement;
}

@property id replacement;


- (void)updateInfo:(id)arg1;
- (id)initWithURL:(id)arg1 itemUpdateInfo:(id)arg2;
- (void)setReplacement:(id)arg1;
- (id)replacement;
- (id)path;
- (id)url;
- (id)valueForKey:(id)arg1;
- (id)_attributes;
- (id)initWithURL:(id)arg1;
- (void)dealloc;
- (id)attributeForName:(id)arg1;
- (id)attributesForNames:(id)arg1;
- (id)attributeNames;

@end
