//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class NSImage;

__attribute__((visibility("hidden")))
@interface NSCachedTableRowView : NSTableRowView
{
    NSImage *_cachedImage;
}

@property(retain) NSImage *cachedImage; // @synthesize cachedImage=_cachedImage;
- (Class)_animatorClass;
- (int)_trackingAreasDirty;
- (void)_setTrackingAreasDirty:(int)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setEmphasized:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)shouldSetFontSmoothingBackgroundColor;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (BOOL)isOpaque;
- (void)_cacheRowImageFromTableView;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
