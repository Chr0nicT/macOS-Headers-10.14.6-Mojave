//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INTimer, NSNumber;

@protocol INResumeTimerIntentExport <NSObject, JSExport>
@property(copy) NSNumber *resumeMultiple;
@property(copy) INTimer *targetTimer;
- (id)init;
@end

