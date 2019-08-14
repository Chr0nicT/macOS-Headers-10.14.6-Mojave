//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeUI/HUItemTableModuleController.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString;
@protocol HOPresenceUserPickerItemModuleControllerDelegate;

@interface HOPresenceUserPickerItemModuleController : HUItemTableModuleController <UITextViewDelegate>
{
    id <HOPresenceUserPickerItemModuleControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <HOPresenceUserPickerItemModuleControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (id)_showAlertForConfirmationPrompt:(id)arg1;
- (void)accessoryButtonTappedForItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (BOOL)canSelectDisabledItem:(id)arg1;
- (BOOL)canSelectItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3;
- (Class)cellClassForItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
