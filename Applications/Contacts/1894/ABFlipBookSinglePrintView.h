//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSLayoutManagerDelegate-Protocol.h"

@class ABFlipBookPrintMode, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, NSTextView;

@interface ABFlipBookSinglePrintView : NSView <NSLayoutManagerDelegate>
{
    struct _NSRange _letterRange;
    NSTextView *_textView;
    NSTextContainer *_textContainer;
    NSTextStorage *_textStorage;
    NSLayoutManager *_layoutManager;
    ABFlipBookPrintMode *_controller;
    BOOL _leftMarks;
    BOOL _rightMarks;
    BOOL _printMode;
    BOOL _isFirstView;
    struct CGSize _lastSize;
}

- (struct _NSRange)addAttributedString:(id)arg1 count:(BOOL)arg2;
- (struct _NSRange)maximumRangeForHeight:(double)arg1 range:(struct _NSRange)arg2;
- (struct CGRect)actualUsedRectForRange:(struct _NSRange)arg1;
- (void)setIsFirstView:(BOOL)arg1;
- (BOOL)printMode;
- (void)setPrintMode:(BOOL)arg1;
- (BOOL)rightMarks;
- (BOOL)leftMarks;
- (void)setRightMarks:(BOOL)arg1;
- (void)setLeftMarks:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (struct CGSize)size;
- (id)container;
- (void)setTextContainer:(id)arg1;
- (void)setLetterRange:(struct _NSRange)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2;
- (struct CGRect)textFrame;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
