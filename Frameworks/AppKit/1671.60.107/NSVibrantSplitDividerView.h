//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSplitDividerView.h>

@class NSVisualEffectView;

__attribute__((visibility("hidden")))
@interface NSVibrantSplitDividerView : NSSplitDividerView
{
    NSSplitDividerView *_innerDividerView;
    NSVisualEffectView *_effectView;
}

- (id)_preferredAppearance;
@property long long blendingMode;
- (BOOL)allowsVibrancy;
- (BOOL)isOpaque;
- (void)updateLayer;
- (void)drawRect:(struct CGRect)arg1;
- (void)setThickness:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setStyle:(long long)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 orientation:(long long)arg2;

@end
