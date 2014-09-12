/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSRLEArray : NSObject <NSCopying, NSMutableCopying> {
    struct _NSRefCountedRunArray { void *x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; struct _NSRunArrayItem { unsigned long long x_8_1_1; id x_8_1_2; } x8[0]; } *theList;
}


- (id)init;
- (unsigned long long)count;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)_makeNewListFrom:(struct _NSRefCountedRunArray { void *x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; struct _NSRunArrayItem { unsigned long long x_8_1_1; id x_8_1_2; } x8[0]; }*)arg1;
- (id)initWithRefCountedRunArray:(struct _NSRefCountedRunArray { void *x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; struct _NSRunArrayItem { unsigned long long x_8_1_1; id x_8_1_2; } x8[0]; }*)arg1;
- (id)objectAtRunIndex:(unsigned long long)arg1 length:(unsigned long long*)arg2;
- (id)objectAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 runIndex:(unsigned long long*)arg3;
- (id)objectAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;

@end
