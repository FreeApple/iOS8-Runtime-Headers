/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSArray, EKObjectID, NSMutableDictionary;

@interface CADEntityWrapper : NSObject <NSSecureCoding> {
    void *_entity;
    NSArray *_loadedKeys;
    NSArray *_loadedValues;
    EKObjectID *_objectID;
    NSMutableDictionary *_loadedProperties;
}

+ (bool)supportsSecureCoding;

- (id)loadedProperties;
- (id)initWithCalEntity:(void*)arg1;
- (id)initWithCalEntity:(void*)arg1 propertiesToLoad:(id)arg2;
- (id)objectID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end
