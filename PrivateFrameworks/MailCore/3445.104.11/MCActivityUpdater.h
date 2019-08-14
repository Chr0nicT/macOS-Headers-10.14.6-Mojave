//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MCActivityMonitor, NSProgress;

@interface MCActivityUpdater : NSObject
{
    BOOL _valid;
    MCActivityMonitor *_monitor;
    NSProgress *_progress;
}

@property(nonatomic) BOOL valid; // @synthesize valid=_valid;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) MCActivityMonitor *monitor; // @synthesize monitor=_monitor;
- (void).cxx_destruct;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;
- (id)initWithMonitor:(id)arg1 progress:(id)arg2;

@end
