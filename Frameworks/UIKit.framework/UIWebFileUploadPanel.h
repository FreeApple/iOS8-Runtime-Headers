/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIViewController, NSObject<WebOpenPanelResultListener>, NSArray, NSString, <UIWebFileUploadPanelDelegate>, UIPopoverController, UIWebDocumentView, UIAlertController, UIImagePickerController, DOMNode;

@interface UIWebFileUploadPanel : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIPopoverControllerDelegate> {
    UIAlertController *_selectPickerTypeSheet;
    UIImagePickerController *_imagePicker;
    UIViewController *_presentationViewController;
    UIPopoverController *_presentationPopover;
    bool_documentViewPresentedViewController;
    struct CGPoint { 
        double x; 
        double y; 
    } _interactionPoint;
    DOMNode *_interactionElement;
    bool_allowMultipleFiles;
    bool_isUsingCamera;
    NSArray *_mimeTypes;
    UIWebDocumentView *_documentView;
    NSObject<WebOpenPanelResultListener> *_resultListener;
    <UIWebFileUploadPanelDelegate> *_delegate;
}

@property <UIWebFileUploadPanelDelegate> * delegate;
@property(copy) NSArray * mimeTypes;
@property UIWebDocumentView * documentView;
@property(retain) NSObject<WebOpenPanelResultListener> * resultListener;
@property bool allowMultipleFiles;
@property bool isUsingCamera;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)_cancel;
- (id)documentView;
- (void)setDocumentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (bool)isUsingCamera;
- (bool)allowMultipleFiles;
- (id)resultListener;
- (void)_chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;
- (void)_processMediaInfoDictionaries:(id)arg1 successBlock:(id)arg2 failureBlock:(id)arg3;
- (void)_chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;
- (id)_thumbnailSizedImageForImage:(id)arg1;
- (bool)_willMultipleSelectionDelegateBeCalled;
- (void)_filePathFromMediaInfo:(id)arg1 successBlock:(id)arg2 failureBlock:(id)arg3;
- (void)_temporaryFilePathForOriginalImage:(id)arg1 successBlock:(id)arg2 failureBlock:(id)arg3;
- (id)_displayStringForPhotos:(unsigned long long)arg1 videos:(unsigned long long)arg2;
- (void)_processMediaInfoDictionaries:(id)arg1 atIndex:(unsigned long long)arg2 processedResults:(id)arg3 processedImageCount:(unsigned long long)arg4 processedVideoCount:(unsigned long long)arg5 successBlock:(id)arg6 failureBlock:(id)arg7;
- (double)_compressionQuality;
- (id)_filePathForMediaURL:(id)arg1;
- (void)_showMediaSourceSelectionSheet;
- (void)_dismissDisplayAnimated:(bool)arg1;
- (void)_showPhotoPickerWithSourceType:(long long)arg1;
- (void)_presentFullscreenViewController:(id)arg1 animated:(bool)arg2;
- (void)_presentPopoverWithContentViewController:(id)arg1 animated:(bool)arg2;
- (id)_photoPickerWithSourceType:(long long)arg1;
- (id)_mediaTypesForPickerSourceType:(long long)arg1;
- (bool)_string:(id)arg1 hasPrefixCaseInsensitive:(id)arg2;
- (id)mimeTypes;
- (void)_dispatchDidDismiss;
- (void)setIsUsingCamera:(bool)arg1;
- (void)setAllowMultipleFiles:(bool)arg1;
- (void)setResultListener:(id)arg1;
- (void)setMimeTypes:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)present;
- (id)initWithResultListener:(id)arg1 mimeTypes:(id)arg2 allowMultipleFiles:(bool)arg3 documentView:(id)arg4;
- (void)dismiss;

@end
