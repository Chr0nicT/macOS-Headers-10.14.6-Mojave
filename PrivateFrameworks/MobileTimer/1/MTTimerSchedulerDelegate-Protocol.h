//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class MTScheduledObject, MTTimer, MTTimerScheduler;

@protocol MTTimerSchedulerDelegate <NSObject>
- (void)scheduler:(MTTimerScheduler *)arg1 didFireTimer:(MTScheduledObject *)arg2;
- (void)scheduler:(MTTimerScheduler *)arg1 didChangeNextTimer:(MTTimer *)arg2;
@end

