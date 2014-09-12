/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIImageViewElement, NSDate;

@interface SKUICounterViewElement : SKUIViewElement  {
    double _changeRatePerSecond;
    long long _counterType;
    long long _dateFormatType;
    NSDate *_endDate;
    NSString *_numberFormat;
    long long _startValue;
    NSDate *_startValueDate;
    long long _stopValue;
}

@property(readonly) long long counterType;
@property(readonly) SKUIImageViewElement * backgroundImageElement;
@property(readonly) long long dateFormatType;
@property(readonly) NSDate * endDate;
@property(readonly) double changeRatePerSecond;
@property(readonly) NSString * numberFormat;
@property(readonly) NSDate * startValueDate;
@property(readonly) long long startValue;
@property(readonly) long long stopValue;


- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (id)applyUpdatesWithElement:(id)arg1;
- (long long)currentNumberValue;
- (id)backgroundImageElement;
- (long long)dateFormatType;
- (long long)counterType;
- (long long)startValue;
- (double)changeRatePerSecond;
- (id)startValueDate;
- (long long)stopValue;
- (id)numberFormat;
- (id)endDate;
- (void).cxx_destruct;

@end
