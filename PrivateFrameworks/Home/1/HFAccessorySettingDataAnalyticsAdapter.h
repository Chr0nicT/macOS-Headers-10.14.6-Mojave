//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFAccessorySettingAdapter.h>

#import <Home/HFAccessorySettingAdapterDisplayArbitrating-Protocol.h>

@class NSString;

@interface HFAccessorySettingDataAnalyticsAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterDisplayArbitrating>
{
}

- (id)customizeSections:(id)arg1 forEntity:(id)arg2;
- (void)configureSection:(id)arg1 forEntity:(id)arg2;
- (BOOL)shouldShowSettingsEntity:(id)arg1;
- (id)initWithMediaProfileContainer:(id)arg1 mode:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
