/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface MCUserNotificationQueueEntry : NSObject  {
    bool_displayOnLockScreen;
    bool_displayInAppWhitelistModes;
    NSString *_title;
    NSString *_message;
    NSString *_defaultButtonText;
    NSString *_alternateButtonText;
    double _dismissAfterTimeInterval;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    id _notification;
}

@property(retain) NSString * title;
@property(retain) NSString * message;
@property(retain) NSString * defaultButtonText;
@property(retain) NSString * alternateButtonText;
@property bool displayOnLockScreen;
@property bool displayInAppWhitelistModes;
@property double dismissAfterTimeInterval;
@property(copy) id completionBlock;
@property(retain) id notification;


- (void)setNotification:(id)arg1;
- (void)setDismissAfterTimeInterval:(double)arg1;
- (double)dismissAfterTimeInterval;
- (void)setDisplayInAppWhitelistModes:(bool)arg1;
- (bool)displayInAppWhitelistModes;
- (void)setDisplayOnLockScreen:(bool)arg1;
- (bool)displayOnLockScreen;
- (void)setAlternateButtonText:(id)arg1;
- (id)alternateButtonText;
- (void)setDefaultButtonText:(id)arg1;
- (id)defaultButtonText;
- (void)setMessage:(id)arg1;
- (id)message;
- (void)setTitle:(id)arg1;
- (id)title;
- (void).cxx_destruct;
- (void)setCompletionBlock:(id)arg1;
- (id)completionBlock;
- (id)notification;

@end
