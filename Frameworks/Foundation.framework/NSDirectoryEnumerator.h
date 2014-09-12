/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSDictionary;

@interface NSDirectoryEnumerator : NSEnumerator  {
}

@property(copy,readonly) NSDictionary * fileAttributes;
@property(copy,readonly) NSDictionary * directoryAttributes;
@property(readonly) unsigned long long level;


- (unsigned long long)level;
- (id)nextObject;
- (void)skipDescendants;
- (void)skipDescendents;
- (id)directoryAttributes;
- (id)fileAttributes;

@end
