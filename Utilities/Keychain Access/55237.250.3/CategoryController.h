//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ItemListController, NSMutableAttributedString, NSOutlineView;

@interface CategoryController : NSObject
{
    ItemListController *_itemListController;
    NSOutlineView *_outlineView;
    NSMutableAttributedString *_cellValue;
    long long _lastSelectedCategory;
}

- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)refreshKeychainItems;
- (void)selectLastSelectedCategory;
- (id)getCurrentViewingCategory;
- (long long)selectedCategoryRow;
- (void)saveLastSelectedCategory;
- (void)awakeFromNib;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (void)dealloc;
- (id)init;

@end
