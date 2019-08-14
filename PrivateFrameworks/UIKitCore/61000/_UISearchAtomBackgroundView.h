//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/_UIAtomTextViewAtomLayout-Protocol.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UISearchAtomBackgroundView : UIView <_UIAtomTextViewAtomLayout>
{
    long long _selectionStyle;
    CDStruct_513ff01d _flags;
    UIColor *_defaultColor;
}

@property(retain, nonatomic) UIColor *defaultColor; // @synthesize defaultColor=_defaultColor;
- (void).cxx_destruct;
- (void)_updateSelectionStyleMask;
- (void)_updateBackgroundColor;
@property(readonly, nonatomic) struct CGRect selectionBounds;
- (void)setSelectionStyle:(long long)arg1 animated:(BOOL)arg2;
@property(nonatomic) long long selectionStyle;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isEnabled) BOOL enabled;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) long long baseWritingDirection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
