//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import "HOTriggerEditorDelegate-Protocol.h"
#import "HOTriggerListSubheadlineCellDelegate-Protocol.h"
#import "HUAboutResidentDeviceViewControllerDelegate-Protocol.h"
#import "HUColoredButtonCellDelegate-Protocol.h"

@class HODashboardNavigationButton, HOTriggerListItemManager, HUGridLayoutOptions, NSString;

@interface HOTriggerListViewController : HUItemTableViewController <HUAboutResidentDeviceViewControllerDelegate, HOTriggerEditorDelegate, HUColoredButtonCellDelegate, HOTriggerListSubheadlineCellDelegate>
{
    BOOL _isTransitioningSizes;
    HOTriggerListItemManager *_triggerItemManager;
    HODashboardNavigationButton *_navigationAddButton;
    unsigned long long _editorPresentationMode;
    HUGridLayoutOptions *_layoutOptions;
}

@property(retain, nonatomic) HUGridLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(nonatomic) BOOL isTransitioningSizes; // @synthesize isTransitioningSizes=_isTransitioningSizes;
@property(nonatomic) unsigned long long editorPresentationMode; // @synthesize editorPresentationMode=_editorPresentationMode;
@property(readonly, nonatomic) HODashboardNavigationButton *navigationAddButton; // @synthesize navigationAddButton=_navigationAddButton;
@property(readonly, nonatomic) HOTriggerListItemManager *triggerItemManager; // @synthesize triggerItemManager=_triggerItemManager;
- (void).cxx_destruct;
- (void)_updateRightBarButtons;
- (void)_updateBackgroundColorAndMargins;
- (void)learnMoreLinkTapped:(id)arg1;
- (void)aboutResidentDeviceViewControllerDidFinish:(id)arg1;
- (void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)coloredButtonCellPressed:(id)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (BOOL)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (BOOL)shouldHideFooterBelowSection:(long long)arg1;
- (BOOL)shouldHideHeaderAboveSection:(long long)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)_showSummaryForTriggerItem:(id)arg1;
- (void)_addTrigger:(id)arg1;
- (void)showAddTriggerView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
