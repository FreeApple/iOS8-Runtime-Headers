/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@class NSURL, NSMutableDictionary;

@interface PLFileSystemPersistenceBatchItem : NSObject  {
    NSURL *fileURL;
    NSMutableDictionary *attributes;
}

@property(retain) NSURL * fileURL;
@property(retain) NSMutableDictionary * attributes;


- (void)setUInt16:(unsigned short)arg1 forKey:(id)arg2;
- (void)setUUIDString:(id)arg1 forKey:(id)arg2;
- (void)persist;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (id)attributes;
- (void)setAttributes:(id)arg1;
- (id)init;
- (void)setFileURL:(id)arg1;
- (id)fileURL;
- (void)dealloc;
- (id)description;
- (void)setString:(id)arg1 forKey:(id)arg2;

@end
