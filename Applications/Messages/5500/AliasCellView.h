//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import "ClickableTextFieldDelegate-Protocol.h"

@class ClickableTextField, NSButton, NSStackView, NSString, NSTextField;
@protocol NSObject><AliasCellViewDelegate;

@interface AliasCellView : NSTableCellView <ClickableTextFieldDelegate>
{
    id _originalTarget;
    SEL _originalAction;
    id <NSObject><AliasCellViewDelegate> _delegate;
    NSStackView *_stackView;
    NSButton *_activeCheckboxButton;
    NSTextField *_warningLabel;
    ClickableTextField *_detailsLabelButton;
}

+ (id)stringForAliasVerificationStatus:(int)arg1;
+ (long long)heightForCellType:(int)arg1;
@property(retain) ClickableTextField *detailsLabelButton; // @synthesize detailsLabelButton=_detailsLabelButton;
@property(retain) NSTextField *warningLabel; // @synthesize warningLabel=_warningLabel;
@property(retain) NSButton *activeCheckboxButton; // @synthesize activeCheckboxButton=_activeCheckboxButton;
@property(retain) NSStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) id <NSObject><AliasCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionCancelled:(id)arg1;
- (void)mouseDownPressed:(id)arg1;
- (void)detailsLabelButtonPressed:(id)arg1;
- (void)_aliasNamePressed:(id)arg1;
- (void)activateCheckboxPressed:(id)arg1;
- (void)_updateEnabledState;
- (void)_updateActiveState;
- (void)_updateVerificationState;
- (void)setChecked:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)startEditing;
- (id)alias;
- (void)setObjectValue:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

