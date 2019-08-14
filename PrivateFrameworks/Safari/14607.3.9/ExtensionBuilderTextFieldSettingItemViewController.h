//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/ExtensionBuilderSettingItemDetailsViewController.h>

@class NSButton, NSLayoutConstraint, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface ExtensionBuilderTextFieldSettingItemViewController : ExtensionBuilderSettingItemDetailsViewController
{
    NSTextField *_titleTextField;
    NSTextField *_defaultValueLabelTextField;
    NSTextField *_defaultValueTextField;
    NSButton *_storeInSecureSettingsCheckbox;
    NSView *_titleErrorContainerView;
    NSView *_keyErrorContainerView;
    NSLayoutConstraint *_titleErrorContainerViewToKeyVerticalConstraint;
    NSLayoutConstraint *_keyErrorContainerViewToDefaultValueVerticalConstraint;
    NSLayoutConstraint *_keyErrorContainerViewToDisplayAsPasswordVerticalConstraint;
    NSLayoutConstraint *_defaultValueToDisplayAsPasswordVerticalConstraint;
    NSLayoutConstraint *_keyLabelToDefaultValueLabelAlignTrailingConstraint;
}

+ (id)keyPathsForValuesAffectingDisplayAsPassword;
@property(retain, nonatomic) NSLayoutConstraint *keyLabelToDefaultValueLabelAlignTrailingConstraint; // @synthesize keyLabelToDefaultValueLabelAlignTrailingConstraint=_keyLabelToDefaultValueLabelAlignTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *defaultValueToDisplayAsPasswordVerticalConstraint; // @synthesize defaultValueToDisplayAsPasswordVerticalConstraint=_defaultValueToDisplayAsPasswordVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *keyErrorContainerViewToDisplayAsPasswordVerticalConstraint; // @synthesize keyErrorContainerViewToDisplayAsPasswordVerticalConstraint=_keyErrorContainerViewToDisplayAsPasswordVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *keyErrorContainerViewToDefaultValueVerticalConstraint; // @synthesize keyErrorContainerViewToDefaultValueVerticalConstraint=_keyErrorContainerViewToDefaultValueVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleErrorContainerViewToKeyVerticalConstraint; // @synthesize titleErrorContainerViewToKeyVerticalConstraint=_titleErrorContainerViewToKeyVerticalConstraint;
@property(nonatomic) __weak NSView *keyErrorContainerView; // @synthesize keyErrorContainerView=_keyErrorContainerView;
@property(nonatomic) __weak NSView *titleErrorContainerView; // @synthesize titleErrorContainerView=_titleErrorContainerView;
@property(nonatomic) __weak NSButton *storeInSecureSettingsCheckbox; // @synthesize storeInSecureSettingsCheckbox=_storeInSecureSettingsCheckbox;
@property(nonatomic) __weak NSTextField *defaultValueTextField; // @synthesize defaultValueTextField=_defaultValueTextField;
@property(nonatomic) __weak NSTextField *defaultValueLabelTextField; // @synthesize defaultValueLabelTextField=_defaultValueLabelTextField;
@property(nonatomic) __weak NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
- (void).cxx_destruct;
- (void)_representedObjectDidChange;
- (id)lastKeyView;
- (id)firstKeyView;
- (id)nibName;
@property(nonatomic) BOOL displayAsPassword;
- (void)_updateVisibilityOfDefaultValue;
- (void)_updateVisibilityOfKeyError;
- (void)_updateVisibilityOfTitleError;

@end
