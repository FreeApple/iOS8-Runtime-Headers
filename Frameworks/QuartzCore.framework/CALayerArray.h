/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class count;

@interface CALayerArray : NSArray  {

  /* Error parsing encoded ivar type info: {_CALayerArrayIvars="layers"^@"count"Q"capacity"Q"mutations"Q"retained"B} */
    /* Warning: unhandled struct encoding: '{_CALayerArrayIvars="layers"^@"count"Q"capacity"Q"mutations"Q"retained"B}' */ struct _CALayerArrayIvars { 
        count **layers; 
    } _ivars;

}


- (id)initWithLayers:(id*)arg1 count:(unsigned long long)arg2 retain:(bool)arg3;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id).cxx_construct;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
