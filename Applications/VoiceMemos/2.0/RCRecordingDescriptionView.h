//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SettableIntrinsicSizeView.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSDate, NSLayoutConstraint, NSString, UILabel, UITextField;
@protocol RCRecordingDescriptionViewDelegate;

@interface RCRecordingDescriptionView : SettableIntrinsicSizeView <UITextFieldDelegate>
{
    NSString *_recordingTitle;
    double _recordingDuration;
    NSDate *_creationDate;
    long long _style;
    id <RCRecordingDescriptionViewDelegate> _delegate;
    UILabel *_creationDateLabel;
    UILabel *_durationLabel;
    UITextField *_titleTextField;
    NSString *_preEditingName;
    NSLayoutConstraint *_textFieldEditingWidthConstraintForTableView;
    NSLayoutConstraint *_textFieldDisplayWidthConstraint;
    NSLayoutConstraint *_textFieldEditingWidthConstraintForCardView;
    NSLayoutConstraint *_durationLabelLeadingConstraint;
    NSLayoutConstraint *_durationLabelCenteringConstraint;
    NSLayoutConstraint *_secondaryLabelsTopToBottomConstraint;
    NSLayoutConstraint *_creationDateBottomConstraint;
    NSArray *_alternateConstraintsForAXLargerTextSizes;
}

+ (id)descriptionViewWithStyle:(long long)arg1;
@property(retain, nonatomic) NSArray *alternateConstraintsForAXLargerTextSizes; // @synthesize alternateConstraintsForAXLargerTextSizes=_alternateConstraintsForAXLargerTextSizes;
@property(retain, nonatomic) NSLayoutConstraint *creationDateBottomConstraint; // @synthesize creationDateBottomConstraint=_creationDateBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *secondaryLabelsTopToBottomConstraint; // @synthesize secondaryLabelsTopToBottomConstraint=_secondaryLabelsTopToBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *durationLabelCenteringConstraint; // @synthesize durationLabelCenteringConstraint=_durationLabelCenteringConstraint;
@property(retain, nonatomic) NSLayoutConstraint *durationLabelLeadingConstraint; // @synthesize durationLabelLeadingConstraint=_durationLabelLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textFieldEditingWidthConstraintForCardView; // @synthesize textFieldEditingWidthConstraintForCardView=_textFieldEditingWidthConstraintForCardView;
@property(retain, nonatomic) NSLayoutConstraint *textFieldDisplayWidthConstraint; // @synthesize textFieldDisplayWidthConstraint=_textFieldDisplayWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textFieldEditingWidthConstraintForTableView; // @synthesize textFieldEditingWidthConstraintForTableView=_textFieldEditingWidthConstraintForTableView;
@property(copy, nonatomic) NSString *preEditingName; // @synthesize preEditingName=_preEditingName;
@property(retain, nonatomic) UITextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *creationDateLabel; // @synthesize creationDateLabel=_creationDateLabel;
@property(nonatomic) __weak id <RCRecordingDescriptionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) double recordingDuration; // @synthesize recordingDuration=_recordingDuration;
@property(copy, nonatomic) NSString *recordingTitle; // @synthesize recordingTitle=_recordingTitle;
- (void).cxx_destruct;
- (void)didChangePreferredContentSize;
- (void)beginEditingTitle;
- (void)removeTitleFieldAccessibilityTraits:(unsigned long long)arg1;
- (void)addTitleFieldAccessibilityTraits:(unsigned long long)arg1;
@property(nonatomic, getter=isTitleFieldAccessible) BOOL titleFieldAccessible;
@property(readonly, nonatomic) NSString *axDurationString;
@property(readonly, nonatomic) NSString *axCreationDateString;
- (id)accessibilityElements;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)_updateConstraintsForEditingEnd;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)_updateConstraintsForEditingBegin;
- (void)_maybeSelectAllTextFieldText;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)updateForDisplayMode:(long long)arg1;
- (void)layoutSubviews;
- (void)_setupCenteredConstraints;
- (void)_setupLeftAlignedConstraints;
- (void)_setupConstraints;
- (void)_commonInitWithStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1;
@property(nonatomic) BOOL titleEditingAllowed;
- (void)_setLabelColor:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)_updateForCreationDateLabelHidden:(BOOL)arg1;
- (void)setRecordingDuration:(double)arg1 withHiddenLabel:(BOOL)arg2;
- (void)localeDidChange;
- (void)_syncDisplayWidthConstraint;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
