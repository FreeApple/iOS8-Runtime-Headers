/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSData;

@interface NSSubrangeData : NSData  {
    unsigned int _reserved : 3;
    unsigned int _retainCount : 29;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _range;
    NSData *_data;
}


- (id)init;
- (unsigned long long)length;
- (void)getBytes:(void*)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (const void*)bytes;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)getBytes:(void*)arg1;
- (id)initWithData:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)_isCompact;

@end
