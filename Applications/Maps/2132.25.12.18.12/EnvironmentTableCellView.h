//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class EnvironmentsWindowController, GEOEnvironmentInfo, NSArray, NSButton, NSImageView, NSProgressIndicator, NSTextField;

__attribute__((visibility("hidden")))
@interface EnvironmentTableCellView : NSTableCellView
{
    NSButton *_radioButton;
    NSTextField *_titleLabel;
    NSTextField *_subtitleLabel;
    NSProgressIndicator *_progressIndicator;
    NSImageView *_errorImageView;
    NSArray *_noReleaseInfoConstraints;
    NSArray *_releaseInfoConstraints;
    NSArray *_progressIndicatorVisibleConstraints;
    NSArray *_errorConstraints;
    EnvironmentsWindowController *_environmentsWindowController;
    GEOEnvironmentInfo *_environment;
}

@property(retain, nonatomic) GEOEnvironmentInfo *environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
- (void)makeActive:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2;

@end
