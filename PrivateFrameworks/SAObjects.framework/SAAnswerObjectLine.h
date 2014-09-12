/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSNumber, NSString;

@interface SAAnswerObjectLine : AceObject <SAAceSerializable> {
}

@property(copy) NSURL * image;
@property(copy) NSNumber * imageInverted;
@property(copy) NSString * text;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)objectLineWithDictionary:(id)arg1 context:(id)arg2;
+ (id)objectLine;

- (void)setImageInverted:(id)arg1;
- (id)imageInverted;
- (id)encodedClassName;
- (id)text;
- (void)setImage:(id)arg1;
- (id)image;
- (id)groupIdentifier;
- (void)setText:(id)arg1;

@end
