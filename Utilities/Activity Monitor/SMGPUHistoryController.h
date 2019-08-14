//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSplitView, NSTimer, NSWindow, SMGPUMonitor;

@interface SMGPUHistoryController : NSObject
{
    NSWindow *_gpuHistoryWindow;
    NSSplitView *_gpuHistorySplitView;
    NSTimer *_gpuUpdateTimer;
    double _gpuSampleInterval;
    NSArray *_gpuHistoryNibObjects;
    SMGPUMonitor *_gpuMonitor;
}

@property(retain) SMGPUMonitor *gpuMonitor; // @synthesize gpuMonitor=_gpuMonitor;
@property(retain) NSArray *gpuHistoryNibObjects; // @synthesize gpuHistoryNibObjects=_gpuHistoryNibObjects;
@property double gpuSampleInterval; // @synthesize gpuSampleInterval=_gpuSampleInterval;
@property(retain) NSTimer *gpuUpdateTimer; // @synthesize gpuUpdateTimer=_gpuUpdateTimer;
@property(retain) NSSplitView *gpuHistorySplitView; // @synthesize gpuHistorySplitView=_gpuHistorySplitView;
@property(retain) NSWindow *gpuHistoryWindow; // @synthesize gpuHistoryWindow=_gpuHistoryWindow;
- (void).cxx_destruct;
- (void)preferencesChanged;
- (void)loadGPUHistoryPanel;
- (void)resetHistoryViews;
- (void)setSampleInterval:(unsigned long long)arg1;
- (void)windowWillClose:(id)arg1;
- (void)updateGraph;
- (void)showGPUHistoryPanel:(id)arg1;
- (void)awakeFromNib;
- (id)init;

@end
