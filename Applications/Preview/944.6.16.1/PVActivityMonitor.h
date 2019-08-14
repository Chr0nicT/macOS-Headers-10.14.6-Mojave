//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSLayoutConstraint, NSProgressIndicator, NSString, NSTextField;

@interface PVActivityMonitor : NSWindowController
{
    NSButton *_cancelButton;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_operationText;
    NSTextField *_statusText;
    NSString *_activityName;
    id _cancelDelegate;
    void *_delegateContext;
    BOOL _canCancel;
    BOOL _isIndeterminate;
    NSString *_operationTextString;
    NSString *_statusTextString;
    double _percentDone;
    long long _currentPhase;
    long long _phaseCount;
    NSLayoutConstraint *_cancelButtonTrailingConstraint;
}

@property(retain) NSLayoutConstraint *cancelButtonTrailingConstraint; // @synthesize cancelButtonTrailingConstraint=_cancelButtonTrailingConstraint;
- (void).cxx_destruct;
- (void)cancelAction:(id)arg1;
- (void)setCurrentPhase:(long long)arg1;
- (long long)currentPhase;
- (void)setPhaseCount:(long long)arg1;
- (long long)phaseCount;
- (void)setPercentDone:(double)arg1;
- (double)percentDone;
- (void)setStatusText:(id)arg1;
- (id)statusText;
- (void)setOperationText:(id)arg1;
- (id)operationText;
- (void)setIndeterminate:(BOOL)arg1;
- (BOOL)isIndeterminate;
- (void)setCanCancel:(BOOL)arg1;
- (BOOL)canCancel;
- (void)windowDidLoad;
- (void)awakeFromNib;
- (id)initWithActivityName:(id)arg1 cancelDelegate:(id)arg2 cancelContext:(void *)arg3;

@end
