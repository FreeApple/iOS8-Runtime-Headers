/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CHDChart;

@interface CHDSeriesCollection : EDSortedCollection  {
    CHDChart *mChart;
}

+ (id)seriesCollectionWithChart:(id)arg1;

- (id)firstNonEmptySeries;
- (unsigned long long)nonEmptySeriesCount;
- (id)initWithChart:(id)arg1;
- (unsigned long long)addObject:(id)arg1;

@end
