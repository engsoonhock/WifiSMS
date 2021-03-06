/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */



@interface DOMEvent : DOMObject 
{
}

@property(copy,readonly) NSString *type;
@property(retain,readonly) <DOMEventTarget> *target;
@property(retain,readonly) <DOMEventTarget> *currentTarget;
@property(readonly) unsigned short eventPhase;
@property(readonly) BOOL bubbles;
@property(readonly) BOOL cancelable;
@property(readonly) unsigned long long timeStamp;


- (void)dealloc;
- (void)finalize;
- (id)type;
- (id)target;
- (id)currentTarget;
- (unsigned short)eventPhase;
- (BOOL)bubbles;
- (BOOL)cancelable;
- (unsigned long long)timeStamp;
- (id)srcElement;
- (BOOL)returnValue;
- (void)setReturnValue:(BOOL)arg1;
- (BOOL)cancelBubble;
- (void)setCancelBubble:(BOOL)arg1;
- (void)stopPropagation;
- (void)preventDefault;
- (void)initEvent:(id)arg1 canBubbleArg:(BOOL)arg2 cancelableArg:(BOOL)arg3;
- (void)initEvent:(id)arg1 :(BOOL)arg2 :(BOOL)arg3;

@end
