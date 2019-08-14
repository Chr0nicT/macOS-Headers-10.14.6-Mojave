//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSFont, NSParagraphStyle, NSString;

@interface CSKBadgeLabel : NSView
{
    NSString *_labelString;
    NSFont *_labelFont;
    NSColor *_labelColor;
    NSColor *_labelBackgroundColor;
    NSParagraphStyle *_paragrapheStyle;
}

@property(retain, nonatomic) NSParagraphStyle *paragrapheStyle; // @synthesize paragrapheStyle=_paragrapheStyle;
@property(retain, nonatomic) NSColor *labelBackgroundColor; // @synthesize labelBackgroundColor=_labelBackgroundColor;
@property(retain, nonatomic) NSColor *labelColor; // @synthesize labelColor=_labelColor;
@property(retain, nonatomic) NSFont *labelFont; // @synthesize labelFont=_labelFont;
@property(copy, nonatomic) NSString *labelString; // @synthesize labelString=_labelString;
- (void).cxx_destruct;
- (id)_labelAttributes;
- (struct CGRect)_labelRectForLabelSize:(struct CGSize)arg1 containerRect:(struct CGRect)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)_commonInit;

@end
