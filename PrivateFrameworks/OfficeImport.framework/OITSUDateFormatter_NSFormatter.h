/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface OITSUDateFormatter_NSFormatter : NSFormatter  {
    NSString *mPreferredFormat;
    boolisDateOnly;
    boolisTimeOnly;
}

@property bool isDateOnly;
@property bool isTimeOnly;
@property(retain) NSString * preferredFormat;


- (void)setIsTimeOnly:(bool)arg1;
- (void)setIsDateOnly:(bool)arg1;
- (id)preferredFormat;
- (void)setPreferredFormat:(id)arg1;
- (bool)isTimeOnly;
- (bool)isDateOnly;
- (void)dealloc;
- (id)stringForObjectValue:(id)arg1;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;

@end
