/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABStyleProvider>, ABUIPerson, ABStyleProvider;

@interface ABMemberCell : UITableViewCell  {
    ABStyleProvider *_styleProvider;
    bool_isMeCard;
    ABUIPerson *_person;
}

@property(readonly) <ABStyleProvider> * styleProvider;
@property(retain) ABUIPerson * person;
@property bool isMeCard;


- (bool)isMeCard;
- (void)setIsMeCard:(bool)arg1;
- (id)initWithStyleProvider:(id)arg1 reuseIdentifier:(id)arg2;
- (id)_cachedRegularTextAttributes;
- (id)_cachedMemberNameRegularFont;
- (id)_cachedBoldTextAttributes;
- (id)_cachedPlaceholderTextAttributes;
- (id)_attributedNameWithNameComponents:(id)arg1 delimiter:(id)arg2 highlightedIndex:(long long)arg3 romanName:(bool)arg4;
- (id)styleProvider;
- (void)dealloc;
- (void)setPerson:(id)arg1;
- (id)person;
- (void)setUserInteractionEnabled:(bool)arg1;

@end
