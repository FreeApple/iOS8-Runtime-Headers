/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSScanner;

@interface MFMessageBodyHTMLParser : MFMessageBodyParser  {
    NSScanner *_scanner;
}


- (id)initWithHTML:(id)arg1;
- (bool)_isMilestoneTagName:(id)arg1;
- (void)_consumeNodesFromNode:(id)arg1 upToNode:(id)arg2;
- (void)_findBody;
- (void)didFindError:(id)arg1;
- (Class)messageBodyElementClass;
- (int)messageBodyStringAccumulatorDefaultOptions;
- (void)dealloc;
- (bool)parse;

@end
