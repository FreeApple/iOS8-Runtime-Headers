/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class <IKJSImpression>, NSString, NSArray, NSMutableArray;

@interface IKJSImpression : IKJSObject <IKJSImpression> {
    <IKJSImpression> *_parentImpression;
    NSString *_metricsData;
    NSMutableArray *_mutableTimestamps;
    NSMutableArray *_mutableChildren;
    long long _indexInParent;
}

@property <IKJSImpression> * parentImpression;
@property(copy) NSString * metricsData;
@property(retain) NSMutableArray * mutableTimestamps;
@property(retain) NSMutableArray * mutableChildren;
@property long long indexInParent;
@property(readonly) NSString * data;
@property(readonly) NSArray * timestamps;
@property(readonly) NSArray * children;
@property(readonly) id parent;
@property(readonly) long long index;


- (void)setIndexInParent:(long long)arg1;
- (void)setMetricsData:(id)arg1;
- (id)timestamps;
- (void)setParentImpression:(id)arg1;
- (void)setMutableChildren:(id)arg1;
- (void)setMutableTimestamps:(id)arg1;
- (long long)indexInParent;
- (id)metricsData;
- (id)mutableChildren;
- (id)mutableTimestamps;
- (id)parentImpression;
- (void)addTimestamp:(long long)arg1;
- (id)initWithAppContext:(id)arg1 data:(id)arg2 index:(unsigned long long)arg3;
- (void)linkReferences;
- (long long)index;
- (id)data;
- (void).cxx_destruct;
- (id)description;
- (void)addChild:(id)arg1;
- (id)parent;
- (id)children;

@end
