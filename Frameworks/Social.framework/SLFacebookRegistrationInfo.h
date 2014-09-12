/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class NSString, NSNumber, NSDate;

@interface SLFacebookRegistrationInfo : NSObject  {
    NSString *_firstName;
    NSString *_lastName;
    NSString *_email;
    NSNumber *_phone;
    NSString *_password;
    NSString *_gender;
    NSDate *_birthday;
}

@property(retain) NSString * firstName;
@property(retain) NSString * lastName;
@property(retain) NSString * email;
@property(retain) NSNumber * phone;
@property(retain) NSString * password;
@property(retain) NSString * gender;
@property(retain) NSDate * birthday;


- (void)setGender:(id)arg1;
- (id)gender;
- (void)setPhone:(id)arg1;
- (id)phone;
- (bool)hasAllRequiredValues;
- (void)setBirthday:(id)arg1;
- (id)birthday;
- (void)setEmail:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (id)lastName;
- (id)firstName;
- (id)email;
- (id)debugDescription;
- (id)password;
- (void).cxx_destruct;

@end
