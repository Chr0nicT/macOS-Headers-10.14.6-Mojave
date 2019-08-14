//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXTilingLayout.h>

@class IPXTilingControllerDataSource, NSNumber;
@protocol IPXTilingScrubberLayoutDelegate;

@interface IPXTilingScrubberLayout : PXTilingLayout
{
    struct CGRect _contentBounds;
    BOOL _invalidationHasAnimation;
    BOOL _animationEnabled;
    BOOL _needsLayout;
    BOOL _isScrolling;
    BOOL _hasTouches;
    BOOL _hasSelectionTile;
    BOOL _avInProgress;
    long long _anchorTileIndex;
    IPXTilingControllerDataSource *_dataSource;
    double _aspectRatio;
    double _spacing;
    double _interItemSpacing;
    id _anchorTileIdentifier;
    long long _avExpansionState;
    NSNumber *_expandedVideoItemIndex;
    id <IPXTilingScrubberLayoutDelegate> _delegate;
    struct CGSize _itemSize;
}

+ (struct PXTileIdentifier)selectionTileIdentifier;
+ (struct PXTileIdentifier)composeTileIdentifierFromItemIndexPath:(id)arg1 dataSourceIdentifier:(unsigned long long)arg2 tileKind:(long long)arg3;
+ (void)decomposeTileIdentifier:(struct PXTileIdentifier)arg1 intoItemIndexPath:(id *)arg2 dataSourceIdentifier:(unsigned long long *)arg3 tileKind:(long long *)arg4;
@property(nonatomic) __weak id <IPXTilingScrubberLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSNumber *expandedVideoItemIndex; // @synthesize expandedVideoItemIndex=_expandedVideoItemIndex;
@property(nonatomic) BOOL avInProgress; // @synthesize avInProgress=_avInProgress;
@property(nonatomic) long long avExpansionState; // @synthesize avExpansionState=_avExpansionState;
@property(nonatomic) BOOL hasSelectionTile; // @synthesize hasSelectionTile=_hasSelectionTile;
@property(retain, nonatomic) id anchorTileIdentifier; // @synthesize anchorTileIdentifier=_anchorTileIdentifier;
@property(readonly, nonatomic) BOOL hasTouches; // @synthesize hasTouches=_hasTouches;
@property(readonly, nonatomic) BOOL isScrolling; // @synthesize isScrolling=_isScrolling;
@property(nonatomic) double interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) __weak IPXTilingControllerDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)scrubberDidEndScrolling;
- (void)scrubberWillEndScrollingAtItemId:(id)arg1;
- (void)scrubberPrepareForScrollCalculation;
- (struct CGPoint)preferredTargetForContentOffset:(struct CGPoint)arg1;
- (void)scrubberDidScrollWithContentOffset:(double)arg1;
- (void)scrubberWillBeginScrolling;
- (void)scrubberWillScrollToPosition:(double)arg1;
- (void)scrubberWillScrollToItem:(id)arg1;
- (void)scrubberDidSelectItem:(id)arg1 animate:(BOOL)arg2;
- (void)scrubberTouchesEnded;
- (void)scrubberTouchesBegan;
- (BOOL)allowHorizontalFlip;
- (id)indexPathForItemAtIndex:(long long)arg1;
- (long long)tileCount;
- (struct CGPoint)scrollPointForItemIdentifier:(id)arg1;
- (struct CGPoint)anchorPoint;
- (BOOL)isAtValidScrollPoint;
- (struct PXTileGeometry)geometryAtPoint:(struct CGPoint)arg1;
- (id)identifierAtRect:(struct CGRect)arg1 progress:(double *)arg2;
- (id)identifierContainedInRect:(struct CGRect)arg1;
- (id)identifierAtPoint:(struct CGPoint)arg1 progress:(double *)arg2;
- (id)identifierClosestToPoint:(struct CGPoint)arg1;
- (struct PXTileGeometry)geometryForItemIdentifier:(id)arg1;
- (struct CGPoint)clipWithinActiveRect:(struct CGPoint)arg1;
- (BOOL)getGeometry:(struct PXTileGeometry *)arg1 group:(unsigned long long *)arg2 userData:(id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)initialVisibleRectWithSeedItemIdentifier:(id)arg1;
- (void)invalidateLayoutWithContext:(id)arg1 animate:(BOOL)arg2;
- (void)invalidateLayoutWithContext:(id)arg1;
@property(nonatomic) BOOL animationEnabled; // @synthesize animationEnabled=_animationEnabled;
- (void)invalidateTiles:(BOOL)arg1;
@property(readonly, nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
- (void)_invalidateItemSize;
- (void)prepareLayout;
- (struct CGRect)rectForSelectionItemWithUserData:(out id *)arg1;
- (struct CGRect)rectForItemAtIndex:(long long)arg1;
- (void)setContentBounds:(struct CGRect)arg1;
- (void)updateContentBounds;
@property(readonly, nonatomic) BOOL needsLayout; // @synthesize needsLayout=_needsLayout;
- (long long)tileKindForTileIdentifier:(struct PXTileIdentifier)arg1;
- (id)itemIdentifierForTileIdentifier:(struct PXTileIdentifier)arg1;
@property(readonly, nonatomic) long long anchorTileIndex; // @synthesize anchorTileIndex=_anchorTileIndex;
- (void)setReferenceSize:(struct CGSize)arg1;
@property(readonly, nonatomic) BOOL itemsShouldCrossfadeDuringResize;
@property(readonly, nonatomic) double animationDuration;
- (struct CGRect)contentBounds;
- (id)init;

@end
