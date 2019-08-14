//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "BKPreferencesModule.h"

#import "BDSLiverpoolStatusChangeObserving-Protocol.h"

@class NSButton, NSMatrix, NSString, NSTextField;

@interface BKGeneralPreferences : BKPreferencesModule <BDSLiverpoolStatusChangeObserving>
{
    NSMatrix *_justificationMatrix;
    NSButton *_autoHyphenateButton;
    NSButton *_syncBookmarksButton;
    NSTextField *_syncBookmarksLabel;
    NSButton *_preventScreenDimmingButton;
    BOOL _observingLiverpoolIdentity;
    NSButton *_syncCollectionsButton;
}

@property(nonatomic) BOOL observingLiverpoolIdentity; // @synthesize observingLiverpoolIdentity=_observingLiverpoolIdentity;
@property __weak NSButton *syncCollectionsButton; // @synthesize syncCollectionsButton=_syncCollectionsButton;
- (void).cxx_destruct;
- (void)liverpoolStatusChangedToAvailableWithNewIdentity:(id)arg1 oldIdentity:(id)arg2;
- (void)willBeDisplayed;
- (void)_updateSyncBookmarksButtonState;
- (void)updateControls;
- (void)preventScreenDimmingAction:(id)arg1;
- (void)resetDialogWarningsAction:(id)arg1;
- (void)syncBookmarksAction:(id)arg1;
- (void)autoHyphenateAction:(id)arg1;
- (void)justificationAction:(id)arg1;
- (BOOL)isResizable;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingLiverpool;
- (void)_startObservingLiverpool;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
