/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@class NSString, UIImage, NSData, NSMutableArray, NSURL;

@interface PRSImage : NSObject <NSSecureCoding> {
    NSMutableArray *_completionBlocks;
    UIImage *_preloadedImage;
    bool_loaded;
    bool_isTemplate;
    UIImage *_image;
    NSString *_identifier;
    NSString *_dataType;
    NSData *_data;
    NSURL *_url;
}

@property(retain) UIImage * image;
@property bool isTemplate;
@property(retain) NSString * identifier;
@property(retain) NSString * dataType;
@property(retain) NSData * data;
@property(retain) NSURL * url;

+ (id)converterBlock;
+ (bool)supportsSecureCoding;

- (void)loadImageWithSource:(id)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2 completion:(id)arg3;
- (void)preloadImageWithSource:(id)arg1;
- (void)setDataType:(id)arg1;
- (id)dataType;
- (void)setIdentifier:(id)arg1;
- (id)url;
- (id)identifier;
- (bool)isTemplate;
- (void)setIsTemplate:(bool)arg1;
- (void)setUrl:(id)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (id)data;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (void)setData:(id)arg1;

@end
