//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MobileTimer/MTTimerIntentHandler.h>

#import <MobileTimer/INCreateTimerIntentHandling-Protocol.h>

@class NSString;

@interface MTCreateTimerIntentHandler : MTTimerIntentHandler <INCreateTimerIntentHandling>
{
}

- (BOOL)_timer:(id)arg1 conflictsWithRunningTimersInTimers:(id)arg2;
- (id)_responseToCreateTimerIntent:(id)arg1 withCreatedTimer:(id)arg2 error:(id)arg3 dryRun:(BOOL)arg4;
- (void)_createTimerWithIntent:(id)arg1 dryRun:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleCreateTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmCreateTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveDurationForCreateTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveLabelForCreateTimer:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
