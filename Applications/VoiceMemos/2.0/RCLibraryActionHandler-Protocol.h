//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSString, UIViewController;

@protocol RCLibraryActionHandler
- (void)hideBackButtonTitle:(BOOL)arg1;
- (void)libraryChangedToEmptyState:(BOOL)arg1;
- (BOOL)isPlayingForUUID:(NSString *)arg1;
- (BOOL)recordingTitleHasBeenEditedForUUID:(NSString *)arg1;
- (void)recoverRecordingsWithUUIDs:(NSArray *)arg1 source:(id)arg2;
- (void)confirmDeletionWithUUIDs:(NSArray *)arg1 deleteAllEvicted:(BOOL)arg2;
- (void)confirmEvictionWithUUIDs:(NSArray *)arg1 source:(id)arg2 force:(BOOL)arg3 showInfo:(BOOL)arg4;
- (void)updateNavBarTitleAndDeleteButtonForRecordingsCount:(unsigned long long)arg1 isEditMode:(BOOL)arg2;
- (void)updateBottomLayoutForEditMode:(BOOL)arg1;
- (void)performClearAllRecentlyDeleted;
- (void)performRenameWithNewTitle:(NSString *)arg1 forUUID:(NSString *)arg2;
- (void)performAction:(long long)arg1 atPosition:(double)arg2 forUUID:(NSString *)arg3 sourceController:(UIViewController *)arg4 source:(id)arg5;
- (void)wasDeselectedForUUID:(NSString *)arg1;
- (void)didSelectForUUID:(NSString *)arg1;
- (void)selectedRecordingDidChange;
@end
