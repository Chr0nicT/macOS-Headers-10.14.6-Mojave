//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FRCollectionHeaderReusableView, FRHeartControl, UIButton;

@protocol FRCollectionHeaderDelegate <NSObject>
- (void)header:(FRCollectionHeaderReusableView *)arg1 favoriteButtonTapped:(FRHeartControl *)arg2;
- (void)header:(FRCollectionHeaderReusableView *)arg1 muteButtonTapped:(FRHeartControl *)arg2;
- (void)header:(FRCollectionHeaderReusableView *)arg1 sectionLongPressed:(UIButton *)arg2;
- (void)headerTapped:(FRCollectionHeaderReusableView *)arg1;
@end
