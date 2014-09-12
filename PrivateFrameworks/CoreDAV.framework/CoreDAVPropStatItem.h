/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVLeafItem, CoreDAVItem, CoreDAVErrorItem;

@interface CoreDAVPropStatItem : CoreDAVItem  {
    CoreDAVLeafItem *_status;
    CoreDAVItem *_prop;
    CoreDAVErrorItem *_errorItem;
    CoreDAVLeafItem *_responseDescription;
}

@property(retain) CoreDAVLeafItem * status;
@property(retain) CoreDAVItem * prop;
@property(retain) CoreDAVErrorItem * errorItem;
@property(retain) CoreDAVLeafItem * responseDescription;

+ (id)copyParseRules;

- (void)setProp:(id)arg1;
- (id)prop;
- (void)setResponseDescription:(id)arg1;
- (void)setErrorItem:(id)arg1;
- (id)responseDescription;
- (id)errorItem;
- (void)setStatus:(id)arg1;
- (id)status;
- (id)init;
- (void)dealloc;
- (id)description;

@end
