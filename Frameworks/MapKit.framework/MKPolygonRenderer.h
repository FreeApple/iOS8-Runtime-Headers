/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKPolygon;

@interface MKPolygonRenderer : MKOverlayPathRenderer  {
}

@property(readonly) MKPolygon * polygon;


- (id)polygon;
- (id)initWithPolygon:(id)arg1;
- (void)fillPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)createPath;

@end
