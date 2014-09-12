/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLQueueNode;

@interface NSURLQueue : NSObject  {
    unsigned long long count;
    NSURLQueueNode *head;
    NSURLQueueNode *tail;
    id monitor;
    boolwaitOnTake;
    bool_pad1;
    bool_pad2;
    bool_pad3;
}

+ (id)newNode;

- (id)peek;
- (void)clear;
- (id)init;
- (bool)isEmpty;
- (unsigned long long)count;
- (void)finalize;
- (void)dealloc;
- (void)setWaitOnTake:(bool)arg1;
- (bool)waitOnTake;
- (long long)indexOf:(id)arg1;
- (bool)remove:(id)arg1;
- (id)peekAt:(unsigned long long)arg1;
- (id)take;
- (void)put:(id)arg1;

@end
