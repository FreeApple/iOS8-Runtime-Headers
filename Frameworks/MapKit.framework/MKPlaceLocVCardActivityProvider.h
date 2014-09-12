/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class CNContact;

@interface MKPlaceLocVCardActivityProvider : MKPlaceActivityProvider  {
    CNContact *_contact;
}

@property(retain) CNContact * contact;


- (void)_setRecord:(void*)arg1 property:(int)arg2 stringValue:(id)arg3 label:(id)arg4;
- (id)initWithMapItem:(id)arg1 contact:(id)arg2;
- (void)setContact:(id)arg1;
- (id)contact;
- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;

@end
