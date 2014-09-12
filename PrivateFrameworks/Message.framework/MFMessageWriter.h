/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSDictionary;

@interface MFMessageWriter : NSObject  {
    Class _messageClassToInstantiate;
    unsigned int _allows8BitMimeParts : 1;
    unsigned int _allowsBinaryMimeParts : 1;
    unsigned int _writeSizeDispositionParameter : 1;
    unsigned int _allowsQuotedPrintable : 1;
    id _delegate;
    NSDictionary *_compositionSpecification;
}

@property id delegate;
@property(readonly) NSDictionary * compositionSpecification;


- (id)compositionSpecification;
- (void)setMessageClassToInstantiate:(Class)arg1;
- (void)setWriteSizeDispositionParameter:(bool)arg1;
- (bool)allowsQuotedPrintable;
- (void)setAllowsBinaryMimeParts:(bool)arg1;
- (bool)allowsBinaryMimeParts;
- (void)setAllows8BitMimeParts:(bool)arg1;
- (bool)allows8BitMimeParts;
- (id)createMessageWithHtmlString:(id)arg1 attachments:(id)arg2 headers:(id)arg3;
- (id)createMessageWithHtmlString:(id)arg1 plainTextAlternative:(id)arg2 otherHtmlStringsAndAttachments:(id)arg3 headers:(id)arg4;
- (id)createMessageWithPlainTextDocumentsAndAttachments:(id)arg1 headers:(id)arg2;
- (id)createMessageWithString:(id)arg1 headers:(id)arg2;
- (void)appendDataForMimePart:(id)arg1 toData:(id)arg2 withPartData:(id)arg3;
- (id)createMessageWithHtmlString:(id)arg1 plainTextAlternative:(id)arg2 otherHtmlStringsAndAttachments:(id)arg3 charsets:(id)arg4 headers:(id)arg5;
- (void)setAllowsQuotedPrintable:(bool)arg1;
- (id)initWithCompositionSpecification:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;

@end
