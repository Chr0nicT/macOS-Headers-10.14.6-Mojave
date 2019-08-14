//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXMetadataEditorFacesDataSource-Protocol.h"
#import "IPXMetadataEditorViewController-Protocol.h"
#import "RDVisionClientNotificationReceiver-Protocol.h"

@class IPXMetadataEditorFacesView, IPXMetadataInfoViewController, NSArray, NSOperationQueue, NSString, NSView, PFCoalescer;

@interface IPXMetadataEditorFacesViewController : IPXViewController <RDVisionClientNotificationReceiver, IPXMetadataEditorViewController, IPXMetadataEditorFacesDataSource>
{
    NSOperationQueue *_deferredDataQueue;
    BOOL _observingFacesEditingNotifier;
    BOOL _isVisible;
    NSArray *_versions;
    NSArray *_faceTiles;
    BOOL _editable;
    BOOL _hidesUnnamedFaces;
    IPXMetadataInfoViewController *_contentController;
    PFCoalescer *_reloadingCoalescer;
}

@property(retain, nonatomic) PFCoalescer *reloadingCoalescer; // @synthesize reloadingCoalescer=_reloadingCoalescer;
@property(nonatomic) __weak IPXMetadataInfoViewController *contentController; // @synthesize contentController=_contentController;
@property(nonatomic) BOOL hidesUnnamedFaces; // @synthesize hidesUnnamedFaces=_hidesUnnamedFaces;
@property(nonatomic, getter=isEditable) BOOL editable; // @synthesize editable=_editable;
- (void).cxx_destruct;
- (void)didUpdateFaces:(id)arg1;
- (void)didDeleteFaceModelIds:(id)arg1;
- (void)didAddFaces:(id)arg1;
- (void)didUpdatePersons:(id)arg1;
- (void)didDeletePersonModelIds:(id)arg1;
- (void)didAddPersons:(id)arg1;
- (void)saveChanges;
- (void)selectedVersions:(id)arg1;
- (id)deferredDataQueue;
- (id)propertiesForTable:(id)arg1;
- (id)tableClasses;
- (void)metadataEditorFacesCollectionViewExpand:(id)arg1;
- (void)metadataEditorFacesCollectionView:(id)arg1 deleteItemsAtIndexes:(id)arg2;
- (void)metadataEditorFacesCollectionViewAddItem:(id)arg1;
- (void)facesEditingDidAssignFaceTileToPerson:(id)arg1;
- (void)facesEditingDidChangeFaceTileGeometryNotification:(id)arg1;
- (void)facesEditingDidAddFaceTilesNotification:(id)arg1;
- (void)facesEditingDidDeleteFaceTilesNotification:(id)arg1;
- (unsigned long long)versionsCount;
- (CDUnknownBlockType)_faceTileComparator;
- (void)reloadFaceTilesFromLibrary:(id)arg1 abortingIfDataPreparationIsDisabled:(BOOL)arg2;
- (void)reloadFaceTilesAbortingIfDataPreparationIsDisabled:(BOOL)arg1;
- (void)reload;
@property(readonly, nonatomic) IPXMetadataEditorFacesView *facesView;
@property(retain) NSArray *faceTiles;
@property(copy) NSArray *versions;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSView *finalFirstResponder;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSView *initialFirstResponder;
@property(readonly) Class superclass;

@end
