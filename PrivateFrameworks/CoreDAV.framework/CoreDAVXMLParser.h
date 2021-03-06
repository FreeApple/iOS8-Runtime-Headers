/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSError, CoreDAVErrorItem, NSURL, NSString, NSSet, CoreDAVItem, CoreDAVXMLElementGenerator;

@interface CoreDAVXMLParser : NSXMLParser <CoreDAVResponseBodyParser> {
    CoreDAVXMLElementGenerator *_rootElementGenerator;
    CoreDAVXMLElementGenerator *_rootErrorGenerator;
    NSSet *_parseHints;
    NSURL *_baseURL;
}

@property(retain) NSSet * parseHints;
@property(retain) NSURL * baseURL;
@property(readonly) CoreDAVItem * rootElement;
@property(readonly) CoreDAVErrorItem * rootError;
@property(retain) CoreDAVXMLElementGenerator * rootElementGenerator;
@property(retain) CoreDAVXMLElementGenerator * rootErrorGenerator;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) NSError * parserError;

+ (bool)canHandleContentType:(id)arg1;

- (id)rootElementGenerator;
- (void)setRootElementGenerator:(id)arg1;
- (void)setRootErrorGenerator:(id)arg1;
- (id)rootErrorGenerator;
- (id)parseHints;
- (id)rootError;
- (bool)processData:(id)arg1 forTask:(id)arg2;
- (id)rootElement;
- (void)setParseHints:(id)arg1;
- (id)initWithRootElementNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3 baseURL:(id)arg4;
- (void)setBaseURL:(id)arg1;
- (id)baseURL;
- (id)initWithData:(id)arg1;
- (void)dealloc;

@end
