//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSConditionLock, NSMutableArray, NSThread;

@interface TTShellReaper : NSObject
{
    NSMutableArray *_shellArray;
    NSThread *_thread;
    NSConditionLock *_conditionLock;
}

+ (id)sharedReaper;
- (void)grimReaper;
- (void)wait;
- (void)reapShellsInArray:(id)arg1;
- (void)reapShell:(id)arg1;
- (void)dealloc;
- (id)init;

@end
