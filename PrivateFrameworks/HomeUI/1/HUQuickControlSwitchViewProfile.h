//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeUI/HUQuickControlViewProfile.h>

#import <HomeUI/HUQuickControlIncrementalConvertibleProfile-Protocol.h>

@class HFNumberValueConstraints, NSString;

@interface HUQuickControlSwitchViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile>
{
}

@property(readonly, nonatomic) BOOL hasSecondaryValue;
- (double)gestureDragCoefficient;
@property(readonly, nonatomic) HFNumberValueConstraints *secondaryValueConstraints;
@property(readonly, nonatomic) HFNumberValueConstraints *primaryValueConstraints;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

