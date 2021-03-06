//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class AMSStreamChannelData, NSString;

@interface AMSStreamControlCellView : NSTableCellView
{
    AMSStreamChannelData *data;
    NSString *notificationName;
}

- (void).cxx_destruct;
- (void)updateValue;
- (void)updateValueForNotification:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)prepareForReuse;
- (void)setChannelData:(id)arg1 notificationName:(id)arg2;
- (void)setChannelData:(id)arg1;

@end

