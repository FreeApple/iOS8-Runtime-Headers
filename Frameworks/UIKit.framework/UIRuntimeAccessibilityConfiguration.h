/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSNumber, NSObject;

@interface UIRuntimeAccessibilityConfiguration : NSObject  {
    NSString *accessibilityConfigurationHint;
    NSString *accessibilityConfigurationLabel;
    NSNumber *accessibilityConfigurationTraits;
    NSNumber *isAccessibilityConfigurationElement;
    NSObject *object;
}

@property(retain) NSString * accessibilityConfigurationHint;
@property(retain) NSString * accessibilityConfigurationLabel;
@property(retain) NSNumber * accessibilityConfigurationTraits;
@property(retain) NSNumber * isAccessibilityConfigurationElement;
@property(retain) NSObject * object;


- (void)setObject:(id)arg1;
- (id)object;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)setIsAccessibilityConfigurationElement:(id)arg1;
- (id)isAccessibilityConfigurationElement;
- (void)setAccessibilityConfigurationTraits:(id)arg1;
- (id)accessibilityConfigurationTraits;
- (void)setAccessibilityConfigurationLabel:(id)arg1;
- (id)accessibilityConfigurationLabel;
- (void)setAccessibilityConfigurationHint:(id)arg1;
- (id)accessibilityConfigurationHint;
- (id)initWithObject:(id)arg1 label:(id)arg2 hint:(id)arg3 traits:(id)arg4 andIsAccessibilityElement:(id)arg5;
- (void)applyConfiguration;

@end
