//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class MTTimer, NSArray;
@protocol MTSource;

@protocol MTTimerObserver <NSObject>
- (void)nextTimerDidChange:(MTTimer *)arg1;
- (void)source:(id <MTSource>)arg1 didDismissTimer:(MTTimer *)arg2;
- (void)source:(id <MTSource>)arg1 didFireTimer:(MTTimer *)arg2;
- (void)source:(id <MTSource>)arg1 didRemoveTimers:(NSArray *)arg2;
- (void)source:(id <MTSource>)arg1 didUpdateTimers:(NSArray *)arg2;
- (void)source:(id <MTSource>)arg1 didAddTimers:(NSArray *)arg2;
@end
