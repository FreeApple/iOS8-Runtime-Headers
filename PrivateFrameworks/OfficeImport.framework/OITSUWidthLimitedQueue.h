/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSObject<OS_dispatch_queue>;

@interface OITSUWidthLimitedQueue : NSObject  {
    int mReaderCount;
    int mLimit;
    NSObject<OS_dispatch_queue> *mManagerQueue;
    NSObject<OS_dispatch_queue> *mTargetQueue;
    int mSpinLock;
}


- (id)initWithLimit:(unsigned long long)arg1;
- (void)performAsync:(id)arg1;
- (id)init;
- (void)dealloc;

@end
