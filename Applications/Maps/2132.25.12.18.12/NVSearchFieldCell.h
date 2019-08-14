//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Suggestions/SGTSearchFieldCell.h>

#import "NVDelayedSpinnerDelegate-Protocol.h"

@class NSString, NVDelayedSpinner;

__attribute__((visibility("hidden")))
@interface NVSearchFieldCell : SGTSearchFieldCell <NVDelayedSpinnerDelegate>
{
    BOOL _showsSpinner;
    NVDelayedSpinner *_spinner;
}

- (void).cxx_destruct;
- (void)updateSpinnerFrame;
- (void)spinnerStateChanged;
- (void)stopSpinner;
- (void)startSpinner;
- (struct CGRect)cancelButtonRectForBounds:(struct CGRect)arg1;
@property(retain) NVDelayedSpinner *spinner;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
