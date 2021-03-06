/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSString, NSMutableString;

@interface MFMessageBodyStringAccumulator : NSObject <MFMessageBodyStringAccumulator> {
    NSMutableString *_accumulatedString;
    unsigned long long _remainingLength;
    int _options;
    int _lastEntity;
    unsigned long long _lastCustomEntityTag;
    bool_isFull;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)appendCustomEntityWithTag:(unsigned long long)arg1 stringRepresentation:(id)arg2;
- (void)appendRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ofString:(id)arg2;
- (void)appendNewline;
- (id)accumulatedString;
- (void)appendInnerTextWithConsumableNode:(id)arg1;
- (id)initWithOptions:(int)arg1 lengthLimit:(unsigned long long)arg2;
- (bool)isFull;
- (void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
- (void)appendString:(id)arg1;
- (void)dealloc;

@end
