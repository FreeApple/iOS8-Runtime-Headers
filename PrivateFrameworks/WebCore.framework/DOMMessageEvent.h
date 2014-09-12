/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSString, DOMMessagePort, <DOMEventTarget>;

@interface DOMMessageEvent : DOMEvent  {
}

@property(copy,readonly) NSString * origin;
@property(copy,readonly) NSString * lastEventId;
@property(readonly) <DOMEventTarget> * source;
@property(readonly) NSString * data;
@property(readonly) DOMMessagePort * messagePort;


- (id)source;
- (void)initMessageEvent:(id)arg1 canBubbleArg:(bool)arg2 cancelableArg:(bool)arg3 dataArg:(id)arg4 originArg:(id)arg5 lastEventIdArg:(id)arg6 sourceArg:(id)arg7 messagePort:(id)arg8;
- (id)messagePort;
- (id)lastEventId;
- (id)data;
- (id)origin;

@end
