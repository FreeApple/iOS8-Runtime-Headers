/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface ECMappingInfo : NSObject  {
    NSString *mSheetName;
}

@property(readonly) NSString * sheetName;
@property(readonly) int rowOffset;
@property(readonly) int columnOffset;

+ (id)mappingInfoWithSheetName:(id)arg1;

- (int)columnOffset;
- (id)initWithSheetName:(id)arg1;
- (id)sheetName;
- (void)dealloc;
- (int)rowOffset;

@end
