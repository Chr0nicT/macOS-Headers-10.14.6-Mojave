//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXSharedStreamSettingsViewController.h"

#import "IPXShareToiCloudResultProvider-Protocol.h"

@class IPXCreateSharedStreamAction, IPXSelectionLite, NSMutableSet, NSString, RDAlbum;
@protocol IPXShareiCloudCreateViewControllerDelegate;

@interface IPXShareiCloudCreateViewController : IPXSharedStreamSettingsViewController <IPXShareToiCloudResultProvider>
{
    long long _numberOfVersionsShared;
    RDAlbum *_sharedAlbum;
    IPXCreateSharedStreamAction *_createAction;
    NSMutableSet *_resourceRequests;
    BOOL _includeVideoComplement;
    IPXSelectionLite *_selection;
    id <IPXShareiCloudCreateViewControllerDelegate> _delegate;
}

@property(nonatomic) BOOL includeVideoComplement; // @synthesize includeVideoComplement=_includeVideoComplement;
@property __weak id <IPXShareiCloudCreateViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IPXSelectionLite *selection; // @synthesize selection=_selection;
- (void).cxx_destruct;
- (id)sharedAlbum;
- (long long)numberOfVersionsShared;
- (void)actionButtonClicked:(id)arg1;
- (void)dealloc;
- (void)viewDidDisappear;
- (void)_cleanupAndShowDoneMessage:(BOOL)arg1;
- (void)_attemptPerformStreamCreation;
- (void)_performStreamCreation:(id)arg1;
- (BOOL)_createSharedStream:(id)arg1 versions:(id)arg2;
- (BOOL)_createEmptySharedStream:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
