//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

__attribute__((visibility("hidden")))
@interface FI_TAnimationLayer : NSView
{
    _Bool _selected;
    int _actionKind;
    struct CGRect _clipRect;
}

@property(nonatomic) struct CGRect clipRect; // @synthesize clipRect=_clipRect;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect)arg1 action:(int)arg2;

@end

