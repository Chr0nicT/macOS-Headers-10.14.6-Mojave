//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface QTMovie_FigMedia_TimelyCaller : NSObject
{
    NSObject<OS_dispatch_queue> *_timerQueue;
    struct OpaqueFigPlaybackItem *_playbackItem;
    NSObject<OS_dispatch_source> *_timerSource;
    BOOL _isInvalidated;
    struct OpaqueCMTimebase *_timebase;
    double _lastRate;
    double _currentRate;
}

- (void)_timebaseDidChange;
- (struct OpaqueFigPlaybackItem *)playbackItem;
- (void)_effectiveRateChanged;
- (void)_handleTimeDiscontinuity;
- (void)_resetNextFireTime;
- (void)invalidate;
- (void)_startObservingTimebaseNotificationsForCurrentItem;
- (void)_stopObservingTimebaseNotifications;
- (void)_removeCurrentTimebaseFromTimerSource;
- (void)finalize;
- (void)dealloc;
- (id)initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 queue:(id)arg2;

@end
