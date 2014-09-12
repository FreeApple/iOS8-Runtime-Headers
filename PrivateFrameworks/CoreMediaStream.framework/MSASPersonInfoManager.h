/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSString, NSMutableDictionary;

@interface MSASPersonInfoManager : NSObject  {
    NSMutableDictionary *_personIDToPersonInfoDictionary;
    NSString *_pathForPersonInfoDictionary;
}

@property(retain) NSMutableDictionary * personIDToPersonInfoDictionary;
@property(retain) NSString * pathForPersonInfoDictionary;

+ (id)sharedManager;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)setPathForPersonInfoDictionary:(id)arg1;
- (id)pathForPersonInfoDictionary;
- (void)setPersonIDToPersonInfoDictionary:(id)arg1;
- (id)personIDToPersonInfoDictionary;
- (id)emailForPersonID:(id)arg1;
- (id)fullNameForPersonID:(id)arg1;
- (id)lastNameForPersonID:(id)arg1;
- (id)firstNameForPersonID:(id)arg1;
- (bool)updateWithSharingRelationship:(id)arg1;
- (void).cxx_destruct;
- (void)initWithPath:(id)arg1;

@end
