/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class CLIntersiloInterface, CLSilo;

@interface CLIntersiloService : NSObject <CLIntersiloServiceProtocol> {
    bool_valid;
    CLSilo *_silo;
    CLIntersiloInterface *_inboundInterface;
    CLIntersiloInterface *_outboundInterface;
}

@property(readonly) CLSilo * silo;
@property(readonly) CLIntersiloInterface * inboundInterface;
@property(readonly) CLIntersiloInterface * outboundInterface;
@property bool valid;

+ (id)getSilo;
+ (void)becameFatallyBlocked:(id)arg1;

- (bool)isHydrated;
- (id)outboundInterface;
- (id)inboundInterface;
- (id)initInSilo:(id)arg1;
- (id)silo;
- (id)initWithInboundProtocol:(id)arg1 outboundProtocol:(id)arg2 andSilo:(id)arg3;
- (void)setValid:(bool)arg1;
- (bool)valid;
- (id)init;
- (id)debugDescription;
- (void).cxx_destruct;

@end
