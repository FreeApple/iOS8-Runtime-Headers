/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@class NSString;

@interface WebOpenPanelResultListener : NSObject <WebOpenPanelResultListener> {
    struct FileChooser { unsigned int x1; struct FileChooserClient {} *x2; struct FileChooserSettings { boolx_3_1_1; struct Vector<WTF::String, 0, WTF::CrashOnOverflow> { struct String {} *x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_3_1_2; struct Vector<WTF::String, 0, WTF::CrashOnOverflow> { struct String {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_3_1_3; struct Vector<WTF::String, 0, WTF::CrashOnOverflow> { struct String {} *x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_3_1_4; } x3; } *_chooser;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)chooseFilenames:(id)arg1;
- (void)chooseFilename:(id)arg1;
- (void)chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(struct CGImage { }*)arg3;
- (id)initWithChooser:(struct PassRefPtr<WebCore::FileChooser> { struct FileChooser {} *x1; })arg1;
- (void)cancel;
- (void)chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(struct CGImage { }*)arg3;

@end
