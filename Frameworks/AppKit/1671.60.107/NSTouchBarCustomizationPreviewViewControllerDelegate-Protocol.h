//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class NSTouchBarCustomizationPreviewViewController, NSTouchBarItemTree, NSTouchBarItemTreeNode;
@protocol NSTouchBarItemTreeParentNode;

@protocol NSTouchBarCustomizationPreviewViewControllerDelegate <NSObject>
- (void)controller:(NSTouchBarCustomizationPreviewViewController *)arg1 didSelectSection:(long long)arg2;
- (void)controller:(NSTouchBarCustomizationPreviewViewController *)arg1 didResetBarNode:(NSTouchBarItemTreeNode<NSTouchBarItemTreeParentNode> *)arg2 inItemTree:(NSTouchBarItemTree *)arg3;
- (void)controller:(NSTouchBarCustomizationPreviewViewController *)arg1 didUpdateBarNode:(NSTouchBarItemTreeNode<NSTouchBarItemTreeParentNode> *)arg2 inItemTree:(NSTouchBarItemTree *)arg3;
- (void)controller:(NSTouchBarCustomizationPreviewViewController *)arg1 didRemoveQuickTypeFromBarNode:(NSTouchBarItemTreeNode<NSTouchBarItemTreeParentNode> *)arg2 inItemTree:(NSTouchBarItemTree *)arg3;
- (void)controllerDidComplete:(NSTouchBarCustomizationPreviewViewController *)arg1;
@end
