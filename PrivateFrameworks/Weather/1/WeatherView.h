//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Weather/CityUpdateObserver-Protocol.h>

@class City, NSLocale, NSString;

@interface WeatherView : UIView <CityUpdateObserver>
{
    City *_city;
    BOOL _showingDay;
    BOOL _showWind;
    UIView *_windView;
    NSLocale *_lastLocale;
}

@property(retain, nonatomic, setter=showCity:) City *city; // @synthesize city=_city;
- (void).cxx_destruct;
- (void)cleanupWindView;
- (id)bundle;
- (void)refreshLocalization;
- (void)cityDidStartWeatherUpdate:(id)arg1;
- (BOOL)updateWeatherDisplayForCity:(id)arg1;
- (BOOL)_setCity:(id)arg1 associateAsDelegate:(BOOL)arg2;
- (void)cityDidFinishWeatherUpdate:(id)arg1;
- (void)resetLocale:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
