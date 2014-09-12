/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITableViewCell;

@interface UITableViewRow : NSObject <NSCoding> {
    long long _indentationLevel;
    UITableViewCell *_cell;
    double _height;
}

@property double height;
@property(retain) UITableViewCell * cell;

+ (id)row;

- (void)setHeight:(double)arg1;
- (double)height;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)setCell:(id)arg1;
- (id)cell;
- (long long)indentationLevel;
- (void)setIndentationLevel:(long long)arg1;

@end
