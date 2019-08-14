//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DOMRange, UIResponder, UITextRange;
@protocol UITextInputPrivate;

__attribute__((visibility("hidden")))
@interface UITextSelection : NSObject
{
    UIResponder<UITextInputPrivate> *_document;
    long long _granularity;
    UITextRange *_selectedRange;
    UITextRange *_base;
    UITextRange *_initialExtent;
    BOOL _isCommitting;
    DOMRange *_domRange;
}

@property(readonly, nonatomic, getter=_domRange) DOMRange *domRange; // @synthesize domRange=_domRange;
@property(readonly, nonatomic) __weak UIResponder<UITextInputPrivate> *document; // @synthesize document=_document;
@property(readonly, nonatomic) BOOL isCommitting; // @synthesize isCommitting=_isCommitting;
@property(retain, nonatomic) UITextRange *selectedRange; // @synthesize selectedRange=_selectedRange;
@property(retain, nonatomic) UITextRange *initialExtent; // @synthesize initialExtent=_initialExtent;
@property(nonatomic) long long granularity; // @synthesize granularity=_granularity;
@property(retain, nonatomic) UITextRange *base; // @synthesize base=_base;
- (void).cxx_destruct;
- (void)smartExtendRangedSelection:(int)arg1 downstream:(BOOL)arg2;
- (void)setRangedSelectionWithExtentPoint:(struct CGPoint)arg1;
- (void)setSelectionWithFirstPoint:(struct CGPoint)arg1 secondPoint:(struct CGPoint)arg2;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint)arg1 baseIsStart:(BOOL)arg2;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint)arg1 baseIsStart:(BOOL)arg2 allowFlipping:(BOOL)arg3;
- (struct CGPoint)clipPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;
- (void)clearRangedSelectionInitialExtent;
- (void)setRangedSelectionBaseToCurrentSelectionEnd;
- (void)setRangedSelectionBaseToCurrentSelectionStart;
- (void)setRangedSelectionBaseToCurrentSelection;
- (BOOL)hasEditableSelection;
- (BOOL)pointAtEndOfLine:(struct CGPoint)arg1;
- (BOOL)pointAtStartOfLine:(struct CGPoint)arg1;
- (void)moveCaretToBoundaryOfWhitespaceOrLine;
- (void)increaseSelectionGranularity;
- (void)alterSelectionGranularity:(long long)arg1;
- (void)alterSelection:(struct CGPoint)arg1 granularity:(long long)arg2;
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;
- (void)collapseSelection;
- (void)clearSelection;
- (void)selectAll;
- (void)setHybridSelectionWithPoint:(struct CGPoint)arg1;
- (void)extendSelectionToPoint:(struct CGPoint)arg1;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (unsigned long long)offsetInMarkedText;
- (struct CGRect)closestCaretRectForPoint:(struct CGPoint)arg1 inSelection:(BOOL)arg2;
- (id)selectedText;
- (id)wordContainingCaretSelection;
- (struct CGRect)caretRectAtBeginOfDocument;
- (struct CGRect)caretRectAtEndOfDocument;
- (struct CGRect)caretRect;
- (id)selectionRects;
- (void)commit;
- (void)selectionChanged;
- (void)dealloc;
- (void)invalidate;
- (id)initWithDocument:(id)arg1;

@end
