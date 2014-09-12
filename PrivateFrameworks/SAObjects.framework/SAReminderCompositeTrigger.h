/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAReminderDateTimeTrigger, SAReminderLocationTrigger;

@interface SAReminderCompositeTrigger : SAReminderTrigger  {
}

@property(retain) SAReminderDateTimeTrigger * dateTimeTrigger;
@property(retain) SAReminderLocationTrigger * locationTrigger;

+ (id)compositeTriggerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)compositeTrigger;

- (void)setLocationTrigger:(id)arg1;
- (void)setDateTimeTrigger:(id)arg1;
- (id)locationTrigger;
- (id)dateTimeTrigger;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
