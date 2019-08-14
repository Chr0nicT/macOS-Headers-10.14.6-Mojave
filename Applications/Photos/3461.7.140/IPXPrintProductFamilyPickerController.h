//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXPhotoPickerAccessoryController-Protocol.h"

@class KHPrintsProjectBundleController, KHProductSubgroup, KHProductSubgroupMenuController, NSLayoutConstraint, NSPopUpButton, NSString, NSView;

@interface IPXPrintProductFamilyPickerController : IPXViewController <IPXPhotoPickerAccessoryController>
{
    CDUnknownBlockType _updateHandler;
    KHPrintsProjectBundleController *_projectBundleController;
    KHProductSubgroup *_selectedProductSubgroup;
    KHProductSubgroupMenuController *_menuController;
    NSPopUpButton *_popUpButton;
    NSLayoutConstraint *_widthConstraint;
}

@property(readonly, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(readonly, nonatomic) NSPopUpButton *popUpButton; // @synthesize popUpButton=_popUpButton;
@property(readonly, nonatomic) KHProductSubgroupMenuController *menuController; // @synthesize menuController=_menuController;
@property(readonly, nonatomic) KHProductSubgroup *selectedProductSubgroup; // @synthesize selectedProductSubgroup=_selectedProductSubgroup;
@property(readonly, nonatomic) KHPrintsProjectBundleController *projectBundleController; // @synthesize projectBundleController=_projectBundleController;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)didChangeSubgroup:(id)arg1;
- (id)initWithProjectBundleController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) NSView *view;

@end
