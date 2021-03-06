//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIActionSheetPresentationControllerDismissActionView-Protocol.h>

@class NSString, UIButton;

__attribute__((visibility("hidden")))
@interface UIActionSheetiOSDismissActionView : UIView <UIActionSheetPresentationControllerDismissActionView>
{
    BOOL _usesShortCompactVerticalLayout;
    UIButton *_dismissButton;
}

@property(nonatomic) BOOL usesShortCompactVerticalLayout; // @synthesize usesShortCompactVerticalLayout=_usesShortCompactVerticalLayout;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)_heightForTraitCollection:(id)arg1;
@property(copy, nonatomic) NSString *title;
- (void)setHighlighted:(BOOL)arg1;
- (void)_applyContinuousCornerRadius:(double)arg1;
- (void)_setupDismissButton;
- (id)initWithContinuousCornerRadius:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

