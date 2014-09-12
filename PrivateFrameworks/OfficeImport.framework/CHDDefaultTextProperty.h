/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString, EDResources, EDRunsCollection;

@interface CHDDefaultTextProperty : NSObject <EDKeyedObject> {
    EDResources *mResources;
    int mDefaultTextType;
    unsigned long long mContentFormatId;
    EDRunsCollection *mRuns;
    int mLabelPosition;
    boolmShowCategoryLabel;
    boolmShowValueLabel;
    boolmShowPercentageLabel;
    boolmShowSeriesLabel;
    boolmShowBubbleSizeLabel;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)defaultTextPropertyWithResources:(id)arg1;

- (void)setIsShowSeriesLabel:(bool)arg1;
- (bool)isShowSeriesLabel;
- (void)setIsShowBubbleSizeLabel:(bool)arg1;
- (bool)isShowBubbleSizeLabel;
- (void)setIsShowPercentageLabel:(bool)arg1;
- (bool)isShowPercentageLabel;
- (void)setIsShowValueLabel:(bool)arg1;
- (bool)isShowValueLabel;
- (void)setIsShowCategoryLabel:(bool)arg1;
- (bool)isShowCategoryLabel;
- (void)setLabelPosition:(int)arg1;
- (int)labelPosition;
- (void)setDefaultTextType:(int)arg1;
- (int)defaultTextType;
- (void)setContentFormat:(id)arg1;
- (void)setRuns:(id)arg1;
- (id)initWithResources:(id)arg1;
- (void)setContentFormatId:(unsigned long long)arg1;
- (id)runs;
- (id)contentFormat;
- (unsigned long long)contentFormatId;
- (long long)key;
- (void)dealloc;

@end
