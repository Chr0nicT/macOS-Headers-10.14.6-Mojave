//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSearchField.h>

#import "NSTextViewDelegate-Protocol.h"

@class NSAttributedString, NSLayoutConstraint, NSString;

@interface SPSearchField : NSSearchField <NSTextViewDelegate>
{
    double _noResultLocalizedTargetStringWidth;
    NSLayoutConstraint *_searchFieldWidthConstraint;
    NSLayoutConstraint *_searchSeparatorSpacingConstraint;
    NSLayoutConstraint *_separatorTargetSpacingConstraint;
    NSLayoutConstraint *_targetFieldWidthConstraint;
    NSAttributedString *_targetString;
}

@property(retain) NSAttributedString *targetString; // @synthesize targetString=_targetString;
@property(retain) NSLayoutConstraint *targetFieldWidthConstraint; // @synthesize targetFieldWidthConstraint=_targetFieldWidthConstraint;
@property(retain) NSLayoutConstraint *separatorTargetSpacingConstraint; // @synthesize separatorTargetSpacingConstraint=_separatorTargetSpacingConstraint;
@property(retain) NSLayoutConstraint *searchSeparatorSpacingConstraint; // @synthesize searchSeparatorSpacingConstraint=_searchSeparatorSpacingConstraint;
@property(retain) NSLayoutConstraint *searchFieldWidthConstraint; // @synthesize searchFieldWidthConstraint=_searchFieldWidthConstraint;
- (void).cxx_destruct;
- (id)textView:(id)arg1 menu:(id)arg2 forEvent:(id)arg3 atIndex:(unsigned long long)arg4;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (struct _NSRange)textView:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
@property(readonly) NSString *targetStringValue;
- (id)tabCompletionStringValue;
@property(readonly) NSString *completionStringValue;
@property(retain) NSString *userStringValue;
@property(readonly) NSString *selectedStringValue;
@property(readonly) struct _NSRange targetRange;
@property(readonly) struct _NSRange completionRange;
@property(readonly) struct _NSRange userRange;
@property(readonly) struct _NSRange selectedRange;
- (id)hitTest:(struct CGPoint)arg1;
- (void)resizeSearchFieldForContent:(id)arg1;
@property(readonly) double noResultLocalizedTargetStringWidth; // @synthesize noResultLocalizedTargetStringWidth=_noResultLocalizedTargetStringWidth;
- (void)showTargetString:(id)arg1;
- (BOOL)textShouldBeginEditing:(id)arg1;
- (void)displayTargetString:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
