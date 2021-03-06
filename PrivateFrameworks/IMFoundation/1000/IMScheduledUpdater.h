//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IMFoundation/IMManualUpdater.h>

@class NSCountedSet;

@interface IMScheduledUpdater : IMManualUpdater
{
    NSCountedSet *_holdingUpdatesKeys;
}

@property(retain, nonatomic) NSCountedSet *holdingUpdatesKeys; // @synthesize holdingUpdatesKeys=_holdingUpdatesKeys;
- (void)invalidate;
- (BOOL)isHoldingUpdatesForKey:(id)arg1;
- (BOOL)isHoldingUpdates;
- (void)endHoldingUpdatesForAllKeys;
- (void)endHoldingUpdatesForKey:(id)arg1;
- (void)beginHoldingUpdatesForKey:(id)arg1;
- (void)updateIfNeeded;
- (void)setNeedsUpdate;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)description;
- (void)dealloc;

@end

