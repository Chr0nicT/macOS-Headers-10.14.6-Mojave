//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCollectionView.h>

@class AKGridViewController;

@interface AKGridView : NSCollectionView
{
    BOOL _itemsAllowDrag;
    BOOL _itemsShowSelection;
    AKGridViewController *_gridViewController;
}

@property BOOL itemsShowSelection; // @synthesize itemsShowSelection=_itemsShowSelection;
@property BOOL itemsAllowDrag; // @synthesize itemsAllowDrag=_itemsAllowDrag;
@property __weak AKGridViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
- (void).cxx_destruct;
- (void)selectAll:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)removeAllTrackingAreas;
- (struct CGPoint)mousePositionInView;
- (id)newItemForRepresentedObject:(id)arg1;
- (void)viewWillMoveToSuperview:(id)arg1;

@end
