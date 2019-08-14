//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSButton, NSMutableArray;

@interface RUCollapsableView : NSView
{
    NSView *headerView;
    NSButton *expander;
    BOOL _expanded;
    struct CGSize _otherFrameSize;
    id _animationDelegate;
    NSMutableArray *_viewWithModifedResizeMasks;
    NSMutableArray *_savedResizeMasks;
}

+ (void)initialize;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1 animate:(BOOL)arg2;
- (void)setFrameSizeWithPinningToTopLeft:(struct CGSize)arg1;
- (struct CGRect)frameForNewSizePinnedToTopLeft:(struct CGSize)arg1;
- (void)setExpanded:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setExpanded:(BOOL)arg1;
- (BOOL)isExpanded;
- (id)animationDelegate;
- (void)setAnimationDelegate:(id)arg1;
- (BOOL)isFlipped;
- (void)collapse:(id)arg1;
- (void)expand:(id)arg1;
- (void)toggleExpanded:(id)arg1;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initAddedProperties;

@end
