/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@class TKVibrationRecorderView, NSString, TLVibrationPattern, <TKVibrationRecorderViewControllerDelegate>, TKVibrationRecorderViewController, UIAlertAction, NSDictionary, UITextField, UIAlertController, UIBarButtonItem, TKVibratorController;

@interface TKVibrationRecorderContentViewController : UIViewController <TKVibrationRecorderViewDelegate, UITextFieldDelegate> {
    bool_waitingForEndOfCurrentVibrationComponent;
    int _mode;
    <TKVibrationRecorderViewControllerDelegate> *_delegate;
    TKVibrationRecorderViewController *_parentVibrationRecorderViewController;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_saveButton;
    UIAlertController *_vibrationNameAlertController;
    UIAlertAction *_vibrationNameAlertSaveAction;
    UITextField *_vibrationNameAlertTextField;
    TKVibratorController *_vibratorController;
    NSDictionary *_indefiniteVibrationPattern;
    TKVibrationRecorderView *_vibrationRecorderView;
    TLVibrationPattern *_recordedVibrationPattern;
    double _currentVibrationComponentDidStartTimeStamp;
    double _currentVibrationProgressDidStartTimestamp;
}

@property <TKVibrationRecorderViewControllerDelegate> * delegate;
@property TKVibrationRecorderViewController * parentVibrationRecorderViewController;
@property(setter=_setMode:) int _mode;
@property(setter=_setVibrationRecorderView:,retain) TKVibrationRecorderView * _vibrationRecorderView;
@property(setter=_setRecordedVibrationPattern:,retain) TLVibrationPattern * _recordedVibrationPattern;
@property(setter=_setCurrentVibrationComponentDidStartTimeStamp:) double _currentVibrationComponentDidStartTimeStamp;
@property(setter=_setCurrentVibrationProgressDidStartTimestamp:) double _currentVibrationProgressDidStartTimestamp;
@property(getter=_isWaitingForEndOfCurrentVibrationComponent,setter=_setWaitingForEndOfCurrentVibrationComponent:) bool _waitingForEndOfCurrentVibrationComponent;
@property(setter=_setCancelButton:,retain) UIBarButtonItem * _cancelButton;
@property(setter=_setSaveButton:,retain) UIBarButtonItem * _saveButton;
@property(setter=_setVibrationNameAlertController:,retain) UIAlertController * _vibrationNameAlertController;
@property(setter=_setVibrationNameAlertSaveAction:,retain) UIAlertAction * _vibrationNameAlertSaveAction;
@property(setter=_setVibrationNameAlertTextField:,retain) UITextField * _vibrationNameAlertTextField;
@property(setter=_setVibratorController:,retain) TKVibratorController * _vibratorController;
@property(setter=_setIndefiniteVibrationPattern:,retain) NSDictionary * _indefiniteVibrationPattern;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)_vibrationNameAlertController;
- (void)setParentVibrationRecorderViewController:(id)arg1;
- (id)initWithVibratorController:(id)arg1;
- (void)vibrationRecorderViewDidReachVibrationRecordingMaximumDuration:(id)arg1;
- (void)vibrationRecorderView:(id)arg1 didExitRecordingModeWithContextObject:(id)arg2;
- (bool)vibrationRecorderViewDidEnterRecordingMode:(id)arg1;
- (void)vibrationRecorderViewDidFinishReplayingVibration:(id)arg1;
- (void)vibrationComponentDidStartForVibrationRecorderView:(id)arg1;
- (void)_accessibilityMakeAnnouncementWithStringForLocalizationIdentifier:(id)arg1;
- (void)_accessibilityDidExitReplayMode;
- (void)_accessibilityDidExitRecordingMode;
- (void)_eraseCurrentVibrationComponentDidStartTimeStamp;
- (void)_setCurrentVibrationProgressDidStartTimestamp:(double)arg1;
- (double)_currentVibrationProgressDidStartTimestamp;
- (void)vibrationComponentDidEndForVibrationRecorderView:(id)arg1;
- (bool)_isWaitingForEndOfCurrentVibrationComponent;
- (void)_accessibilityDidEnterRecordingMode;
- (void)_accessibilityDidEnterReplayMode;
- (id)_cancelButton;
- (void)_startVibratingWithVibrationPattern:(id)arg1;
- (id)_indefiniteVibrationPattern;
- (void)_storeVibrationComponentOfTypePause:(bool)arg1;
- (void)_setWaitingForEndOfCurrentVibrationComponent:(bool)arg1;
- (void)_setCurrentVibrationComponentDidStartTimeStamp:(double)arg1;
- (double)_currentVibrationComponentDidStartTimeStamp;
- (id)_vibratorController;
- (void)_stopVibrating;
- (id)_vibrationNameAlertSaveAction;
- (id)_vibrationNameAlertTextField;
- (id)_recordedVibrationPattern;
- (void)_updateStateSaveButtonInAlert;
- (void)_setVibrationNameAlertController:(id)arg1;
- (void)_setVibrationNameAlertSaveAction:(id)arg1;
- (void)_setVibrationNameAlertTextField:(id)arg1;
- (void)_saveButtonInAlertTapped:(id)arg1;
- (void)_cancelButtonInAlertTapped:(id)arg1;
- (void)_vibrationNameTextFieldContentsDidChange:(id)arg1;
- (id)parentVibrationRecorderViewController;
- (void)_finishedWithRecorder;
- (void)vibrationRecorderView:(id)arg1 buttonTappedWithIdentifier:(int)arg2;
- (id)_vibrationRecorderView;
- (void)_cleanUpVibrationNameAlertController;
- (void)_setRecordedVibrationPattern:(id)arg1;
- (void)_setIndefiniteVibrationPattern:(id)arg1;
- (void)_setVibrationRecorderView:(id)arg1;
- (void)_setCancelButton:(id)arg1;
- (void)_saveButtonTapped:(id)arg1;
- (void)_setVibratorController:(id)arg1;
- (id)_saveButton;
- (void)_setSaveButton:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (int)_mode;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)_setMode:(int)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)applicationWillSuspend;

@end
