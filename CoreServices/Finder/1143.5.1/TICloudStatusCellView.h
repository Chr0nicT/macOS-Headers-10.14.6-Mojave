//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TListBaseCellView.h"

#import "TICloudBadgeButtonContainer-Protocol.h"
#import "TInlineProgressViewContainer-Protocol.h"

@class NSString;

@interface TICloudStatusCellView : TListBaseCellView <TICloudBadgeButtonContainer, TInlineProgressViewContainer>
{
    struct TNSRef<NSLayoutGuide, void> _badgeViewLayoutGuide;
    struct TNSRef<TICloudBadgeButton, void> _iCloudBadgeImageButton;
    struct TNSRef<TInlineProgressView, void> _progressView;
    struct TICloudStateCoordinator _iCloudStateCoordinator;
    struct CGSize _shortTitlePreferredSize;
}

@property(nonatomic) struct CGSize shortTitlePreferredSize; // @synthesize shortTitlePreferredSize=_shortTitlePreferredSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateTitleTextField;
- (void)updateProgressView;
- (void)setProgressStatus:(const struct TNodeProgressStatus *)arg1;
- (void)setICloudBadge:(int)arg1 toolTip:(const struct TString *)arg2 clickHandler:(const function_b1fce659 *)arg3;
- (void)setDimmed:(_Bool)arg1;
- (void)prepareForReuse;
- (void)setTitleFont:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
