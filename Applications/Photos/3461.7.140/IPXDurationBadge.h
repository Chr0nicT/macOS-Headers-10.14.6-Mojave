//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSAccessibilityGroup-Protocol.h"

@class CALayer, NSString, NSTextField;

@interface IPXDurationBadge : NSView <NSAccessibilityGroup>
{
    NSTextField *_textField;
    CALayer *_maskLayer;
    BOOL _rightToLeft;
    double _duration;
    double _cornerRadius;
}

@property(nonatomic, getter=isRightToLeft) BOOL rightToLeft; // @synthesize rightToLeft=_rightToLeft;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)accessibilityRoleDescription;
- (id)accessibilityChildren;
- (id)accessibilityLabel;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_centerTextField;
- (void)_updateMask;
- (void)layout;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;
- (struct CGSize)intrinsicContentSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
