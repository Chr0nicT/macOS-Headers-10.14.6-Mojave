//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBADraftingController, FBATableUpdates, NSError;

@protocol FBADraftingDelegate <NSObject>

@optional
- (void)draftingController:(FBADraftingController *)arg1 madeVisibilityUpdates:(FBATableUpdates *)arg2;
- (void)questionVisiblityDidUpdateForDraftingController:(FBADraftingController *)arg1;
- (void)draftingControllerDidFinishLoading:(FBADraftingController *)arg1 withError:(NSError *)arg2;
- (void)draftingControllerDidBeginLoading:(FBADraftingController *)arg1;
@end
