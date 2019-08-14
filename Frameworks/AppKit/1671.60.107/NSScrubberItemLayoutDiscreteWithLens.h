//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSScrubberItemLayoutDiscrete.h>

#import <AppKit/NSScrubberItemLayout-Protocol.h>

@class NSScrubberLayout, NSString;

__attribute__((visibility("hidden")))
@interface NSScrubberItemLayoutDiscreteWithLens : NSScrubberItemLayoutDiscrete <NSScrubberItemLayout>
{
    struct CGSize _lensThreshold;
}

@property struct CGSize selectionLensThreshold; // @synthesize selectionLensThreshold=_lensThreshold;
@property(readonly) BOOL wantsTrackingPosition;
- (void)_updateAttributes:(id)arg1 forLensWithState:(CDStruct_99688279)arg2 inView:(id)arg3;
- (BOOL)_wantsLensForState:(CDStruct_99688279)arg1;
- (id)itemLayoutAttributesForItemAtIndex:(long long)arg1 withState:(CDStruct_99688279)arg2 inView:(id)arg3;
- (id)itemLayoutAttributesForState:(CDStruct_99688279)arg1 inView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) NSScrubberLayout *scrubberLayout;
@property(readonly) Class superclass;

@end
