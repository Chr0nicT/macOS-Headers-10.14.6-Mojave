//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PVMediaUIControl.h"

@class NSImage, NSString;

@interface PVMediaUIButton : PVMediaUIControl
{
    NSImage *_image;
    NSString *_title;
    NSString *_keyEquivalent;
    unsigned long long _keyEquivalentModifierMask;
    BOOL _bordered;
    long long _state;
}

+ (void)initialize;
@property(nonatomic) unsigned long long keyEquivalentModifierMask; // @synthesize keyEquivalentModifierMask=_keyEquivalentModifierMask;
@property(copy, nonatomic) NSString *keyEquivalent; // @synthesize keyEquivalent=_keyEquivalent;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (id)objectValue;
- (double)MediaUI_slice;
- (void)renewGState;
- (void)drawRect:(struct CGRect)arg1;
- (struct NSEdgeInsets)alignmentRectInsets;
- (void)mouseDown:(id)arg1;
- (BOOL)isFlipped;
- (void)performClick:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
@property(nonatomic, getter=isBordered) BOOL bordered;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) NSImage *image;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;

@end
