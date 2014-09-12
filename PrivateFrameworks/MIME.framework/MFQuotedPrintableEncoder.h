/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFQuotedPrintableEncoder : MFBaseFilterDataConsumer  {
    unsigned long long _line;
    unsigned long long _matchedFrom;
    unsigned char _lastHorizontalWhitespace;
    bool_forTextPart;
    bool_lastWasNewLine;
    bool_forHeader;
}

@property bool forTextPart;
@property bool forHeader;

+ (unsigned long long)requiredSizeToEncodeHeaderBytes:(const char *)arg1 length:(unsigned long long)arg2;

- (bool)forHeader;
- (bool)forTextPart;
- (void)setForHeader:(bool)arg1;
- (void)setForTextPart:(bool)arg1;
- (void)done;
- (long long)appendData:(id)arg1;

@end
