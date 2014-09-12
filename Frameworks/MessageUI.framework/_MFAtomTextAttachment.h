/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFModernComposeRecipientAtom, NSAttributedString, MFComposeRecipient;

@interface _MFAtomTextAttachment : NSTextAttachment  {
    NSAttributedString *_attributedString;
    bool_isPlaceholder;
    MFModernComposeRecipientAtom *_atomView;
}

@property bool isPlaceholder;
@property(retain) MFModernComposeRecipientAtom * atomView;
@property(readonly) MFComposeRecipient * recipient;


- (id)recipient;
- (void)setAtomView:(id)arg1;
- (void)setIsPlaceholder:(bool)arg1;
- (id)attributedStringWithBaseAttributes:(id)arg1;
- (id)initWithAtomView:(id)arg1;
- (id)atomView;
- (bool)isPlaceholder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { double x1; double x2; })arg3 characterIndex:(unsigned long long)arg4;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (void)dealloc;

@end
