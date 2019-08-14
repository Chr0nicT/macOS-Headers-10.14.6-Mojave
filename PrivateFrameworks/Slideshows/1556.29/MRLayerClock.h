//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Slideshows/MCPlugTiming-Protocol.h>

@interface MRLayerClock : NSObject <MCPlugTiming>
{
    double _internalTimeOffset;
    double _externalTimeForPauseInversion;
    unsigned long long _flags;
    double _externalTime;
    double _phaseInDuration;
    double _loopDuration;
    double _phaseOutDuration;
    double _numberOfLoops;
    double _containerTime;
    double _containerDuration;
    long long _currentLoopIndex;
}

@property(readonly, nonatomic) long long currentLoopIndex; // @synthesize currentLoopIndex=_currentLoopIndex;
@property(readonly, nonatomic) double containerDuration; // @synthesize containerDuration=_containerDuration;
@property(nonatomic) double containerTime; // @synthesize containerTime=_containerTime;
@property(nonatomic) double numberOfLoops; // @synthesize numberOfLoops=_numberOfLoops;
@property(nonatomic) double phaseOutDuration; // @synthesize phaseOutDuration=_phaseOutDuration;
@property(nonatomic) double loopDuration; // @synthesize loopDuration=_loopDuration;
@property(nonatomic) double phaseInDuration; // @synthesize phaseInDuration=_phaseInDuration;
@property(nonatomic) double externalTime; // @synthesize externalTime=_externalTime;
@property(readonly, nonatomic) BOOL isInPhaseOut;
@property(readonly, nonatomic) BOOL isInPhaseIn;
@property(readonly, nonatomic) BOOL jumpedBackInTime;
@property(readonly) BOOL selfIsPaused;
@property(readonly, nonatomic) BOOL isPaused;
@property(readonly) BOOL _isPaused;
@property(nonatomic) BOOL parentIsPaused;
- (void)pauseAfter:(double)arg1;
- (void)resumeAfter:(double)arg1;
- (void)pauseOnNextUpdate;
- (void)resumeOnNextUpdate;
- (void)updateForExternalTime:(double)arg1;
@property(nonatomic) double fullDuration;
- (void)deactivate;
- (void)syncToPlug:(id)arg1;
- (void)reactivateWithPlug:(id)arg1;
- (id)initWithPlug:(id)arg1;

@end
