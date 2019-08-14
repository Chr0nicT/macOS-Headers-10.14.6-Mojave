//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "DisappearingWindow.h"

@interface HUDWindow : DisappearingWindow
{
    BOOL _isFadingOut;
    BOOL _canBecomeKeyWindow;
    BOOL _canBecomeMainWindow;
}

+ (id)HUDWindowWithContentRect:(struct CGRect)arg1 title:(id)arg2 delegate:(id)arg3 showMenu:(BOOL)arg4 showClose:(BOOL)arg5;
- (void)sendEvent:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)fadeClosed;
- (void)setIsHUDFadingOut:(BOOL)arg1;
- (void)setCanBecomeMainWindow:(BOOL)arg1;
- (BOOL)canBecomeMainWindow;
- (BOOL)isExcludedFromWindowsMenu;
- (void)invalidateShadow;
- (BOOL)hasCloseButton;
- (BOOL)canBecomeKeyWindow;
- (void)setCanBecomeKeyWindow:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (id)backgroundColor;
- (id)view;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4 type:(int)arg5;

@end
