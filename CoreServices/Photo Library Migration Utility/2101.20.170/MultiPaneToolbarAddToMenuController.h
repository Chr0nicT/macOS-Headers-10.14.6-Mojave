//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class IPKPopOverMenu, NSArray;

@interface MultiPaneToolbarAddToMenuController : NSObject
{
    NSArray *_addToPopoverMenuItems;
    IPKPopOverMenu *_addToPopoverMenu;
}

- (void)addSelection:(struct IPSelectionList *)arg1 toAlbumWithUID:(id)arg2;
- (id)thumbnailForAlbum:(id)arg1;
- (void)showPhotostreamPopOverMenu:(id)arg1;
- (void)showCalendarsPopOverMenu:(id)arg1;
- (void)showCardsPopOverMenu:(id)arg1;
- (void)showBooksPopOverMenu:(id)arg1;
- (struct IPAlbumList *)_populatePopOverMenu:(id)arg1 withProjectAlbumsOfType:(int)arg2 onlyUpgraded:(BOOL)arg3 title:(id)arg4;
- (void)showSlideshowPopOverMenu:(id)arg1;
- (void)showAlbumsPopOverMenu:(id)arg1;
- (void)configurePopoverMenuForSecondLevel:(id)arg1 items:(id)arg2 title:(id)arg3 extraBig:(BOOL)arg4;
- (void)_addAlbums:(struct IPAlbumList *)arg1 toMenuItems:(id)arg2;
- (void)returnToAddToMenu:(id)arg1;
- (id)createNewSmartAlbumMenuItem;
- (id)createNewSlideshowMenuItem;
- (id)createNewAlbumMenuItem;
- (id)addToGridViewItems;
- (void)dealloc;
- (struct IPAlbumList *)allKeepsakeAlbumsOfType:(int)arg1 onlyUpgraded:(BOOL)arg2;
- (void)_createNewSmartAlbum;
- (void)_redoCreateNewAlbum:(id)arg1 fromPhotoList:(id)arg2;
- (void)_undoCreateNewContainer:(id)arg1 fromPhotoList:(id)arg2;
- (id)_createNewContainerInDB:(id)arg1 withName:(id)arg2 ofType:(int)arg3 fromPhotoList:(struct IPPhotoList *)arg4 beforeIndex:(int)arg5;
- (id)_createNewContainer:(id)arg1 ofType:(int)arg2 fromSelection:(struct IPSelectionList *)arg3;
- (void)addToAlbum:(id)arg1;
- (void)_addToAlbum:(id)arg1 fromSelection:(struct IPSelectionList *)arg2;

@end
