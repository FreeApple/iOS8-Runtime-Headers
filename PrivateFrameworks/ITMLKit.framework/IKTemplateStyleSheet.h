/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class IKViewElementStyle, NSDictionary, IKStyleFactory, NSMutableDictionary;

@interface IKTemplateStyleSheet : NSObject  {
    IKViewElementStyle *_globalStyle;
    IKStyleFactory *_styleFactory;
    NSDictionary *_templateTree;
    NSMutableDictionary *_templateKeyPathMap;
}

@property(retain,readonly) IKViewElementStyle * globalStyle;
@property(retain,readonly) IKStyleFactory * styleFactory;
@property(copy,readonly) NSDictionary * templateTree;
@property(retain,readonly) NSMutableDictionary * templateKeyPathMap;

+ (void)registerStyleSheetURL:(id)arg1 forTemplateName:(id)arg2;
+ (id)_templateTreeNodeWithXMLNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1;
+ (id)styleSheetForTemplateName:(id)arg1;

- (id)globalStyle;
- (id)styleForElement:(id)arg1;
- (id)templateTree;
- (id)templateKeyPathMap;
- (id)styleFactory;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (void).cxx_destruct;

@end
