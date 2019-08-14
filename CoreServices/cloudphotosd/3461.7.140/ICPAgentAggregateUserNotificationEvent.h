//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ICPAgentUserNotificationEvent.h"

@class NSMutableArray, NSTimer;

@interface ICPAgentAggregateUserNotificationEvent : ICPAgentUserNotificationEvent
{
    NSMutableArray *_events;
    NSTimer *_timer;
}

+ (id)eventWithUserNotificationManager:(id)arg1 serviceIdentifier:(id)arg2;
@property(retain) NSTimer *timer; // @synthesize timer=_timer;
@property(retain) NSMutableArray *events; // @synthesize events=_events;
- (void).cxx_destruct;
- (void)reset;
- (id)matchingKey;
- (BOOL)isAggregateEvent;
- (void)timerFired:(id)arg1;
- (void)addEvents:(id)arg1;
- (void)dealloc;
- (id)initWithUserNotificationManager:(id)arg1 serviceIdentifier:(id)arg2;

@end
