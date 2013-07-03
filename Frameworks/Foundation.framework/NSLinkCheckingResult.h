/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURL;

@interface NSLinkCheckingResult : NSTextCheckingResult  {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    NSURL *_url;
}


- (unsigned long long)resultType;
- (void)dealloc;
- (id)description;
- (id)URL;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 URL:(id)arg2;
- (BOOL)_adjustRangesWithOffset:(int)arg1;
- (id)resultByAdjustingRangesWithOffset:(int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end