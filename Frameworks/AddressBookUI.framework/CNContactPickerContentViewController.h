/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <CNContactPickerContentDelegate>, NSArray, NSString, NSPredicate;

@interface CNContactPickerContentViewController : UIViewController <CNContactPickerContentViewController> {
    bool_clientWantsPersons;
    bool_clientWantsProperties;
    <CNContactPickerContentDelegate> *_delegate;
    NSArray *_displayedKeys;
    NSPredicate *_predicateForEnablingContact;
    NSPredicate *_predicateForSelectionOfContact;
    NSPredicate *_predicateForSelectionOfProperty;
}

@property bool clientWantsPersons;
@property bool clientWantsProperties;
@property(copy) NSArray * displayedKeys;
@property(copy) NSPredicate * predicateForEnablingContact;
@property(copy) NSPredicate * predicateForSelectionOfContact;
@property(copy) NSPredicate * predicateForSelectionOfProperty;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property <CNContactPickerContentDelegate> * delegate;
@property void* addressBook;


- (void)setClientWantsProperties:(bool)arg1;
- (void)setClientWantsPersons:(bool)arg1;
- (bool)clientWantsProperties;
- (bool)clientWantsPersons;
- (id)predicateForSelectionOfProperty;
- (id)predicateForSelectionOfContact;
- (void)setPredicateForEnablingContact:(id)arg1;
- (id)predicateForEnablingContact;
- (void)setDisplayedKeys:(id)arg1;
- (id)displayedKeys;
- (void)setupWithOptions:(id)arg1 readyBlock:(id)arg2;
- (void)setPredicateForSelectionOfProperty:(id)arg1;
- (void)setPredicateForSelectionOfContact:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)invalidate;
- (id)delegate;
- (void).cxx_destruct;

@end
