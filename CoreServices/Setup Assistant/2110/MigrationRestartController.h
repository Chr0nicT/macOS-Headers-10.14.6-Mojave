//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MigrationMacBuddyViewController.h"

@class NSString, NSTimer;

@interface MigrationRestartController : MigrationMacBuddyViewController
{
    unsigned long long remainingSeconds;
    BOOL _updateRestart;
    NSString *countdownText;
    NSString *postRestartText;
    NSTimer *_restartTimer;
}

@property(getter=isUpdateRestart) BOOL updateRestart; // @synthesize updateRestart=_updateRestart;
@property(retain) NSTimer *restartTimer; // @synthesize restartTimer=_restartTimer;
@property(retain) NSString *postRestartText; // @synthesize postRestartText;
@property(retain) NSString *countdownText; // @synthesize countdownText;
- (void).cxx_destruct;
- (void)restartNow:(id)arg1;
- (void)restartConfirmationTimerDidFire:(id)arg1;
- (void)didBecomeVisible;
- (void)willBecomeVisible;
- (void)backwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end
