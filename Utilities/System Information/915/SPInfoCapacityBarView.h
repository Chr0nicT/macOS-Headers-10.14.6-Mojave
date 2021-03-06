//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSAccessibilityGroup-Protocol.h"

@class NSArray, NSMutableArray, NSString, SPInfoCapacityBarPopover;

@interface SPInfoCapacityBarView : NSView <NSAccessibilityGroup>
{
    SPInfoCapacityBarPopover *_pop;
    NSMutableArray *_categories;
    NSString *_accessibilityLabel;
    BOOL _isOverlay;
    BOOL _isTimeMachineDisk;
    BOOL _isBootDisk;
    BOOL _isCalculating;
    unsigned long long _capacity;
    unsigned long long _bytesUsed;
    unsigned long long _purgeable;
    unsigned long long _otherData;
    NSArray *_displayCategories;
}

@property(retain) NSArray *displayCategories; // @synthesize displayCategories=_displayCategories;
@property BOOL isCalculating; // @synthesize isCalculating=_isCalculating;
@property BOOL isBootDisk; // @synthesize isBootDisk=_isBootDisk;
@property BOOL isTimeMachineDisk; // @synthesize isTimeMachineDisk=_isTimeMachineDisk;
@property unsigned long long otherData; // @synthesize otherData=_otherData;
@property unsigned long long purgeable; // @synthesize purgeable=_purgeable;
@property unsigned long long bytesUsed; // @synthesize bytesUsed=_bytesUsed;
@property unsigned long long capacity; // @synthesize capacity=_capacity;
@property(retain) NSArray *categories; // @synthesize categories=_categories;
@property BOOL isOverlay; // @synthesize isOverlay=_isOverlay;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setTrackingAreas:(id)arg1;
- (id)elementForRect:(struct CGRect)arg1 withName:(id)arg2;
- (id)trackingRect:(struct CGRect)arg1 forCategory:(id)arg2;
- (void)cancelHidePopover;
- (void)hidePopover;
- (void)doHidePopover:(id)arg1;
- (void)crosshatchRect:(struct CGRect)arg1 withColor:(id)arg2;
- (BOOL)isFlipped;
- (void)dealloc;
- (void)awakeFromNib;
- (id)coalescedCategories;
- (void)setCategoryData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

