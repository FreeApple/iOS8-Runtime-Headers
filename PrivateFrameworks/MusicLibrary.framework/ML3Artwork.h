/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString, NSURL;

@interface ML3Artwork : NSObject  {
    NSString *_artworkToken;
    long long _artworkType;
    long long _sourceType;
    NSString *_relativePath;
    NSURL *_originalFileURL;
}

@property(readonly) NSString * artworkToken;
@property(readonly) long long artworkType;
@property(readonly) long long sourceType;
@property(readonly) NSString * relativePath;
@property(readonly) NSURL * originalFileURL;


- (id)artworkToken;
- (id)initWithToken:(id)arg1 sourceType:(long long)arg2 relativePath:(id)arg3 artworkType:(long long)arg4;
- (id)originalFileURL;
- (id)fileURLForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithToken:(id)arg1 sourceType:(long long)arg2 artworkType:(long long)arg3;
- (long long)artworkType;
- (long long)sourceType;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)relativePath;

@end
