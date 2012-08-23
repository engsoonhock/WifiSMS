/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class NSLock;



@interface SCRCTargetSelectorTimer : SCRCTargetSelector 
{
    struct __CFRunLoopTimer { } *_timer;
    id _key;
    BOOL _isCancelled;
    BOOL _isPending;
    id _object;
    NSLock *_lock;
}

+ (void)initialize;
+ (void)_runThread;

- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 threadKey:(id)arg3;
- (void)invalidate;
- (void)dealloc;
- (void)dispatchAfterDelay:(double)arg1;
- (void)dispatchAfterDelay:(double)arg1 withObject:(id)arg2;
- (void)cancel;
- (BOOL)isCancelled;
- (BOOL)isPending;
- (id)threadKey;
- (void)_dispatch;
- (void)_dispatchMainThread;
- (void)_dispatchSCRCThread;

@end
