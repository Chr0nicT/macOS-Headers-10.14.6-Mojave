//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class DelayedHoverButton, NSTrackingArea;

@interface DelayedHoverButtonTableCellView : NSTableCellView
{
    DelayedHoverButton *_button;
    NSTrackingArea *_trackingArea;
}

@property(retain) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain) DelayedHoverButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (BOOL)mouseInView;
- (void)updateButtonVisibility;
- (void)hideTransientButton;
- (void)showButton;
- (BOOL)buttonShouldNeverBeShown;
- (BOOL)buttonShouldAlwaysBeShown;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)buttonStateIsLocked;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)updateTrackingAreas;
- (void)addButton:(id)arg1;
- (void)dealloc;

@end
