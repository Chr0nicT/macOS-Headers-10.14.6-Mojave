//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDUndoableModelAction.h>

@interface IPXChangeVersionHiddenAction : RDUndoableModelAction
{
    unsigned long long _newState;
}

- (int)performActionWithModelObject:(id)arg1;
- (void)promptForExecutionWithWindow:(id)arg1 undoManager:(id)arg2 skipWarning:(BOOL)arg3 executionAccepted:(CDUnknownBlockType)arg4 executionRefused:(CDUnknownBlockType)arg5;
- (id)_confirmationButtonTextWithNonImageCount:(unsigned long long)arg1;
- (id)_confirmationMessage:(BOOL)arg1 nonImageCount:(unsigned long long)arg2;
- (unsigned long long)_nonImageCount;
- (BOOL)needsConfirmation;
- (id)defaultActionName;
- (id)initWithVersions:(id)arg1 hiddenState:(unsigned long long)arg2;

@end
