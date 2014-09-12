/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSURL, NSString, EXReadState;

@interface EXSheetContext : NSObject <OCDDelayedNodeContext> {
    EXReadState *mSheetState;
    NSURL *mPackageLocation;
    NSString *mType;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)initWithSheetLocation:(id)arg1 sheetXmlType:(id)arg2 state:(id)arg3;
- (bool)loadDelayedNode:(id)arg1;
- (void)dealloc;

@end
