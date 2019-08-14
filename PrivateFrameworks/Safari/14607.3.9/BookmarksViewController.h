//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Safari/NSOutlineViewDataSource-Protocol.h>

@class BookmarksController, BookmarksSearcher, KeyLoopSplicingContainerView, NSBox, NSButton, NSLayoutConstraint, NSScrollView, NSSearchField, NSString, NSTableColumn, NSTextField, OutlineViewPlus, WBSFaviconRequestsController, WebBookmark;
@protocol BookmarksViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface BookmarksViewController : NSViewController <NSOutlineViewDataSource>
{
    NSLayoutConstraint *_mainContentViewTopConstraint;
    BOOL _draggingUndeletableBookmarks;
    BOOL _abortedDraggingBookmarks;
    BookmarksController *_bookmarksController;
    BookmarksSearcher *_searcher;
    NSTableColumn *_hiddenAddressColumn;
    BOOL _bookmarkChangeIsExpected;
    WBSFaviconRequestsController *_requestsController;
    id <BookmarksViewControllerDelegate> _delegate;
    WebBookmark *_selectedCollection;
    NSBox *_mainContentView;
    NSScrollView *_scrollView;
    OutlineViewPlus *_outlineView;
    NSTableColumn *_bookmarkColumn;
    NSButton *_contentModificationButton;
    NSSearchField *_searchField;
    NSTextField *_searchMatchesLabel;
    NSTextField *_titleField;
}

+ (void)setDraggedBookmarks:(id)arg1;
+ (id)dateVisitedColumnTitle;
+ (id)parentColumnTitle;
+ (id)historyPageTitle;
+ (id)bookmarksPageTitle;
+ (id)draggedBookmarks;
+ (float)bottomGradientHeight;
@property(nonatomic) __weak NSTextField *titleField; // @synthesize titleField=_titleField;
@property(nonatomic) __weak NSTextField *searchMatchesLabel; // @synthesize searchMatchesLabel=_searchMatchesLabel;
@property(nonatomic) __weak NSSearchField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) __weak NSButton *contentModificationButton; // @synthesize contentModificationButton=_contentModificationButton;
@property(nonatomic) __weak NSTableColumn *bookmarkColumn; // @synthesize bookmarkColumn=_bookmarkColumn;
@property(nonatomic) __weak OutlineViewPlus *outlineView; // @synthesize outlineView=_outlineView;
@property(nonatomic) __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak NSBox *mainContentView; // @synthesize mainContentView=_mainContentView;
@property(retain, nonatomic) WebBookmark *selectedCollection; // @synthesize selectedCollection=_selectedCollection;
@property(nonatomic) __weak id <BookmarksViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_instrumentUserDidActivateBookmark:(id)arg1 viaContextMenu:(BOOL)arg2;
- (long long)_numberOfFixedBookmarkFoldersInTopBookmark;
- (BOOL)_shouldDisplayBookmark:(id)arg1;
- (struct TabPlacementHint)tabPlacementHint;
- (BOOL)optionKeyDown;
- (BOOL)handleKeyDown:(id)arg1;
- (id)_bookmarksUndoController;
- (void)_setSearchResultMatchCount:(unsigned long long)arg1;
- (void)_clearSearch;
- (void)_setSearchString:(id)arg1;
- (id)_searchString;
- (void)resetColumnSortDescriptors;
- (void)setColumnSortDescriptors;
- (void)updateUIAfterFilterSearchChanged;
- (void)performFilterSearchSoon;
- (void)performFilterSearchGuts;
- (void)performFilterSearch;
- (BOOL)isShowingFilterSearchResults;
- (void)collectFilterSearchResultsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelPendingFilterSearch;
- (void)searchTextDidChange:(id)arg1;
- (void)undoPasteBookmarks:(id)arg1;
- (CDUnknownBlockType)_redoMoveCompletionBlock;
- (CDUnknownBlockType)_redoMovePreflightBlock;
- (void)undoMoveBookmarks:(id)arg1;
- (CDUnknownBlockType)_undoMoveCompletionBlock;
- (CDUnknownBlockType)_undoMovePreflightBlock;
- (void)undoNewBookmark:(id)arg1;
- (CDUnknownBlockType)_undoNewBookmarkCompletionBlockForUndoInfo:(id)arg1;
- (CDUnknownBlockType)_undoNewBookmarkPreflightBlock;
- (void)replaceBookmarksWithUndoInfo:(id)arg1 target:(id)arg2 selector:(SEL)arg3 reverseOrder:(BOOL)arg4;
- (void)removeBookmarksWithUndoInfo:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)redoPasteBookmarks:(id)arg1;
- (CDUnknownBlockType)_redoNewBookmarkCompletionBlockForUndoInfo:(id)arg1;
- (CDUnknownBlockType)_redoNewBookmarkPreflightBlock;
- (BOOL)moveBookmarks:(id)arg1 toNewFolder:(id)arg2;
- (id)makeNewContentsFolderWithTitle:(id)arg1 atRow:(long long)arg2 positionIgnoresSelection:(BOOL)arg3;
- (void)_deleteContentItems:(id)arg1;
- (void)deleteSelectedContentItems;
- (id)collectBookmarksToMoveToNewFolder;
- (void)changeAddressForBookmark:(id)arg1 to:(id)arg2;
- (void)prepareForDraggingBookmarks:(id)arg1 fromView:(id)arg2;
- (id)dragImageForRowCount:(int)arg1 dragImageOffset:(struct CGPoint *)arg2;
- (id)dragImageWithoutBadge;
- (void)cleanUpAfterDraggingBookmarksWithOperation:(unsigned long long)arg1;
- (id)badgeImageFromItemCount:(int)arg1;
- (void)goToSelectedContentItemsInNewTabsOrWindows;
- (void)goToContentItemInNewWindow:(id)arg1;
- (void)goToContentItemInNewTab:(id)arg1 tabPlacementHint:(const struct TabPlacementHint *)arg2;
- (void)goToContentItem:(id)arg1;
- (void)_replaceTabsWithDescendantsOfContentItem:(id)arg1;
- (void)_openAllChildrenOfContentItemInNewTabs:(id)arg1;
- (void)doubleClick:(id)arg1;
- (void)activateSelectedItems;
- (void)activateItem:(id)arg1;
- (BOOL)shouldEditTableColumn:(id)arg1 forContentItem:(id)arg2;
- (int)numberOfChildrenOfContentItem:(id)arg1;
- (BOOL)contentItemCanHaveChildren:(id)arg1;
- (id)collectionForDisplayedContentItem:(id)arg1;
- (id)bookmarksFromContentItems:(id)arg1;
- (id)bookmarkFromContentItem:(id)arg1;
- (void)setSelectionToBookmarks:(id)arg1;
- (BOOL)revealBookmarkInCurrentCollection:(id)arg1 expand:(BOOL)arg2;
- (unsigned long long)_numberOfHiddenBookmarksPriorToBookmarkAtIndex:(long long)arg1;
- (void)refreshContentsForSelectedProxy;
- (void)refreshContentsAndDeselectAll:(BOOL)arg1;
- (void)redrawContents;
- (void)focusOnNewlyCreatedContentItem:(id)arg1;
- (void)expandContentsOfSelectedCollection;
- (void)expandInitialContentsOfSelectedCollection;
- (void)expandAncestorsOfBookmark:(id)arg1;
- (void)endEditing;
- (void)_editBookmark:(id)arg1 columnID:(id)arg2;
- (id)selectedContentItems;
@property(readonly, nonatomic, getter=isShowingHistory) BOOL showingHistory;
- (BOOL)isShowingFilteredBookmarks;
- (void)updateParentColumnVisibility;
- (void)updateCollectionSpecificColumns;
- (void)updateAddressColumnVisibility;
- (id)createAndAddParentColumn;
- (void)adjustWidthOfOutlineViewColumnWithID:(id)arg1 forToggledTableColumn:(id)arg2;
- (id)addTemporaryColumnWithID:(id)arg1 title:(id)arg2;
- (id)_addressColumn;
- (BOOL)canPaste;
- (BOOL)canGoToContentItem:(id)arg1;
- (BOOL)canEditTitleOfContentItemAtRow:(int)arg1;
- (BOOL)canEditTitleOfCollection:(id)arg1;
- (BOOL)canEditSelectedBookmarkTitle;
- (BOOL)canEditSelectedBookmarkAddress;
- (BOOL)canEditAddressOfContentItemAtRow:(int)arg1;
- (BOOL)canDeleteContentItemAtRow:(int)arg1;
- (BOOL)canDeleteOrCopyBookmark:(id)arg1;
- (BOOL)_canDeleteOrCopyContentItems:(id)arg1;
- (BOOL)_canDeleteOrCopySelectedContentItems;
- (BOOL)_canDeleteContentItems:(id)arg1;
- (BOOL)_canDeleteSelectedContentItems;
- (BOOL)canCut;
- (BOOL)canCopyContentItemAtRow:(int)arg1;
- (BOOL)_canCopySelectedContentItems;
- (BOOL)_canCopyContentItems:(id)arg1;
- (BOOL)canAddToDisplayedContents;
- (void)updateUIForChangeToBookmark:(id)arg1 typeOfChange:(int)arg2;
- (void)updateSelectedCollection;
- (void)updateContentModificationButton;
- (void)reloadAllDisplayedBookmarks;
- (void)bookmarksReloaded:(id)arg1;
- (void)bookmarksChanged:(id)arg1;
- (void)bookmarkSourceContentsChanged:(id)arg1;
- (void)_unregisterNotifications;
- (void)stopObservingWhileOffScreen;
- (void)startObservingWhileOnScreen;
- (void)viewDidLoad;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)dealloc;
- (id)nibName;
- (id)initWithBookmarksController:(id)arg1 nibName:(id)arg2 bundle:(id)arg3;
- (id)initWithBookmarksController:(id)arg1;
- (unsigned long long)_searchResultsCount;
- (void)focusSearchField;
- (void)removeBookmarks:(id)arg1;
- (void)changeTitleOfBookmark:(id)arg1 to:(id)arg2;
- (void)showBookmarksCollection:(id)arg1;
- (id)pageTitle;
- (void)viewWillDisappear;
- (void)_updateTitleField;
- (void)updateViewConstraints;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)invalidate;
- (BOOL)outlineView:(id)arg1 wantsDFRAccessoriesForEditedRow:(long long)arg2 tableColumn:(id)arg3;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldEditOnSingleClick:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldEditOnDoubleClick:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4;
- (id)outlineView:(id)arg1 menuForEvent:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4;
- (BOOL)outlineView:(id)arg1 keyDown:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3;
- (id)outlineView:(id)arg1 dragImageForRowsWithIndexes:(id)arg2 tableColumns:(id)arg3 event:(id)arg4 offset:(struct CGPoint *)arg5;
- (void)outlineView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineView:(id)arg1 pasteboardWriterForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (unsigned long long)outlineView:(id)arg1 draggingSourceOperationMaskForLocal:(BOOL)arg2;
- (void)outlineView:(id)arg1 draggedImage:(id)arg2 endedAt:(struct CGPoint)arg3 operation:(unsigned long long)arg4;
- (void)outlineView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3 forItems:(id)arg4;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (void)paste:(id)arg1;
- (void)_editTitleOfBookmark:(id)arg1;
- (void)_editSelectedBookmarkTitle:(id)arg1;
- (void)_editAddressOfBookmark:(id)arg1;
- (void)delete:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)_copyContentItems:(id)arg1;
- (void)showClearHistoryPanel:(id)arg1;
- (void)addContentsFolder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) KeyLoopSplicingContainerView *view; // @dynamic view;

@end
