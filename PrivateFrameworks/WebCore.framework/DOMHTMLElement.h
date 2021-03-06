/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSString, DOMHTMLCollection;

@interface DOMHTMLElement : DOMElement  {
}

@property(copy) NSString * idName;
@property(copy) NSString * title;
@property(copy) NSString * lang;
@property(copy) NSString * dir;
@property int tabIndex;
@property(copy) NSString * accessKey;
@property(copy) NSString * innerHTML;
@property(copy) NSString * innerText;
@property(copy) NSString * outerHTML;
@property(copy) NSString * outerText;
@property(readonly) DOMHTMLCollection * children;
@property(copy) NSString * contentEditable;
@property(readonly) bool isContentEditable;
@property(copy,readonly) NSString * titleDisplayString;


- (void)setHidden:(bool)arg1;
- (void)insertAdjacentText:(id)arg1 text:(id)arg2;
- (void)insertAdjacentHTML:(id)arg1 html:(id)arg2;
- (id)insertAdjacentElement:(id)arg1 element:(id)arg2;
- (id)titleDisplayString;
- (void)setSpellcheck:(bool)arg1;
- (bool)spellcheck;
- (id)contentEditable;
- (void)setOuterText:(id)arg1;
- (id)outerText;
- (void)setOuterHTML:(id)arg1;
- (id)outerHTML;
- (void)setInnerText:(id)arg1;
- (void)setWebkitdropzone:(id)arg1;
- (id)webkitdropzone;
- (void)setDraggable:(bool)arg1;
- (bool)draggable;
- (void)setTabIndex:(int)arg1;
- (int)tabIndex;
- (void)setTranslate:(bool)arg1;
- (bool)translate;
- (void)setLang:(id)arg1;
- (id)lang;
- (void)setIdName:(id)arg1;
- (void)setDir:(id)arg1;
- (id)dir;
- (void)click;
- (void)setAccessKey:(id)arg1;
- (id)accessKey;
- (void)absolutePosition:(int*)arg1 :(int*)arg2 :(int*)arg3 :(int*)arg4;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 adjustForIOSCaret:(bool)arg3;
- (void)setTitle:(id)arg1;
- (id)title;
- (bool)hidden;
- (void)setInnerHTML:(id)arg1;
- (int)structuralComplexityContribution;
- (id)idName;
- (bool)isContentEditable;
- (id)innerText;
- (id)innerHTML;
- (void)setContentEditable:(id)arg1;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2;
- (int)scrollYOffset;
- (int)scrollXOffset;
- (id)children;

@end
