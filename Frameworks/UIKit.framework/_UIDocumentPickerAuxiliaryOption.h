/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, UIImage;

@interface _UIDocumentPickerAuxiliaryOption : NSObject <NSSecureCoding> {
    NSString *_title;
    UIImage *_image;
    NSString *_identifier;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    unsigned long long _order;
}

@property(copy) NSString * title;
@property(retain) UIImage * image;
@property(copy) NSString * identifier;
@property(copy) id handler;
@property unsigned long long order;

+ (bool)supportsSecureCoding;

- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setHandler:(id)arg1;
- (id)handler;
- (void)setImage:(id)arg1;
- (id)image;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (unsigned long long)order;
- (void)setOrder:(unsigned long long)arg1;

@end
