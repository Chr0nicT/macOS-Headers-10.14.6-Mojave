//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/GEOETAUpdater.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface MNTracePlayerETAUpdater : GEOETAUpdater
{
    NSTimer *_delayTimer;
}

- (void).cxx_destruct;
- (void)requestUpdate;
- (void)startUpdateRequests;
- (void)reset;
- (void)_timerFiredWithResponse:(id)arg1 currentStep:(id)arg2 percentOfStepRemaining:(double)arg3 error:(id)arg4;
- (void)playETAUpdate:(id)arg1;
- (void)dealloc;

@end
