//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UXKit/UXView.h>

@class UXLabel;

@interface PXPeopleProgressFooterView : UXView
{
    BOOL _usesEmphasizedTitle;
    UXLabel *_titleLabel;
    UXLabel *_subtitleLabel;
}

@property(nonatomic) BOOL usesEmphasizedTitle; // @synthesize usesEmphasizedTitle=_usesEmphasizedTitle;
@property(retain, nonatomic) UXLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UXLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)arg1;
- (void)_setupConstraints;
- (void)_setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
