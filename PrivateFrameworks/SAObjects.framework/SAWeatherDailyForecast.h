/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber;

@interface SAWeatherDailyForecast : SAWeatherForecast  {
}

@property(copy) NSNumber * highTemperature;
@property(copy) NSNumber * lowTemperature;

+ (id)dailyForecastWithDictionary:(id)arg1 context:(id)arg2;
+ (id)dailyForecast;

- (void)setLowTemperature:(id)arg1;
- (id)lowTemperature;
- (void)setHighTemperature:(id)arg1;
- (id)highTemperature;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
