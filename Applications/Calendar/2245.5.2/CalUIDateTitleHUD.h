//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import "NSAnimationDelegate-Protocol.h"

@class CalUIDateTitleHUDContainer, CalUIFontSmoothedTextLayer, CalUILayerOpacityAnimation, NSString;
@protocol CalUIDateTitleHUDDelegate;

@interface CalUIDateTitleHUD : CALayer <NSAnimationDelegate>
{
    CALayer *_anchorLayer;
    double _dateBannerHeight;
    CalUIFontSmoothedTextLayer *_textLayer;
    CalUIDateTitleHUDContainer *_containerLayer;
    id <CalUIDateTitleHUDDelegate> _hudDelegate;
    CalUILayerOpacityAnimation *_animation;
}

@property(retain) CalUILayerOpacityAnimation *animation; // @synthesize animation=_animation;
@property __weak id <CalUIDateTitleHUDDelegate> hudDelegate; // @synthesize hudDelegate=_hudDelegate;
@property __weak CalUIDateTitleHUDContainer *containerLayer; // @synthesize containerLayer=_containerLayer;
@property(retain) CalUIFontSmoothedTextLayer *textLayer; // @synthesize textLayer=_textLayer;
@property double dateBannerHeight; // @synthesize dateBannerHeight=_dateBannerHeight;
@property __weak CALayer *anchorLayer; // @synthesize anchorLayer=_anchorLayer;
- (void).cxx_destruct;
- (void)enableAnimations:(BOOL)arg1;
- (void)updateContentsFromContainer;
- (void)prepareTitleAndBackground;
- (double)topInsetFromAnchor;
- (void)setShown:(BOOL)arg1;
- (BOOL)isShown;
- (void)setOrigin:(struct CGPoint)arg1;
- (void)windowDidChangeBackingProperties:(id)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)_cancelOpacityAnimation;
- (void)dealloc;
- (id)initWithAnchorLayer:(id)arg1 containerLayer:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
