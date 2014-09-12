/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class SCNNode;

@interface SCNLookAtConstraint : SCNConstraint  {
    id _reserved;
    SCNNode *_target;
    bool_gimbalLockEnabled;
}

@property(readonly) SCNNode * target;
@property bool gimbalLockEnabled;

+ (id)lookAtConstraintWithTarget:(id)arg1;
+ (id)SCNJSExportProtocol;
+ (bool)supportsSecureCoding;

- (void)_customDecodingOfSCNLookAtConstraint:(id)arg1;
- (void)_customEncodingOfSCNLookAtConstraint:(id)arg1;
- (void)setGimbalLockEnabled:(bool)arg1;
- (bool)gimbalLockEnabled;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithTarget:(id)arg1;
- (id)target;

@end
