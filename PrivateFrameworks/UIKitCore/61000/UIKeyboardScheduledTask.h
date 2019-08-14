//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, UIKeyboardTaskQueue, _UIActionWhenIdle;

__attribute__((visibility("hidden")))
@interface UIKeyboardScheduledTask : NSObject
{
    CDUnknownBlockType _task;
    double _timeInterval;
    UIKeyboardTaskQueue *_taskQueue;
    NSTimer *_timer;
    _UIActionWhenIdle *_deferredAction;
    CDUnknownBlockType _enqueuedTask;
}

@property(copy, nonatomic) CDUnknownBlockType enqueuedTask; // @synthesize enqueuedTask=_enqueuedTask;
@property(retain, nonatomic) _UIActionWhenIdle *deferredAction; // @synthesize deferredAction=_deferredAction;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) UIKeyboardTaskQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(readonly, nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(readonly, nonatomic) CDUnknownBlockType task; // @synthesize task=_task;
- (void)resetTimer;
- (void)invalidate;
- (BOOL)isValid;
- (void)handleDeferredTimerFiredEvent;
- (void)timerFired:(id)arg1;
@property(readonly, nonatomic) BOOL repeats;
- (id)initWithTaskQueue:(id)arg1 timeInterval:(double)arg2 repeats:(BOOL)arg3 task:(CDUnknownBlockType)arg4;
- (void)dealloc;

@end
