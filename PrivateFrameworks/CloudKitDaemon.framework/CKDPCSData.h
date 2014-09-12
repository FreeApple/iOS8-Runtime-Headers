/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, CKDPCSData;

@interface CKDPCSData : NSObject  {
    struct _OpaquePCSShareProtection { } *_pcs;
    id _itemID;
    NSString *_etag;
    CKDPCSData *_zonePCSData;
    CKDPCSData *_sharePCSData;
}

@property(readonly) id itemID;
@property struct _OpaquePCSShareProtection { }* pcs;
@property(retain) NSString * etag;
@property(retain) CKDPCSData * zonePCSData;
@property(retain) CKDPCSData * sharePCSData;

+ (id)dataWithItemID:(id)arg1;

- (void)setSharePCSData:(id)arg1;
- (id)sharePCSData;
- (id)initWithItemID:(id)arg1;
- (id)zonePCSData;
- (void)setZonePCSData:(id)arg1;
- (struct _OpaquePCSShareProtection { }*)pcs;
- (void)setPcs:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setEtag:(id)arg1;
- (id)etag;
- (id)CKPropertiesDescription;
- (id)itemID;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;

@end
