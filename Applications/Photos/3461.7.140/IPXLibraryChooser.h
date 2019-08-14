//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXLibraryChooserClientProtocol-Protocol.h"
#import "NSOpenSavePanelDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class NSButton, NSMutableArray, NSMutableDictionary, NSProgressIndicator, NSString, NSTableView, NSTextField, NSURL, NSXPCConnection;
@protocol IPXLibraryChooserDelegate;

@interface IPXLibraryChooser : IPXViewController <NSOpenSavePanelDelegate, IPXLibraryChooserClientProtocol, NSTableViewDataSource, NSTableViewDelegate>
{
    BOOL _useStandardControls;
    id <IPXLibraryChooserDelegate> _delegate;
    NSURL *_selectedURL;
    NSMutableArray *_libraries;
    NSMutableDictionary *_librariesLastModified;
    NSXPCConnection *_libraryChooserServiceConnection;
    NSString *_systemPhotoLibraryMarker;
    NSString *_lastOpenedLibraryMarker;
    NSString *_currentlyOpenLibraryMarker;
    NSString *_systemPhotoLibrary;
    NSString *_lastOpenedLibrary;
    NSString *_currentLibrary;
    NSMutableArray *_specialLibraries;
    NSMutableArray *_librariesInPicturesDir;
    NSString *_userSelectedLibrary;
    long long _userSelectedLibraryIndex;
    NSTableView *_libraryTableView;
    NSTextField *_titleField;
    NSTextField *_noticeField;
    NSTextField *_fullPathField;
    NSProgressIndicator *_spotlightProgress;
    NSButton *_selectLibraryButton;
    NSButton *_otherLibraryButton;
    NSButton *_createLibraryButton;
}

+ (void)_getLibraryURLUsingParentWindow:(id)arg1 types:(id)arg2 title:(id)arg3 prompt:(id)arg4 reply:(CDUnknownBlockType)arg5;
+ (void)getImportLibraryURLUsingParentWindow:(id)arg1 reply:(CDUnknownBlockType)arg2;
+ (void)getOtherLibraryURLUsingParentWindow:(id)arg1 reply:(CDUnknownBlockType)arg2;
+ (void)getNewLibraryURLUsingParentWindow:(id)arg1 reply:(CDUnknownBlockType)arg2;
+ (id)_uniqueLibraryNameAtDirectory:(id)arg1 initialName:(id)arg2 extension:(id)arg3;
+ (id)userPicturesFolderURL;
+ (id)libraryURLsInPicturesFolder;
@property NSButton *createLibraryButton; // @synthesize createLibraryButton=_createLibraryButton;
@property NSButton *otherLibraryButton; // @synthesize otherLibraryButton=_otherLibraryButton;
@property NSButton *selectLibraryButton; // @synthesize selectLibraryButton=_selectLibraryButton;
@property NSProgressIndicator *spotlightProgress; // @synthesize spotlightProgress=_spotlightProgress;
@property NSTextField *fullPathField; // @synthesize fullPathField=_fullPathField;
@property NSTextField *noticeField; // @synthesize noticeField=_noticeField;
@property NSTextField *titleField; // @synthesize titleField=_titleField;
@property NSTableView *libraryTableView; // @synthesize libraryTableView=_libraryTableView;
@property long long userSelectedLibraryIndex; // @synthesize userSelectedLibraryIndex=_userSelectedLibraryIndex;
@property(retain) NSString *userSelectedLibrary; // @synthesize userSelectedLibrary=_userSelectedLibrary;
@property(retain) NSMutableArray *librariesInPicturesDir; // @synthesize librariesInPicturesDir=_librariesInPicturesDir;
@property(retain) NSMutableArray *specialLibraries; // @synthesize specialLibraries=_specialLibraries;
@property(retain) NSString *currentLibrary; // @synthesize currentLibrary=_currentLibrary;
@property(retain) NSString *lastOpenedLibrary; // @synthesize lastOpenedLibrary=_lastOpenedLibrary;
@property(retain) NSString *systemPhotoLibrary; // @synthesize systemPhotoLibrary=_systemPhotoLibrary;
@property(retain) NSString *currentlyOpenLibraryMarker; // @synthesize currentlyOpenLibraryMarker=_currentlyOpenLibraryMarker;
@property(retain) NSString *lastOpenedLibraryMarker; // @synthesize lastOpenedLibraryMarker=_lastOpenedLibraryMarker;
@property(retain) NSString *systemPhotoLibraryMarker; // @synthesize systemPhotoLibraryMarker=_systemPhotoLibraryMarker;
@property(retain) NSXPCConnection *libraryChooserServiceConnection; // @synthesize libraryChooserServiceConnection=_libraryChooserServiceConnection;
@property(retain) NSMutableDictionary *librariesLastModified; // @synthesize librariesLastModified=_librariesLastModified;
@property(retain) NSMutableArray *libraries; // @synthesize libraries=_libraries;
@property(retain) NSURL *selectedURL; // @synthesize selectedURL=_selectedURL;
@property BOOL useStandardControls; // @synthesize useStandardControls=_useStandardControls;
@property(retain) id <IPXLibraryChooserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)_lookupLastModified:(id)arg1;
- (id)_sortPathsUsingTableViewDescriptors:(id)arg1;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)didRemoveLibrariesAtPaths:(id)arg1;
- (void)didChangeLibrariesAtPaths:(id)arg1 to:(id)arg2;
- (void)didAddLibraries:(id)arg1;
- (void)didFinishInitialResultGatheringPhase;
- (void)didStartInitialResultGatheringPhase;
- (void)refreshTable;
- (id)selectedLibraryURL;
- (void)chooseLibrary:(CDUnknownBlockType)arg1;
- (void)chooseOtherLibrary:(id)arg1;
- (void)doubleClickedLibraryTable:(id)arg1;
- (void)openSelectedLibrary:(id)arg1;
- (void)createNewLibrary:(id)arg1;
- (BOOL)_libraryIsUsableAtURL:(id)arg1;
- (void)stop;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 systemPhotoLibrary:(id)arg2 lastOpenedLibrary:(id)arg3 currentLibrary:(id)arg4;
- (id)sortArrayOfStrings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
