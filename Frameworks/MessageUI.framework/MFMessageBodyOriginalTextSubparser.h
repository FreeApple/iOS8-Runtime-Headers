/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <MFMessageBodyElement_Private>, NSMutableArray;

@interface MFMessageBodyOriginalTextSubparser : MFMessageBodySubparser  {
    NSMutableArray *_lastTextElements;
    <MFMessageBodyElement_Private> *_lastNonWhitespaceTextElement;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _foundTextBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _foundWhitespaceBlock;

    bool_foundText;
    bool_foundForwardSeparator;
}


- (void)setFoundWhitespaceBlock:(id)arg1;
- (void)_consumeAnyLastTextElementAsAttribution:(bool)arg1;
- (void)_consumeTextElement:(id)arg1 isAttribution:(bool)arg2;
- (void)messageBodyParserDidFinishParsing:(id)arg1;
- (void)messageBodyParser:(id)arg1 foundMessageBodyElement:(id)arg2;
- (void)setFoundTextBlock:(id)arg1;
- (void)copyBlocks;
- (void)dealloc;

@end
