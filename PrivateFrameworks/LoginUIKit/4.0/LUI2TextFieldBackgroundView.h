//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSVisualEffectView.h>

@class LUI2DarkenView, LUI2TintView;

@interface LUI2TextFieldBackgroundView : NSVisualEffectView
{
    LUI2TintView *_tintView;
    LUI2DarkenView *_darkenView;
}

@property(retain) LUI2DarkenView *darkenView; // @synthesize darkenView=_darkenView;
@property(readonly) LUI2TintView *tintView; // @synthesize tintView=_tintView;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateLayer;
- (void)addSubview:(id)arg1;
- (void)_setupTextFieldBackgroundView;

@end
