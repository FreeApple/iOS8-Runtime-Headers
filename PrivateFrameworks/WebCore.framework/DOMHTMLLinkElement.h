/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSString, NSURL, DOMStyleSheet;

@interface DOMHTMLLinkElement : DOMHTMLElement  {
}

@property bool disabled;
@property(copy) NSString * charset;
@property(copy) NSString * href;
@property(copy) NSString * hreflang;
@property(copy) NSString * media;
@property(copy) NSString * rel;
@property(copy) NSString * rev;
@property(copy) NSString * target;
@property(copy) NSString * type;
@property(readonly) DOMStyleSheet * sheet;
@property(copy,readonly) NSURL * absoluteLinkURL;


- (id)sheet;
- (void)setMedia:(id)arg1;
- (void)setRev:(id)arg1;
- (id)rev;
- (void)setHreflang:(id)arg1;
- (id)hreflang;
- (void)setCharset:(id)arg1;
- (id)charset;
- (id)media;
- (bool)_mediaQueryMatches;
- (void)setDisabled:(bool)arg1;
- (void)setTarget:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;
- (id)target;
- (bool)disabled;
- (bool)_mediaQueryMatchesForOrientation:(int)arg1;
- (void)setRel:(id)arg1;
- (id)rel;
- (void)setHref:(id)arg1;
- (id)href;
- (id)absoluteLinkURL;

@end
