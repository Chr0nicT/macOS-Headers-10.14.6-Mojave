//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSFont, NSImage, NSSegmentItem, NSSegmentItemBezelView, NSSegmentItemImageView, NSSegmentItemLabelView, NSSegmentedCell, NSString, NSUserInterfaceCompressionOptions;

__attribute__((visibility("hidden")))
@interface NSSegmentItemView : NSView
{
    NSSegmentedCell *_parentCell;
    NSSegmentItem *_segmentItemData;
    unsigned long long _controlSize;
    long long _segmentStyle;
    NSSegmentItemBezelView *_bezelView;
    NSSegmentItemLabelView *_labelView;
    NSSegmentItemImageView *_imageView;
    NSSegmentItemImageView *_menuIndicatorView;
    NSColor *_bezelTintColor;
    double _segmentWidth;
    struct CGSize _labelSize;
    BOOL _drawsBezel;
    BOOL _enabled;
    BOOL _highlighted;
    BOOL _emphasized;
    BOOL _rollover;
    BOOL _active;
    BOOL _selected;
    BOOL _leadingCap;
    BOOL _trailingCap;
    BOOL _leadingSeparator;
    BOOL _trailingSeparator;
    BOOL _leadingSegmentSelected;
    BOOL _trailingSegmentSelected;
    BOOL _showMenuIndicator;
    unsigned long long _alignment;
    NSUserInterfaceCompressionOptions *_compressibleOptions;
    BOOL _isObserving;
}

@property NSUserInterfaceCompressionOptions *compressibleOptions; // @synthesize compressibleOptions=_compressibleOptions;
@property unsigned long long alignment; // @synthesize alignment=_alignment;
@property BOOL trailingSegmentSelected; // @synthesize trailingSegmentSelected=_trailingSegmentSelected;
@property BOOL leadingSegmentSelected; // @synthesize leadingSegmentSelected=_leadingSegmentSelected;
@property BOOL trailingSeparator; // @synthesize trailingSeparator=_trailingSeparator;
@property BOOL leadingSeparator; // @synthesize leadingSeparator=_leadingSeparator;
@property BOOL trailingCap; // @synthesize trailingCap=_trailingCap;
@property BOOL leadingCap; // @synthesize leadingCap=_leadingCap;
@property BOOL selected; // @synthesize selected=_selected;
@property BOOL active; // @synthesize active=_active;
@property BOOL rollover; // @synthesize rollover=_rollover;
@property BOOL emphasized; // @synthesize emphasized=_emphasized;
@property BOOL highlighted; // @synthesize highlighted=_highlighted;
@property BOOL enabled; // @synthesize enabled=_enabled;
@property long long segmentStyle; // @synthesize segmentStyle=_segmentStyle;
@property unsigned long long controlSize; // @synthesize controlSize=_controlSize;
@property double segmentWidth; // @synthesize segmentWidth=_segmentWidth;
@property(copy) NSColor *bezelTintColor; // @synthesize bezelTintColor=_bezelTintColor;
@property __weak NSSegmentItem *segmentItemData; // @synthesize segmentItemData=_segmentItemData;
@property BOOL drawsBezel; // @synthesize drawsBezel=_drawsBezel;
@property __weak NSSegmentedCell *parentCell; // @synthesize parentCell=_parentCell;
- (void).cxx_destruct;
- (id)_preferredAppearanceForSegmentLabelView:(id)arg1;
- (id)_preferredAppearanceForSegmentImageView:(id)arg1;
- (int)_vibrancyBlendModeForSegmentLabelView:(id)arg1 proposedBlendMode:(int)arg2;
- (int)_vibrancyBlendModeForSegmentImageView:(id)arg1 proposedBlendMode:(int)arg2;
- (int)_vibrancyBlendModeForSegmentBezelView:(id)arg1 proposedBlendMode:(int)arg2;
- (int)_vibrancyBlendMode;
- (void)_updateBezelView;
- (struct CGSize)_labelSize;
- (void)_updateLabelState;
@property(retain) NSFont *font;
- (void)setLabelView:(id)arg1;
- (id)labelView;
@property(readonly) struct CGRect labelRect;
@property(copy) NSString *label;
@property BOOL showMenuIndicator; // @synthesize showMenuIndicator=_showMenuIndicator;
- (void)_updateImageState;
@property unsigned long long imageScaling;
- (void)setImageRect:(struct CGRect)arg1;
@property(readonly) struct CGRect imageRect;
@property(retain) NSImage *image;
- (void)layout;
- (struct NSEdgeInsets)_segmentAlignmentRectInsets;
- (double)lastBaselineOffsetFromBottom;
- (double)_availableTruncationWidth;
- (struct CGSize)_preferredSegmentSize;
- (struct CGSize)_minimumSegmentSize;
- (struct CGSize)_minimumSegmentSizeWithOptions:(id)arg1;
- (double)minimumLabelWidth;
- (double)contentPadding;
- (double)contentSpacing;
- (id)_requestMetrics:(id)arg1;
- (id)_coreUIOptions;
- (id)_coreUISegmentPosition;
- (id)_coreUIState;
- (BOOL)_isSeparatedSegmentStyle;
- (void)_updateContentState;
- (void)_windowDidOrderOnScreen;
- (void)viewDidMoveToWindow;
- (void)viewDidMoveToSuperview;
- (void)viewDidChangeEffectiveAppearance;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObserving;
- (void)_setupObserving;
- (void)dealloc;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityChildrenAttribute;
- (BOOL)isAccessibilityElement;
- (id)initWithFrame:(struct CGRect)arg1;

@end
