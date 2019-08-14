//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UXKit/UXBarButtonItem.h>

#import "IPXGlobalProgressWatcherDelegate-Protocol.h"
#import "PFWorkContextStatusUpdateReceiver-Protocol.h"

@class IPXGlobalProgressIndicatorView, IPXGlobalProgressView, NSDate, NSString, PFBlockControl;

@interface IPXGlobalProgressButtonItem : UXBarButtonItem <IPXGlobalProgressWatcherDelegate, PFWorkContextStatusUpdateReceiver>
{
    IPXGlobalProgressIndicatorView *_progressIndicator;
    PFBlockControl *_delayShowingProgressControl;
    NSDate *_delayShowingProgressStartTime;
    double _displayDelay;
    IPXGlobalProgressView *_progressView;
}

@property(readonly, nonatomic) IPXGlobalProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) double displayDelay; // @synthesize displayDelay=_displayDelay;
- (void).cxx_destruct;
- (void)changeDisplayDelay:(double)arg1;
- (void)progressUpdateWithProgressValue:(double)arg1 accessibilityLabel:(id)arg2;
- (void)delayShowingProgressControl;
- (void)hasProgressContexts:(BOOL)arg1;
- (void)progressIndicatorClick:(id)arg1;
- (void)setupProgressIndicator;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
