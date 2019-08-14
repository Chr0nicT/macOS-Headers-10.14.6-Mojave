//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTabViewItem.h>

#import "NSAccessibilityElement-Protocol.h"
#import "NSAnimationDelegate-Protocol.h"

@class NSCell, NSImage, NSImageView, NSProgressIndicator, NSString, NSTextField, NSTextFieldCell, TTAXTabCloseButton, TTTabAlertAnimation, TTTabController;

@interface TTTabViewItem : NSTabViewItem <NSAnimationDelegate, NSAccessibilityElement>
{
    TTTabController *tabController;
    NSImage *_alertImage;
    NSCell *_alertImageCell;
    unsigned long long _labelTruncation;
    NSString *_prefixLabel;
    NSTextFieldCell *_labelCell;
    NSTextFieldCell *_prefixLabelCell;
    NSString *_statusLabel;
    NSTextFieldCell *_statusLabelCell;
    NSProgressIndicator *_progressIndicator;
    NSProgressIndicator *_progressIndicator2;
    NSImageView *_alertImageView;
    NSTextField *_statusField;
    BOOL _isBusy;
    BOOL _isDirty;
    BOOL _isUnread;
    NSImage *_animationImage;
    TTTabAlertAnimation *_alertAnimation;
    TTAXTabCloseButton *_axTabCloseButton;
    struct CGRect _rect;
    struct CGRect _closeRect;
    struct CGRect _alertRect;
    BOOL _alertEnabled;
    BOOL _isBeingDraggedFromOutside;
    BOOL _willDisableAlert;
    BOOL _showCloseImage;
    BOOL _isClosing;
    BOOL _willClose;
    BOOL _isOffScreen;
    float _closingProgress;
    float _closeOpacity;
    BOOL _isTabHighlighted;
    BOOL _isTabHighlightedMore;
    BOOL _isBeingDragged;
    BOOL _isBeingReordered;
    BOOL _isSpringingBack;
    float _alertFadingProgress;
    float _reorderProgress;
    float _springBackProgress;
    int _reorderState;
    long long _toolTipTag;
    BOOL _isSlidingInTabBar;
    float _trailingMargin;
}

@property(getter=isTabHighlightedMore) BOOL tabHighlightedMore; // @synthesize tabHighlightedMore=_isTabHighlightedMore;
@property float trailingMargin; // @synthesize trailingMargin=_trailingMargin;
@property(retain, nonatomic) NSString *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) NSString *prefixLabel; // @synthesize prefixLabel=_prefixLabel;
@property(nonatomic) unsigned long long labelTruncation; // @synthesize labelTruncation=_labelTruncation;
@property(nonatomic, getter=isUnread) BOOL unread; // @synthesize unread=_isUnread;
@property(nonatomic, getter=isDirty) BOOL dirty; // @synthesize dirty=_isDirty;
@property(nonatomic, getter=isBusy) BOOL busy; // @synthesize busy=_isBusy;
@property(retain) TTTabController *tabController; // @synthesize tabController;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityChildren;
- (id)accessibilityTitle;
- (void)darkenMoreCloseImage;
- (void)darkenCloseImage;
- (void)lightenCloseImage;
- (void)darkenTab;
- (void)lightenTab;
- (void)enableAlert;
- (void)disableAlert;
- (BOOL)isSlidingInTabBar;
- (void)setIsSlidingInTabBar:(BOOL)arg1;
- (struct CGRect)closeRect;
- (struct CGRect)rect;
- (BOOL)isBeingDraggedFromOutside;
- (void)setIsBeingDraggedFromOutside:(BOOL)arg1;
- (void)setShowCloseImage:(BOOL)arg1;
- (void)setAnimationImage:(id)arg1;
- (void)setAlertImage:(id)arg1;
- (float)alertFadingProgress;
- (void)setAlertFadingProgress:(float)arg1;
- (BOOL)alertEnabled;
- (BOOL)willClose;
- (void)setWillClose:(BOOL)arg1;
- (float)reorderProgress;
- (void)setReorderProgress:(float)arg1;
- (float)springBackProgress;
- (void)setSpringBackProgress:(float)arg1;
- (int)reorderState;
- (void)setReorderState:(int)arg1;
- (BOOL)isTabHighlighted;
- (BOOL)isOffScreen;
- (void)setIsOffScreen:(BOOL)arg1;
- (void)setIsBeingReordered:(BOOL)arg1;
- (void)setState:(unsigned long long)arg1;
- (BOOL)isSpringingBack;
- (float)closingProgress;
- (void)setIsSpringingBack:(BOOL)arg1;
- (BOOL)isBeingDragged;
- (void)setIsBeingDragged:(BOOL)arg1;
- (void)_updateAccessoryView;
- (void)_drawLabel:(struct CGRect)arg1;
- (void)setLabel:(id)arg1;
- (void)_drawUnreadStatusLabelAt:(struct CGPoint)arg1 withMaxWidth:(double)arg2 toImage:(id *)arg3;
- (BOOL)_drawStatusLabel:(id)arg1 at:(struct CGPoint)arg2 withMaxWidth:(double)arg3 toImage:(id *)arg4 largeFont:(BOOL)arg5;
- (void)_drawImage:(id)arg1 inRect:(struct CGRect)arg2 withOpacity:(float)arg3;
- (void)layoutForOverflowRect:(struct CGRect)arg1;
- (void)removeBusyIndicator;
- (void)removeToolTip;
- (void)drawTabViewItem:(struct CGRect)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)animationDidEnd:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
