//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ICMacBaseTextView.h"

#import "ICAccessibilityFocusedUIElementProvider-Protocol.h"

@class ICTableColumnTextStorage, NSString, NSUUID;
@protocol ICMacTextViewEditorDelegate, ICTableColumnTextViewDelegate, ICTableSelectionDelegate;

@interface ICTableColumnTextView : ICMacBaseTextView <ICAccessibilityFocusedUIElementProvider>
{
    BOOL _textSelectionHidden;
    BOOL _isResigningFirstResponder;
    BOOL _shouldHideCaret;
    BOOL _isMouseDown;
    NSUUID *_columnID;
    id <ICTableColumnTextViewDelegate> _cellDelegate;
    id <ICTableSelectionDelegate> _selectionDelegate;
    id <ICMacTextViewEditorDelegate> _editorDelegate;
    struct _NSRange _previousSelectedRange;
}

@property(nonatomic) BOOL isMouseDown; // @synthesize isMouseDown=_isMouseDown;
@property(retain) id <ICMacTextViewEditorDelegate> editorDelegate; // @synthesize editorDelegate=_editorDelegate;
@property(nonatomic) BOOL shouldHideCaret; // @synthesize shouldHideCaret=_shouldHideCaret;
@property(nonatomic) struct _NSRange previousSelectedRange; // @synthesize previousSelectedRange=_previousSelectedRange;
@property(nonatomic) BOOL isResigningFirstResponder; // @synthesize isResigningFirstResponder=_isResigningFirstResponder;
@property(nonatomic) BOOL textSelectionHidden; // @synthesize textSelectionHidden=_textSelectionHidden;
@property(nonatomic) __weak id <ICTableSelectionDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
@property(nonatomic) __weak id <ICTableColumnTextViewDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(retain, nonatomic) NSUUID *columnID; // @synthesize columnID=_columnID;
- (void).cxx_destruct;
- (id)alternativeFocusedUIElement;
- (void)accessibilityPostNotification:(id)arg1;
- (BOOL)isAccessibilityElement;
- (BOOL)respondsToSelector:(SEL)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)readSelectionFromPasteboard:(id)arg1 type:(id)arg2;
- (void)changeFont:(id)arg1;
- (void)strikethrough:(id)arg1;
- (void)underline:(id)arg1;
- (void)performTextFinderAction:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)shouldDrawInsertionPoint;
- (void)selectRangesForRows:(id)arg1;
- (unsigned long long)modifierFlagAffectingSelection;
- (void)setSelectedRanges:(id)arg1 affinity:(unsigned long long)arg2 stillSelecting:(BOOL)arg3;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)acceptableDragTypes;
- (void)selectAll:(id)arg1;
- (void)moveToEndOfDocumentAndModifySelection:(id)arg1;
- (void)moveToBeginningOfDocumentAndModifySelection:(id)arg1;
- (void)moveToEndOfDocument:(id)arg1;
- (void)moveToBeginningOfDocument:(id)arg1;
- (void)moveToRightEndOfLine:(id)arg1;
- (void)moveToLeftEndOfLine:(id)arg1;
- (void)moveWordRight:(id)arg1;
- (void)moveWordLeft:(id)arg1;
- (void)moveWordInDirection:(unsigned long long)arg1 withPreviousLocation:(unsigned long long)arg2;
- (void)moveRight:(id)arg1;
- (void)moveLeft:(id)arg1;
- (BOOL)moveInDirection:(unsigned long long)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (struct CGRect)selectionRect;
@property(readonly, nonatomic) ICTableColumnTextStorage *columnTextStorage;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)paste:(id)arg1;
- (BOOL)atCellBoundaryForDirection:(unsigned long long)arg1;
- (void)moveToEndOfCellAndModifySelection:(id)arg1;
- (void)moveToBeginningOfCellAndModifySelection:(id)arg1;
- (void)moveToEndOfCell:(id)arg1;
- (void)moveToBeginningOfCell:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
