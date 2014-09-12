/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3QuerySection : NSObject  {
    unsigned long long _sectionIndex;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _range;
}

@property struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property unsigned long long sectionIndex;


- (void)setSectionIndex:(unsigned long long)arg1;
- (unsigned long long)sectionIndex;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 sectionIndex:(unsigned long long)arg2;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
