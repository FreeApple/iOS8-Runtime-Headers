/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSURL, NSDictionary, GSAddition;

@interface QLThumbnailAddition : NSObject  {
    NSURL *_additionURL;
    long long _additionURLSandboxToken;
    NSDictionary *_metadata;
    GSAddition *_addition;
    NSDictionary *_thumbnailDataDictionary;
}

@property(retain) NSURL * additionURL;
@property(retain) NSDictionary * metadata;
@property(retain) NSDictionary * thumbnailDataDictionary;

+ (bool)hasThumbnailOnImmutableDocumentAtURL:(id)arg1;
+ (bool)associateThumbnailImagesDictionary:(id)arg1 serializedQuickLookMetadata:(id)arg2 withDocumentAtURL:(id)arg3 error:(id*)arg4;
+ (bool)setThumbnailsDictionary:(id)arg1 forURL:(id)arg2 error:(id*)arg3;
+ (id)thumbnailsDictionaryForURL:(id)arg1 error:(id*)arg2;
+ (bool)removeAdditionsOnURL:(id)arg1 error:(id*)arg2;
+ (Class)imageClassWithError:(id*)arg1;
+ (bool)_removedAdditionsOnURL:(id)arg1;
+ (bool)_removeAdditionsOnURLUsingDaemon:(id)arg1 error:(id*)arg2;
+ (bool)_removeAdditionsOnURLDirectly:(id)arg1 error:(id*)arg2;
+ (bool)_removedAdditionsOnURLUsingDaemon:(id)arg1;
+ (bool)imageContainsAlpha:(struct CGImage { }*)arg1;
+ (id)_additionCreationInfo;
+ (bool)storeThumbnailDataDictionary:(id)arg1 metadata:(id)arg2 asExtendedAttributeOnURL:(id)arg3 error:(id*)arg4;
+ (bool)makeAdditionFromStagingURL:(id)arg1 metadata:(id)arg2 inStorage:(id)arg3 error:(id*)arg4;
+ (bool)_hitAdditionsOnURL:(id)arg1 error:(id*)arg2;
+ (bool)associateThumbnailImagesDictionary:(id)arg1 serializedQuickLookMetadata:(id)arg2 withImmutableDocument:(bool)arg3 atURL:(id)arg4 error:(id*)arg5;
+ (bool)_hitAdditionsOnURLUsingDaemon:(id)arg1 error:(id*)arg2;
+ (id)plistInExtendedAttributeNamed:(const char *)arg1 flags:(unsigned long long)arg2 onFileDescriptor:(int)arg3 error:(id*)arg4;
+ (bool)associateImage:(struct CGImage { }*)arg1 metadata:(id)arg2 withURL:(id)arg3 error:(id*)arg4;

- (id)thumbnailDataDictionary;
- (void*)cacheVersion;
- (id)thumbnailsDictionaryWithError:(id*)arg1;
- (id)thumbnailDataForKey:(id)arg1;
- (bool)_initWithAdditionsPresentOnURLUsingDaemon:(id)arg1 error:(id*)arg2;
- (bool)_initWithAdditionsPresentOnURLDirectly:(id)arg1 error:(id*)arg2;
- (bool)_initWithXattrsPresentOnURL:(id)arg1 error:(id*)arg2;
- (id)thumbnailURLForKey:(id)arg1;
- (id)additionURL;
- (void)setThumbnailDataDictionary:(id)arg1;
- (void)setAdditionURL:(id)arg1;
- (struct CGImage { }*)thumbnailWithMaximumDimension:(double)arg1 properties:(id*)arg2 flavor:(int*)arg3 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (id)initWithAdditionsPresentOnURL:(id)arg1 error:(id*)arg2;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (void)dealloc;

@end
